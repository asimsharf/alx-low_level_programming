#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: pointer
 * @height: altura
 *
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
