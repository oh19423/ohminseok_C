#include <stdio.h>
#include <math.h>
#include "Primer5.h"

int find_Primer(int N, int * arr)
{
	for (int i = 0; arr[i] <= (int)sqrt(N); i++)
	{
		if (N % arr[i] == 0) return -1;
	}

	return N;
}

void make_Arr(int N, int* arr, int count)
{
	if (N >= 2)
	{
		arr[count] = 2;
		count++;
	}

	for (int i = 3; i <= N; i++)
	{
		if (i % 2 == 0) continue;

		if (find_Primer(i, arr) != EOF)
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
