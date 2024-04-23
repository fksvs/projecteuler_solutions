#include <stdio.h>
#include <math.h>

/* There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.*/

int main()
{
	for (int a = 1; a < 1000; a++) {
		for (int b = 1; b < 1000; b++) {
			double x = sqrt(a * a + b * b);
			if (x == floor(x) && a + b + (int)x == 1000) {
				printf("answer : %d\n", a * b * (int)x);
				return 0;
			}
		}
	}

	return 0;
}
