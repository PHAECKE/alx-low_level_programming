#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - is the entry point
 * Return: is 0 after compiling
 */
int main(void)
{
	int f, a;

	for (f = '0'0; f < '9'; f++)
	{
		for (a = f + 1; a <= '9'; a++)
		{
			if (a != f)
			{
				putchar(f);
				putchar(a);

				if (f == '8' && a == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
