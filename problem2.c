#include <stdio.h>

/* By considering the terms in the Fibonacci sequence whose values 
 * do not exceed four million, find the sum of the even-valued terms */

int main(int argc, char *argv[])
{
	int cur = 0, i = 1, new = 0, sum = 0;

	while (new < 4000000) {
		if (new % 2 == 0) {
			sum += new;
		}

		new = i + cur;
		cur = i;
		i = new;
	}

	printf("answer : %d\n", sum);

	return 0;
}
