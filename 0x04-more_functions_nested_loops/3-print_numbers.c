#include "main.h"

/**
 * print_numbers - prints 0-9 and a new line
 * Return: numbers fom 0-9
 */
void print_numbers(void);
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
