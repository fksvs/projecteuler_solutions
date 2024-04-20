#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/* find the sum of all the primes below two million */

int main(int argc, char *argv[])
{
	int num = 2000000;
	bool arr[num];

        for (int i = 2; i < num; i++) {
		arr[i] = true;
	}

	for (int i = 2; i < sqrt(num); i++) {
		if (arr[i]) {
			for (int j = i * i, x = 1; j < num; j = i * i + i * x, x++) {
				arr[j] = false;
			}
		}
	}

	unsigned long sum = 0;
	for (int i = 2; i < num + 2; i++) {
		if (arr[i]) {
			sum += i;
		}
	}

	printf("answer : %ld\n", sum);

	return 0;
}
