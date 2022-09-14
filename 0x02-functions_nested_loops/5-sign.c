#include "main.h"

/**
* print_sign - a function that checks for lowercase
* character
* @c: single character input
* Return: 1 if int c is lowercase, 0 if otherwise
* check
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_purchar('0');
		return (0);
	}
}
