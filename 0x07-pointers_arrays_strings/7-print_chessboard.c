#include "main.h"

/**
 * print_chessboard - function prototype
 *
 * @a: pointer to a pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		j = 0;

		for (; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\0');
	}
}
