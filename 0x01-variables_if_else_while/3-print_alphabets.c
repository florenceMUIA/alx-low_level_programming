#include <stdio.h>
/**
 * main - Entry point
 * Description: Returns both lower and upper case alphabets
 *
 * return: always 0 (success)
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
