#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: is the input
 * Return: the encoded string
 */
char *leet(char *s)
{
	int = 0, j;
	char a[] = {'4','4','3','3','0','0','7','7','1','1'}, b[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == b[j])
				s[i] = a[j];
		i++
	}
	return (s);
}
