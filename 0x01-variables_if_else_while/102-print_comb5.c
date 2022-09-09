#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i_one;
	int i;
	int j_one;
	int j;

	for (i_one = 48; i_one < 58; i_one++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			j_one = i_one;

			for (; j_one < 58; j_one++)
			{
				for (; j < 58; j++)
				{
					putchar(i_one);
					putchar(i);
					putchar(' ');
					putchar(j_one);
					putchar(j);

					if (i_one != 57 || j_one != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}

	putchar('\n');
	return (0);
}
