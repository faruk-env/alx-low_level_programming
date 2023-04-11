#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function
 * @grid: param 1
 * @height: param 2
 *
 * Return: always return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
