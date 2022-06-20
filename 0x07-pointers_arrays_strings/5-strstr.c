#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return: a pointer to the beginning of the located substring,
 */
char *_strstr(char *haystack, char *needle)
{
	char *starti = needle, *startj = haystack;

	while (*haystack)
	{
		startj = haystack;
		needle = starti;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = startj + 1;
	}
	return ('\0');
}
