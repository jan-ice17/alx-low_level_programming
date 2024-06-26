#!/usr/bin/python3
"""This is a module that returns the perimeter of the island described in grid:"""


def num_water_neighbors(grid, i, j):
    """THis will return the number of water neighbors a cell has in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """This will return the perimeter of the island in grid."""

    perim_eter= 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim_eter += num_water_neighbors(grid, i, j)

    return perim_eter
