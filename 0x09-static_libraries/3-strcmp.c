#include "main.h"
/**
 * _strcmp - function with 2 parameter
 * @s1: params 1
 * @s2: params 2
 *
 * Return: always return
 */

int _strcmp(char *s1, char *s2)
{
	int i;


	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
