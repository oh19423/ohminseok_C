#include <stdio.h>

int main(void)
{
	int count = 1, i = 0;
	char str[1000000], K;
	
	do{
		scanf("%c", &K);
		str[i] = K;

		i++;
	}while (K != '\n');

	for (int j = 0; j < i; j++) if (str[j] == ' ') count++;
	
	if (str[0] == ' ') count--;
	if (str[i - 2] == ' ') count--;

	printf("%d", count);

	return 0;
}