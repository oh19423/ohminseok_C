#include <stdio.h>
#include "Heap.h"

int PriComp(int n1, int n2)
{
	return n2 - n1;
}

void HeapSort(int arr[], int n, PriorityComp pc)
{
	Heap heap;
	int i;

	HeapInit(&heap, pc);

	for (i = 0; i < n; i++) HInsert(&heap, arr[i]);

	for (i = 0; i < n; i++) arr[i] = HDelete(&heap);
}

int main(void)
{
	int arr[1000], len = 0;
	FILE* fp;

	fp = fopen("data.txt", "r");

	while (fscanf(fp, "%d", &arr[len]) != EOF) len++;

	HeapSort(arr, len, PriComp);

	for (int i = 0; i < len; i++) printf("%d ", arr[i]);

	printf("\n");
	fclose(fp);
	return 0;
} 
