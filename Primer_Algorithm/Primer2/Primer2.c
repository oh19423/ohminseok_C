#include <stdio.h>
#include "Primer2.h"

int find_Primer(int N)
{
	for (int i = 2; i < N; i++)
	{
		if (N % i == 0) return -1;
	}

	return N;
}

void make_Arr(int N, int* arr, int count)
{
	for (int i = 2; i <= N; i++)
	{
		if (find_Primer(i) != EOF)
		{
			arr[count] = find_Primer(i);
			count++;
		}
	}
}

void print(int N, int* arr)
{
	for (int i = 0; arr[i] != 0; i++)
	{
		printf("%d ", arr[i]);
	}
}
