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

	while (i < 8)
	{
		j = 0;

		for (; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		i++;
		_putchar('\0');
	}
}
