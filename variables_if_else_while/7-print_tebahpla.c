#include <stdio.h>

/**
 * main - main
 *
 * Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
