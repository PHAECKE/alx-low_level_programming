#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is the entry point
 * Return: is 0 after compiling
 */
int main(void)
{
	int z;
	char low;

	for (z = '0'; z <= '9'; z++)
		putchar(z);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
