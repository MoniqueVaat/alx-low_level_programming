#include "main.h"

/**
 * print_alphabet - function to print alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
