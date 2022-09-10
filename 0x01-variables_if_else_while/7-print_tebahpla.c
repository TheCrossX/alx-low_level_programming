#include <stdio.h>

/**
 * main - Starting poing fot butter
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
