#include "main.h"

/**
 * _strncat - concatenates two strings but adds inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare to num
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])

		dest_len++;

	for (num = 0; src[num] && num < n; num++)

		dest[dest_len++] = src[num];
	return (dest);
}
