#include <stdio.h>
#include "Stack.h"
#include "Calc.h"

int main(void)
{
	int count = 0;
	Stack plist;
	char str[10000], K, arr[10000];

	scanf("%s", str);
	SInit(&plist);

	for (int i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			arr[count] = str[i];
			count++;
		}
		else if (str[i] == ')')
		{
			while (1)
			{
				pop(&plist, &K);
				if (K == '(') break;

				arr[count] = K;
				count++;
			}
		}
		else
		{
			while (op_code(str[i], 0) < op_code(plist.arr[plist.top], 1))
			{
				pop(&plist, &K);
				arr[count] = K;
				count++;
			}

			push(&plist, str[i]);
		}
	}

	while (plist.top != -1)
	{
		pop(&plist, &K);
		arr[count] = K;
		count++;
	}

	cal(arr, count);

	return 0;
}