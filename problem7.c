#include <stdio.h>

/* what is the 10001st prime number */

int main(int argc, char* argv[])
{
	int prime_list[10001], total = 1, i = 3;
	prime_list[0] = 2;

	while (1) {
		int flag = 0;
		for (int j = 0; j < total - 1; j++) {
			if (i % prime_list[j] == 0) {
				flag = -1;
				break;
			}
		}

		if (flag == 0) {
			prime_list[total] = i;
			total++;
		}

		if (total == 10001) {
			printf("answer : %d\n", prime_list[10000]);
			break;
		}

		i++;
	}

	return 0;
}
