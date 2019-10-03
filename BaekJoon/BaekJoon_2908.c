#include <stdio.h>

int main(void)
{
	int max = 0, count = 0, num;
	char K, str[10];

	do {
		scanf("%c", &K);
		
		if (K != ' ')
		{
			str[count] = K;
			count++;
		}
	} while (count < 7);

	for (int i = 0; i < 6; i += 3)
	{
		num = (str[i] - '0');
		num += ((str[i + 1] - '0') * 10);
		num	+= ((str[i + 2] - '0') * 100);

		if (max < num) max = num;
	}

	printf("%d", max);

	return 0;
}