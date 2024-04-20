#include <stdio.h>

/* What is the smallest positive number that is evenly divisible
 * by all of the numbers from 1 to 20 ? */

int main(int argc, char *argv[])
{
	int i = 40;

	while (1) {
		int j = 0;
		for (j = 2; j < 21; j++) {
			if (i % j != 0) {
				break;
			}
		}
		if (j == 21) {
			printf("answer : %d\n", i);
			break;
		}

		i += 40;
	}

	return 0;
}
