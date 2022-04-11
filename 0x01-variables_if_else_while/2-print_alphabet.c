#include <stdio.h>
#include <ctype.h>

/**
<<<<<<< HEAD
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
=======
 * main entry
 * return 0 for success
 */

int main (void)
{
i='a'
while (i <= 'z')
{
putchar(i);
putchar('\n');
}
>>>>>>> 84b2c60054dd1d3552b761259204cad875682ec6
return (0);
}
