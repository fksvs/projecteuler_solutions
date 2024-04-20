#include <stdio.h>

/* Which starting number, under one million, produces the longest collatz chain? */

int main(int argc, char *argv[])
{
	unsigned long long int ans = 0;
	int max_c = 0;

	for (int i = 1; i < 1000000; i += 2) {
		unsigned long long int n = i;
		int c = 0;
		while (n > 1) {
			if (n % 2 == 0) {
				n = n/2;
			} else {
				n = 3*n + 1;
			}
			c++;
		}
		if (c > max_c) {
			max_c = c;
			ans = i;
		}
	}

	printf("answer : %ld\n", ans);

	return 0;
}
