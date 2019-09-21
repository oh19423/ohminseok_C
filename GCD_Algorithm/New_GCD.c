#include <stdio.h>

int comp(int a, int b)
{
	if (a > b) return b;
	else return a;
}

int find_GCD(int a, int b)
{
	int num;
	for (int i = 2; i <= comp(a, b); i++)
		if (a % i == 0 && b % i == 0) num = i;

	return num;
}

int main(void)
{
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);

	printf("%d", find_GCD(num1, num2));

	return 0;
}