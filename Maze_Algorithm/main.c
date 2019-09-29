#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack list; 
Position arr = {1, 0};

int main(int argc, char* argv[])
{
	int x = 0, y; char str[Col_FULL][Row_FULL];
	FILE* fp;

	fp = fopen("result.txt", "w");

	for (int i = 0; i < Col_FULL; i++)
	{
		for (int j = 0; j < Row_FULL; j++)
		{
			str[i][j] = argv[i][j];
		}
	}
	init(&list);

	while (arr.Y != Row_FULL - 1) {
		x = arr.X;
		y = arr.Y;

		if (str[x - 1][y] == '0') push(&list, x - 1, y);
		if (str[x][y - 1] == '0') push(&list, x, y - 1);
		if (str[x][y + 1] == '0') push(&list, x, y + 1);
		if (str[x + 1][y] == '0') push(&list, x + 1, y);

		if (peek(&list)) {
			fprintf(fp, "실패\n");
			return 0;
		}
		else
			pop(&list, &arr);

		str[arr.X][arr.Y] = '.';
		fprintf(fp,"(%d,%d)\n", arr.X - 1, arr.Y);
	}

	fclose(fp);

	return 0;
}