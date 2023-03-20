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
		printf("%d is greater than 5", ld);
	else if (n == 0)
		printf("%d is 0", ld);
	else
		printf("%d is less than 6 and not 0", ld);
	printf("\n");
	return (0);
}
