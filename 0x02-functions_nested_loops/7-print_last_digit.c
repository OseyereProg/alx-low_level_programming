#include "main.h"

/**
* print_last_digit - a function that checks for lowercase
* character
* @c: single character input
* Return: 1 if int c is lowercase, 0 if otherwise
* check
*/

int print_last_digit(int c)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
