#include "main.h"

/**
 * prints _alphabet - print the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	 _putchar('\n');
}
