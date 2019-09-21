#include <stdio.h>
#define MAX 10000

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

int make_GCD(int* arr1, int* arr2, int flag1, int flag2)
{
	while (flag1 >= 0 && flag2 >= 0)
	{
		if (arr1[flag1] > arr2[flag2]) flag1--;
		else if (arr1[flag1] < arr2[flag2]) flag2--;
		else break;
	}

	return arr1[flag1];
}

int main(void)
{
	int n1, n2, arr1[MAX], arr2[MAX], flag1, flag2;

	scanf("%d %d", &n1, &n2);

	flag1 = make_Arr(arr1, n1);
	flag2 = make_Arr(arr2, n2);

	printf("%d", make_GCD(arr1, arr2, flag1, flag2));

	return 0;
}