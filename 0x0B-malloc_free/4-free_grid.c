#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created by your alloc_grid function
* @grid: integer
* @height: integer
* Return: success
*/

void free_grid(int** grid, int height)
{
if (grid == NULL)
return;

for (int i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
