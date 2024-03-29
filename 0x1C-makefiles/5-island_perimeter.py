#!/usr/bin/python3
''' Module defining and testing the island_perimeter function '''


def island_perimeter(grid):
    """calculate the perimeter of the island in the grid

    Args:
        grid (list[int][int]): the input grid

    Returns:
        int: the perimeter of the grid islands
    """
    grid = [[0, *row, 0] for row in grid]
    grid = [[0] * len(grid[0]), *grid, [0] * len(grid[0])]
    col_iter, row_iter = range(1, len(grid) - 1), range(1, len(grid[0]) - 1)
    counter = 0
    for i in col_iter:
        for j in row_iter:
            if grid[i][j] == 1:
                counter += 4 - (grid[i + 1][j] + grid[i - 1][j]
                                + grid[i][j + 1] + grid[i][j - 1])
    return counter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0],
    ]
    print(island_perimeter(grid))
