#include "main.h"

/**
* print_to_98 - a function that checks for lowercase
* character
* @n: single character input
* Return: 1 if int c is lowercase, 0 if otherwise
* check
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
