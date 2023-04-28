#include "main.h"
/**
 * _isdigit - checks digits
 * @c: numbers checked
 * Return: 1 if the character is a digit or 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

