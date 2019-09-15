#include <stdio.h>
#define MAX 1000

void sort(int* arr, int flag)
{
	int temp;

	for (int i = 0; i < flag; i++)
	{
		for (int j = i; j < flag; j++)
		{
			if (arr[i] > arr[j]) 
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int solution(int* arr, int flag)
{
	int sum = 0;

	for (int i = flag, j = 0; i > 0; i--, j++)
	{
		sum += i * arr[j];
	}

	return sum;
}

int main(void)
{
	int flag, num, arr[MAX];

	scanf("%d", &flag);

	for (int i = 0; i < flag; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}

	sort(arr, flag);
	printf("%d", solution(arr, flag));
	
	return 0;
}