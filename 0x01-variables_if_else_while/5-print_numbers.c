#include<stdio.h>
/**
 * main - prints sinlge digit number of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}
