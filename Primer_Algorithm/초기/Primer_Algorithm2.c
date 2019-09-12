#include <stdio.h>

int find_Primer(int N)
{
	int flag = 0;

	for (int i = 2; i < N; i++)
	{
		if (N % i == 0) return -1;
	}

	return N;
}

int main(void)
{
	int N, arr[1000] = { 0 }, count = 0;

	scanf("%d", &N);

	for (int i = 2; i <= N; i++)
	{
		if (find_Primer(i) != EOF)
		{
			arr[count] = find_Primer(i);
			count++;
		}
	}

	for (int i = 0; arr[i] != 0; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}