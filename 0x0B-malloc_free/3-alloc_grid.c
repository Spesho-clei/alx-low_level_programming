#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);
}
