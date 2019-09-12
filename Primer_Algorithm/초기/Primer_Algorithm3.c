#include <stdio.h>

int find_Primer(int N)
{
	int flag = 0;

	for (int i = 3; i < N; i++)
	{
		if (N % i == 0) return -1;
	}

	return N;
}

int main(void)
{
	int N, arr[1000] = { 0 }, count = 0;

	scanf("%d", &N);

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

	for (int i = 0; arr[i] != 0; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}