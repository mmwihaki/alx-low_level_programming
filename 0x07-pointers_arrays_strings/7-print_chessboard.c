#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - print chessboard
  * @a: array
  * description - print chessboard
  * Return: Always 0
  */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			printf("%c ", a[row][column]);
		}
		printf("\n");
	}
}
