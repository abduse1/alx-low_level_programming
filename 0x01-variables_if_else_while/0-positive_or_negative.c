#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
* main entry
* if n=0 return the number is zero , if n<0 return the number is negative 
* if n>0  return the number is postive 
* Return 0 : success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}	
	return (0);
}
