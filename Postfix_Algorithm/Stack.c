#include <stdio.h>
#include "Stack.h"

void SInit(Stack* str)
{
	str->top = -1;
}

void push(Stack* str, char K)
{
	str->top++;
	str->arr[str->top] = K;
}

int pop(Stack* str, char* K)
{
	*K = str->arr[str->top];
	if (str->top == -1) return -1;
	else str->top--;

	return 1;
}