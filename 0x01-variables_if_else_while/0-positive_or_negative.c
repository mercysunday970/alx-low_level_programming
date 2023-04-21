#include  <stdlib.h>
#include <time.h>

/*more header goes there*/

/*betty style doc for functions main goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if( n > 0 ) {
		printf("the number is positive\n" );
	}
	else if( n == 0 ) {
		printf("the number is zero\n" );
	}
	else {
	       printf("the number is negative\n" );
        }
        return 0;
}	

