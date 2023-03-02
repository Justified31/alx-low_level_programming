#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int c;
	char key;

	for (c = '0'; c <= '9'; c++)
	{
		putchar (c);
	}
	for (key = 'a'; key <= 'f'; key++)
	{
		putchar (key);
	}
	putchar ('\n');
	return (0);
}
