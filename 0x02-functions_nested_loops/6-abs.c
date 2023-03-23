#include "main.h"

/**
 * _abs - function that takes in the parameter
 *
 * @k: parameter
 *
 * Return: absolute value
 */
int _abs(int k)
{
	if (k < 0)
	{
		k = (-k);
	}
	else
	{
		k = k;
	}
	return k;
}
