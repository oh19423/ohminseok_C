#include <stdio.h>
#define MAX 10000

int sum(int num)
{
	int sum = num;

	while(num)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

void d(int* arr)
{
	int num;

	for (int i = 1; i < MAX; i++)
	{
		num = sum(i);

		if (num < MAX) arr[num] = 0;
	}
}


int main(void)
{
	int arr[MAX];

	for (int i = 0; i < MAX; i++)
	{
		arr[i] = i;
	}

	d(arr);

	for (int i = 1; i < MAX; i++)
	{
		if (arr[i] == 0) continue;
		printf("%d\n", arr[i]);
	}

	return 0;
}