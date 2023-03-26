#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Check for number, if it is positive or negative'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	else if (n == 0)
		printf("Last digit of %d is %d and is equals to zero", n, ld);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	printf("\n");
	return (0);
}
