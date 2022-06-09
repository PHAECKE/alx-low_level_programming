#include "main.h"
/**
 * _isupper - checks for uppercase chracers
 * @c: input
 * Return: 1 if c is uppercase and 0 if not
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int upp = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			upp = 1;
			break;
		}
	}
	return (upp);
}
