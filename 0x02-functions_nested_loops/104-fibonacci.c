#include <stdio.h>
/**
 *  main - Prints the first 98 Fibonacci numbers
 *
 *  Return: Always 0.
 */
int main(void)
{
int c;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
unsigned long half1, half2;

for (c = 0; c < 92; c++)
{
printf("%lu, ", fib1);
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
}

fib1_half1 = 0;
fib1_half2 = 1;
fib2_half1 = 0;
fib2_half2 = 1;
for (c = 93; c < 99; c++)
{
half1 = fib1_half1 + fib2_half1;
half2 = fib1_half2 + fib2_half2;
if (half2 > 999999999)
{
half1 += 1;
half2 %= 1000000000;
}
printf("%lu%09lu", half1, half2);
if (c != 98)
printf(", ");
fib1_half1 = fib1_half2;
fib1_half2 = fib2_half1;
fib2_half1 = half1;
fib2_half2 = half2;
}
printf("\n");
return (0);
}
