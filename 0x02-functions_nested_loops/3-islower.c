#include "main.h"

/**
* _islower - a function that checks for lowercase
* character
* @c: single character input
* Return: 1 if int c is lowercase, 0 if otherwise
* check
*/

int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
