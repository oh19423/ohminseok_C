#include <stdio.h>
#include "Stack.h"

void init(Stack* plist)
{
	plist->top = -1;
}

void push(Stack* plist, int X, int Y)
{
	plist->top++;

	plist->arr[plist->top].X = X;
	plist->arr[plist->top].Y = Y;
}

int peek(Stack* plist)
{
	if (plist->top == -1) return 1;
	else return 0;
}

int pop(Stack* plist, Position* arr)
{
	if (plist->top == -1) return -1;

	arr->X = plist->arr[plist->top].X;
	arr->Y = plist->arr[plist->top].Y;
	plist->top--;

	return 0;
}