#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - function that has 2 params
 * @haystack: parram 1
 * @needle: param 2
 *
 * Return: always return
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
