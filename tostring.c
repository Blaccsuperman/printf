#include "main.h"
/**
 * get_length - gets length of int
 * @num: accepted number
 *
 * Return: length of number
 */

int get_length(int num)
{
	int length = 0;

	if (num == 0)
	{
		return (1);
	}

	while (num != 0)
	{
		num /= 10;
		length++;
	}
	return (length);
}

/**
 * tostring - converts int to string
 * @num: given mnumber
 *
 * Return: buffer
 */
char *tostring(int num)
{
	int i;
	int length = get_length(num);

	char *buffer = (char *)malloc(length + 1);

	if (buffer == NULL)
	{
		write(2, "Memory allocation error\n", 24);
		exit(EXIT_FAILURE);
	}
	for (i = length - 1; i >= 0; i--)
	{
		buffer[i] = '0' + num % 10;
		num /= 10;
	}

	buffer[length] = '\0';

	return (buffer);
}
