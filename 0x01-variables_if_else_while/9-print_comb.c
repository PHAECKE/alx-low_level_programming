#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - is the entry point
 * Return: is 0 after compiling
 */
int main(void)
{
	int f;

	for (f ='0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
