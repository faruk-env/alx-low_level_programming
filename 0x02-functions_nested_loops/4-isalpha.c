#include "main.h"
/**
 * _isalpha - function that checks for alphabet
 *
 *@c: parameter that takes in this alphabet
 *
 *Return: this function return 1 is true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
