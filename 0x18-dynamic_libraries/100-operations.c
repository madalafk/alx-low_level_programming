#include <stdio.h>

/**
 * add - adds int a and b
 * @a: first int
 * @b: second int
 * Return: output of a + b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - subtract int a and b
 * @a: first int
 * @b: second int
 * Return: output of a - b
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - multiply int a and b
 * @a: first int
 * @b: second int
 * Return: output of a * b
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - divides int a and b
 * @a: first int
 * @b: second int
 * Return: output of a / b
 */
int div(int a, int b)
{
    return (a / b);
}

/**
 * mod - finds the modulo of int a and b
 * @a: first int
 * @b: second int
 * Return: output of a % b
 */
int mod(int a, int b)
{
    return (a % b);
}

int main(void)
{
    int a = 10;
    int b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", div(a, b));
    printf("Modulo: %d\n", mod(a, b));

    return 0;
}
