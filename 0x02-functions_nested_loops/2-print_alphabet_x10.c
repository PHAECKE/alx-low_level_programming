#include "main.h"
/**
 * print_alphabet_x10 - is the entry
 * Return: is 0
 */
void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_purchar('\n');
	}
}
