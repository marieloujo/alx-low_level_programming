#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i, tour = '0', j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = tour; j <= '9'; j++)
		{

			if (j != i)
			{
				putchar(i);
				putchar(j);

				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}

		tour++;
	}

	putchar('\n');

	return (0);

}
