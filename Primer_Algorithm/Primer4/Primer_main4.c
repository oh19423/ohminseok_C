#include <stdio.h>
#include "Primer4.h"

int main(void)
{
	int num, count = 0, arr[1000] = { 0 };

	printf("Enter a integer: ");
	scanf("%d", &num);

	make_Arr(num, arr, count);
	print(num, arr);

	return 0;
}