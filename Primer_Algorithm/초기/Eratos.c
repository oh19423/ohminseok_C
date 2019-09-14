#include <stdio.h>
#define MAX 10000

void find_Primer(int* arr, int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (arr[i] == 0) continue;

		for (int j = i + 1; j <= num; j++)
		{
			if (arr[j] % arr[i] == 0) arr[j] = 0;
		}
	}
}

int main(void)
{
	int num, arr[MAX];

	printf("Enter a integer: ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++)
		arr[i] = i;

	find_Primer(arr, num);

	for (int i = 2; i <= num; i++)
		if (arr[i] != 0) printf("%d ", arr[i]);

	return 0;
}