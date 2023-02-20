#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty  for function main goes there */
/**
 * main - Entry point
 *
 * Return:always 0(success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("last digit of  %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
