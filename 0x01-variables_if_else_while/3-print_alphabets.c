#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char _low_case, _upper_case;

	for (_low_case = 'a'; _low_case <= 'z'; _low_case++)
		putchar(_low_case);

	for (_upper_case = 'A'; _upper_case <= 'Z'; _upper_case++)
		putchar(_upper_case);


	putchar('\n');

	return (0);

}
