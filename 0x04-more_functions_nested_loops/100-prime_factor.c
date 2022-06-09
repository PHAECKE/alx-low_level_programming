#include <stdio.h>
/**
 * main - is the entry
 * Return: is 0
 */
int main(void)
{
	long int a = 2, n = 612852475143;

	for (; a <= n; a++)
	{
		if (n % a == 0)
		{
			n /= a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
