#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * File: 9-print_comb.c
 * Description: Prints all single-digit numbers in ascending order,
 * separated by a comma followed by a space.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
