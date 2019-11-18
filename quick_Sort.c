#include <stdio.h>

void swap(int* arr, int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int part(int* arr, int left, int right)
{
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (pivot >= arr[low] && low <= right) low++;

		while (pivot <= arr[high] && high >= (left + 1)) high--;

		if(low <= high) swap(arr, low, high);
	}

	swap(arr, left, high);
	return high;
}

void quickSort(int* arr, int left, int right)
{
	if (left <= right)
	{
		int pivot = part(arr, left, right);
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}

int main(void)
{
	int arr[1000], len = 0;
	FILE* fp;

	fopen_s(&fp, "data.txt", "r");
	while (fscanf(fp, "%d", &arr[len]) != EOF) len++;

	quickSort(arr, 0, len - 1);

	for (int i = 0; i < len; i++) printf("%d ", arr[i]);
	
	printf("\n");

	fclose(fp);
	return 0;
}