#include <stdio.h>
/**
 * main- entry point
 * description: prints all single digit numbers to the base of 10
 * return: Always 0;
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

