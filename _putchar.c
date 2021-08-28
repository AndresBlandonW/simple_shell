#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int i, current_digit;

	if (n == 0)
	{
		_putchar('0');

	}
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}

	for (i = 1; n / i > 9; i = i * 10)
		;

	for (; i > 0; i = i / 10)
	{
		current_digit = n / i;
		n = n % i;
		_putchar('0' + current_digit);
	}
}