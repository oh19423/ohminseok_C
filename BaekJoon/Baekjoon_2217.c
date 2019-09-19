#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int static compare(const void* first, const void* second)
{
	if (*(int*)first > * (int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int solution(int* arr, int N)
{
	int max = 0, flag = N;

	for (int i = 0; i < N; i++, flag--)
		if (max < (arr[i] * flag))
			max = (arr[i] * flag);

	return max;
}

int main(void)
{
	int N, arr[MAX];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, sizeof(int), compare);
	printf("%d", solution(arr, N));

	return 0;
}