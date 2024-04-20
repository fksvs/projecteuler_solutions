#include <stdio.h>
#include <math.h>

/* What is the sum of the digits of te number 2 power 1000 */

int main(int argc, char *argv[])
{
	int max_digits = 1000 * log10(2) + 1;
	int digits[max_digits];
	int total_digits = 1;

	digits[max_digits - 1] = 1;
	for (int i = 0; i < max_digits - 1; i++) {
		digits[i] = 0;
	}

	int carry = 0;
	for (int j = 0; j < 1000; j++) {
		for (int i = max_digits - 1; i > max_digits - total_digits - 1; i--) {
			int result = digits[i] * 2 + carry;

			if (result >= 10) {
				carry = 1;
				result -= 10;
				if (i == max_digits - total_digits) {
					total_digits++;
				}
			} else {
				carry = 0;
			}

			digits[i] = result;
		}
	}


	int answer = 0;
	for (int i = max_digits - total_digits; i < max_digits; i++) {
		answer += digits[i];
	}
	printf("answer : %d\n", answer);

	return 0;
}
