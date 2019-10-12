#ifndef STACK_H
#define STACK_H

typedef struct _stack {
	char arr[1000];
	int top;
}Stack;

void SInit(Stack* str);

void push(Stack* str, char K);

int pop(Stack* str, char* K);

#endif