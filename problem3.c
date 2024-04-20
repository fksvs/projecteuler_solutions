#include <stdio.h>
#include <math.h>

/* what is the largest prime factor of the number 600851475143 */

int main(int argc, char *argv[])
{
	unsigned long long t = 600851475143;

	for (unsigned long long i = 2; i < t ; i++) {
		while (t % i == 0) {
			t /= i;
		}
	}

	printf("answer : %ld\n", t);

	return 0;
}
