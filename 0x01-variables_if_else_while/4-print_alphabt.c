#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - is the entry point
 * Return: is 0 after compiling
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low ++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
