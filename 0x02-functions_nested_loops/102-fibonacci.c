#include <stdio.h>

/**
 * main - is the entry
 * Return: is 0
 */
int main(void)
{
	int a;
	long int b, c, d;

	b = 1;
	c = 2;
	printf("%ld, %ld", b, c);
	for (a = 0; a < 48; a++)
	{
		d = b + c;
		printf(", %dld", d);
		b = c;
		c = d;
	}
	printf("\n");
	return (0);
}
