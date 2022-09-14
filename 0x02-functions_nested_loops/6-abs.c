#include "main.h"

/**
* _abs - a function that checks for lowercase
* character
* @c: single character input
* Return: 1 if int c is lowercase, 0 if otherwise
* check
*/

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
