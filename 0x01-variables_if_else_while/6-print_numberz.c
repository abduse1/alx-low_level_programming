#include <stdio.h> 

/**
 * main - the program that prints all single digit numbers of base 10 starting from 0
 * char is not allowed to use 
 * return 0: success
 */
int main(void)
{
int n;
while (n <= 9)
{
putchar(n);
n+=1;
}
putchar('\n');
}
return (0);
}
