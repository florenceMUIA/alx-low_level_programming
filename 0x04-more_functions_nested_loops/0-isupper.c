#include "main.h"
/**
 * _isupper - checks for upper case letters
 *@c: letter being checked
 * Return: 1 for uppercase letter or 0 for lowercase letter
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

