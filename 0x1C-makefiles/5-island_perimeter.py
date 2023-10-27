#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check top side
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom side
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left side
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right side
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
