#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* How many such routes are there through a 20 x 20 grid? */

int main(int argc, char *argv[])
{
	int size = 21;
	unsigned long long int grid[size][size];

	for (int y = 0; y < size; y++) {
	        for (int x = 0; x < size; x++) {
		        grid[y][x] = 1;
	        }
	}

	for (int y = 1; y < size; y++) {
		for (int x = 1; x < size; x++) {
			grid[y][x] = grid[y][x - 1];
			grid[y][x] += grid[y - 1][x];
		}
	}

	printf("answer : %llu\n", grid[size - 1][size - 1]);
	
	return 0;
}
