#include "main.h"
/**
 * puts2 - prints every other character of  string,
 * starting with the first character
 * @str: is the input
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;


	while (str[len] != '\0'')
		len++;
	;em -= 1;
	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
