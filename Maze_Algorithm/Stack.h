#ifndef STACK_H
#define STACK_H

#define FULL_STACK 100
#define Col_FULL 7
#define Row_FULL 5

typedef struct position {
	int X;
	int Y;
}Position;

typedef struct _stack {
	Position arr[FULL_STACK];
	int top;
}Stack;

void init(Stack* plist);

void push(Stack* plist, int X, int Y);

int peek(Stack* plist);

int pop(Stack* plist, Position* arr);

#endif