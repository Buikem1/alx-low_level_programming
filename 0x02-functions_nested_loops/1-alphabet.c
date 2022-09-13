#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ab;

	ab = 'a';

	while (ab <= 'z')
	{
		_putchar(ab);
		ch++;
	}

	_putchar('\n');
}
