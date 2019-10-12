#include <stdio.h>
#include "Calc.h"

int top = -1;
float sci[1000];

int op_code(char K, int num)
{
	switch (K)
	{
	case '(':
		if (num == 1) return 1;
		else return 4;
	case '+':
	case '-':
		return 2;
	case '*':
	case '/':
		return 3;
	default:
		return -1;
	}
}

void cal(char* str, int count)
{
	float a, b;

	for (int i = 0; i < count; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			top++;
			sci[top] = str[i] - '0';
		}
		else
		{
			a = sci[top];
			top--;
			b = sci[top];

			switch (str[i])
			{
			case '+':
				sci[top] = a + b;
				break;
			case '-':
				sci[top] = b - a;
				break;
			case '/':
				sci[top] = b / a;
				break;
			case '*':
				sci[top] = a * b;
				break;
			}
		}
	}

	printf("%f", sci[top]);
}
