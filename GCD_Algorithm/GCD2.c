#include <stdio.h>
#define MAX 10000

int comp(int n1, int n2)
{
	if (n1 > n2) return n2;
	else return n1;
}

int make_Arr(int* arr, int n)
{
	int flag = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			arr[flag] = i;
			flag++;
		}
	}

	return flag - 1;
}

void find_Primer(int* arr, int n)
{
	int flag;

	for (int i = 0; i <= n; i++)
	{
		flag = 0;

		for (int j = 2; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0) flag++;
		}

		if (flag > 1) arr[i] = 0;
	}
}

int make_GCD(int* arr, int n1, int n2, int flag)
{
	int GCD = 1;

	for (int i = 1; i < flag; i++)
	{
		if (arr[i] == 0) continue;

		while ((n1 % arr[i] == 0) && (n2 % arr[i] == 0))
		{
			GCD *= arr[i];
			n1 /= arr[i];
			n2 /= arr[i];
		}
	}

	return GCD;
}

int main(void)
{
	int n1, n2, flag, arr[MAX];

	scanf("%d %d", &n1, &n2);

	flag = make_Arr(arr, comp(n1, n2));
	find_Primer(arr, flag);
	printf("%d", make_GCD(arr, n1, n2, flag));

	return 0;
}