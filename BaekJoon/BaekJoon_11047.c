#include <stdio.h>

int solution(int* arr, int flag, int k)
{
	int sum = 0;

	for (int i = flag - 1; i >= 0; i--)
	{
		while ((int)(k / arr[i]) > 0)
		{
			sum++;
			k -= arr[i];
		}
	}

	return sum;
}

int main(void)
{
	int n, k, flag, arr[10];

	scanf("%d %d", &flag, &k);

	for (int i = 0; i < flag; i++)
	{
		scanf("%d", &n);
		arr[i] = n;
	}

	printf("%d", solution(arr, flag, k));

	return 0;
}