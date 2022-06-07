#include "main.h"
 /**
  * print_sign - is the entry
  * @n: is an integer
  * Return: os 1 if mumber is positive, 0 if number is 0,
  * or -1 if number is negative
  */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
