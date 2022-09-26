#include "main.h"

/**
 * print_chessboard - function prototype
 *
 * @a: pointer to a pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
