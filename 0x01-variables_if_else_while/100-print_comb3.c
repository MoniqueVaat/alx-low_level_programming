#include<stdio.h>
/**
 * main - all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i,j;

	for (i = 0; j <= 9; i++)
	{
		if(j > i)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
