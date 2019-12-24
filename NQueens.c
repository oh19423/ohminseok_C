#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[1010];

bool Place(int k) {
	for (int i = 1; i < k; i++) {
		if (arr[i] == arr[k] || abs(arr[k] - arr[i]) == abs(k - i))
			return false;
	}
	return true;
}

void NQueens(int num) {
	int k = 1; arr[1] = 0;

	while (k > 0) {
		arr[k]++;

		while (arr[k] <= num && !Place(k)) arr[k]++;

		if (arr[k] <= num) {
			if (k == num) {
				for (int i = 1; i <= num; i++) printf("%d ", arr[i] - 1);
				printf("\n");
			}
			else {
				k++;
				arr[k] = 0;
			}
		}
		else k--;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	NQueens(n);

	return 0;
}