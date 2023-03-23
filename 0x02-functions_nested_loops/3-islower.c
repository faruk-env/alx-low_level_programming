#include "main.h"
/**
 * _islower - function to print checkk for lower case
 * @c: this is the interger parameter
 * Return: this returns 1 if any lower cases and 0 is none
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
