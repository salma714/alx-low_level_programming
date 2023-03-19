#include <stdio.h>
#include <time.h>
/*
* This program will assign a random number to the variable n each time it is executed
*/
int main(void)
{
	int n;
	rand(time(0));
	n = rand() - RAND_MAX /2;
	if ( n < 0 ){
		printf("%d is negative\n", n);
	}
	else if ( n > 0 ) {
		printf("%d is positive\n", n);
	}

	return (0);
}

