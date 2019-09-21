#include <stdio.h>

void if_swap(int* a, int* b)
{
	int* temp;

	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
}

int GCD(int a, int b)
{
	if_swap(&a, &b);

	if (a % b == 0) return b;
	else return GCD(b, a % b);
}

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("%d", GCD(num1, num2));

	return 0;
}

