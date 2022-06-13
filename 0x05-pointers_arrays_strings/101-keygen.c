#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generates random passwords for 101-crackme
*Return: 0
*/
int main(void)
{
	char str[100];
	int i = 0, a = 0, b = 0;

	srand(time(NULL));

	for (i = 0; c <= 2644; i++)
	{
		b = (rand() % 25) + 65;
		str[i] = b;
		c = c + b;
	}

	str[i++] = 2772 - c;
	str[i++] = '\0';

	printf("%s\n", str);
	return (0);
}
