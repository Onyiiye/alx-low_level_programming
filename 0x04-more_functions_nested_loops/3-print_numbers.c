#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 withostandard functions
  *
 *
 * Return: void
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
