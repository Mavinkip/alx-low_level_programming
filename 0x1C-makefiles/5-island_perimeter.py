#!/usr/bin/python3

def island_perimeter(grid):
 
    perimeter = 0

    for i, arr in enumerate(grid):
        for j, elm in enumerate(arr):
            if elm == 1:
                if i - 1 == -1 or grid[i-1][j] == 0:
                    perimeter += 1
                if j + 1 == len(arr) or grid[i][j+1] == 0:
                    perimeter += 1
                if i + 1 == len(grid) or grid[i+1][j] == 0:
                    perimeter += 1
                if j - 1 == -1 or grid[i][j-1] == 0:
                    perimeter += 1
    return perimeter