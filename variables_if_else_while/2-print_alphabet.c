#include <stdio.h>

/**
 * main - main
 *
 * Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
