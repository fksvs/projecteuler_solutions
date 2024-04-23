#include <stdio.h>

/* What is the value of the first triangle number to have over five hundred divisors ? */

int main()
{
	int num = 0;

	for (int i = 1;; i++) {
		num += i;
		int n = 1, temp = num;

		for (int j = 2; temp != 1; j++) {
			int d = 0;
			while(temp % j == 0) {
				temp /= j;
				d += 1;
			}
			if (d) {
				n *= (d + 1);
			}
		}

		if (n > 500) {
			printf("%d\n", num);
			break;
		}
	}

	return 0;
}
