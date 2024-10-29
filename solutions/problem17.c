#include <stdio.h>

/* If all the numbers from to (one thousand) inclusive were written
 * out in words, how many letters would be used? */

int ones_place[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
int tens_place[] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };
int tens[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
int hunderd = 7;
int thousand = 8;
int and = 3;

int calculate_letters(int num) {
	int total = 0;

	if (num >= 1000) {
		total += ones_place[num / 1000];
		total += thousand;
		num %= 1000;
	}
	
	if (num >= 100) {
		total += ones_place[num / 100];
		total += hunderd;
		num %= 100;		
		if (num) total += and;
	} 
	
	if (num >= 20) {
		total += tens_place[num / 10];
		num %= 10;
	} else if (num >= 10){
		total += tens[num - 10];
		return total;
	}

	if (num > 0) total += ones_place[num];

	return total;
}

int main(int argc, char *argv[])
{
	int total_letters = 0;

	for (int i = 1; i < 1001; i++) {
		total_letters += calculate_letters(i);
	}

	printf("%d\n", total_letters);

	return 0;
}
