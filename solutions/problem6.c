#include <stdio.h>

/* find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum */

int main()
{
	long int sum_of_squares = 0, square_of_sum = 0;

	for (int i = 0; i <= 100; i++) {
		sum_of_squares += (i * i);
		square_of_sum += i;
	}
	square_of_sum *= square_of_sum;

	printf("answer : %ld\n", square_of_sum - sum_of_squares);

	return 0;
}
