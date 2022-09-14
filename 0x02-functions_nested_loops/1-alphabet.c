#include "main.h"
/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
