#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - function with 2 params
 * @s: params 1
 * @accept: params 2
 *
 * Return: always return
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
