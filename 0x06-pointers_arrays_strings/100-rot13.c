#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: is the input
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i1 = 0, i2;
	char alphabet[52] =
	{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot13key[52] =
	{"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	while (str[i1])
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (s[i1] == alphabet[i2])
			{
				s[i1] =  rot13key[i2];
				break;
			}
		}
		i1++;
	}
	return (s);
}
