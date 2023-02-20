#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * Function: Main - Entry point
 *
 * Description: Get a random number and print the number
 * and if is positive, negative, or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
/* main - Entry poit */
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",
n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
