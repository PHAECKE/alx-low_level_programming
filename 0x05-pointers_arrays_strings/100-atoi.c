#include "main.h"
/**
 * _atoi - converts a sting to integer
 * @s: is the input
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *a <= '9')
		{
			null = 1;
			total = total * 10 + *s - '0';
		}
		else if (null)
			break;
		s++;
	}
	if (sign < 0)
		total = (-total);
	return (total);
}
