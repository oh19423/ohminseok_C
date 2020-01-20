#include <stdio.h>

int main(void) {
	int num, pivot;

	scanf("%d", &num);
	
	pivot = (num - 1) * 2 - 1;

	for (int i = 0; i < num; i++) printf("*");
	for (int i = 0; i < pivot; i++) printf(" ");
	for (int i = 0; i < num; i++) printf("*");
	printf("\n");

	for (int i = 1; i < num; i++) {
		pivot -= 2;
		for (int j = 0; j < i; j++) printf(" ");

		printf("*");
		for (int j = 0; j < num - 2; j++) printf(" ");
		if(i != num - 1) printf("*");

		for (int j = 0; j < pivot; j++) printf(" ");

		printf("*");
		for (int j = 0; j < num - 2; j++) printf(" ");
		printf("*\n");
	}

	for (int i = num - 2; i > 0; i--) {
		pivot += 2;
		for (int j = 0; j < i; j++) printf(" ");

		printf("*");
		for (int j = 0; j < num - 2; j++) printf(" ");
		if (i != num - 1) printf("*");

		for (int j = 0; j < pivot; j++) printf(" ");

		printf("*");
		for (int j = 0; j < num - 2; j++) printf(" ");
		printf("*\n");
	}

	pivot += 2;
	for (int i = 0; i < num; i++) printf("*");
	for (int i = 0; i < pivot; i++) printf(" ");
	for (int i = 0; i < num; i++) printf("*");
	printf("\n");

	return 0;
}