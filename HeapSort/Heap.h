#ifndef __HEAP_H__
#define __HEAP_H__

#define HEAP_LEN	100

typedef int PriorityComp(int d1, int d2);

typedef struct _heap
{
	PriorityComp * comp;
	int numOfData;
	int heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap * ph, PriorityComp pc);

void HInsert(Heap * ph, int data);
int HDelete(Heap * ph);

#endif
