#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - is the entry point
 * Return: is 0 after compiling
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
