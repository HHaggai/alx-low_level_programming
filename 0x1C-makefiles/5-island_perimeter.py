#!/usr/bin/python3
"""Defynes an island perimtr measuring functn."""


def island_perimeter(grid):
    """Retrn the perimtr of an island.

    The grd reprsnts water by 0 and land by 1.

    Args:
        grid (list): A list of list of intgrs reprsnting an island.
    Returns:
        The perimtr of the island defyned in grd.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
