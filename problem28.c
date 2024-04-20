#include <stdio.h>

/* What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral 
 * formed in the same way? */

int main(int argc, char *argv[])
{
	int size = 1001, sum = 0;

	for (int i = 1; i < (size - 1) / 2 + 1; i++) {
		int j = i * 2 + 1;
		sum += (j * j) - j + 1;
		sum += (j * j);
		sum += (j * j) - 2 * (j - 1);
		sum += (j * j) - 3 * (j - 1);
	}
	sum += 1;

	printf("answer : %d\n", sum);

	return 0;
}
