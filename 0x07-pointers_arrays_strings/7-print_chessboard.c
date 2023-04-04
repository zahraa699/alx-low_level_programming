#include "main.h"

/**
 * print_chessboard - this function print chessboard
 * @a : matrix
 */

void print_chessboard(char (*a)[8])
{
	int j, z;

	for (j = 0; j < 8; j++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(*(*(j + a) + z));
		}
		_putchar('\n');
	}
}
