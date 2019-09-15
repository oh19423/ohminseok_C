#include <stdio.h>
#include <math.h>
#include "Primer4.h"

int find_Primer(int N)
{
	for (int i = 2; i <= (int)sqrt(N); i++)
	{
		if (N % i == 0) return -1;
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
