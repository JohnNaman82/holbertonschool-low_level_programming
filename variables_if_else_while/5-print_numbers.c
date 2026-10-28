#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
