#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints a text according number
 *
 *Return: Always (Success)
 */
int main(void)
{
	int n, lasti;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasti = n % 10;

	if (lasti > 5)
	{
		printf("Last digit of %i is i% and is greater than 5\n", n, lasti);
	}
	else if (lasti == 0)
	{
		printf("Last digit of i% is i% and is 0\n", n, lasti);
	}	
	else if (lasti < 6 && lasti != 0)
	{
		printf("Last digit of i% is i% and is less than 6 and not 0\n", n, lasti);
	}	
	
	return(0);
}
