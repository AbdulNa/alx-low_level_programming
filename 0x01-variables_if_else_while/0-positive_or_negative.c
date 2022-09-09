#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main -entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ){
	
		printf("%d is positive\n");
	}
	return (0);
}
