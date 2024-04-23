#include <stdio.h>

/* Find the largest palindrome made from the product of two 3-digit numbers. */

int is_palindrome(int num)
{
	int reversed = 0;
	int temp = num;

	while (num) {
		int i = num % 10;
		reversed = reversed * 10 + i;
		num /= 10;
	}

	if (temp == reversed) {
		return 1;
	}

	return 0;
}

int main()
{
	int ans = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (is_palindrome(i * j) && i * j > ans) {
				ans = i * j;
			}
		}
	}

	printf("answer : %d\n", ans);

	return 0;
}
