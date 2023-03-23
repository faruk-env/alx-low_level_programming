#include "main.h"
/**
 * print_last_digit - this function prints only the last digit
 *
 * @k: parameter
 *
 * Return: return k
 */
int print_last_digit(int k)
{
	int z;

	z = k % 10;
	if (k < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}
