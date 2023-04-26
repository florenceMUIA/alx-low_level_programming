#include <stdio.h>
/**
 * main -  Entry point
 * Description: printing base 16 numbers
 * Return: Always 0
 */
int main(void)
{
	int n;
	int u;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (u = 97; n <= 102; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
