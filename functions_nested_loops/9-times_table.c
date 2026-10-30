#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result / 10 > 0)
			{
				_putchar('0' + result /10);
			}
			else if (result / 10 == 0 && j != 0)
			{
				_putchar(' ');
			}
			putchar('0' + result % 10);
			{


			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;
}
