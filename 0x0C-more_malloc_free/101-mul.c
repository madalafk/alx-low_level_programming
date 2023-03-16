#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* multiply: mul used
* @str: pointer to a character array
* @is_positive_integer: int funnction
*
* Return: Always 0.(success)
*/

int is_positive_integer(char *str);
void multiply(char *num1, char *num2);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}

int is_positive_integer(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)

		for (int j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
}

int i = 0;
while (result[i] == 0)
{
	i++;
}

for (; i < len1 + len2; i++)
{
	printf("%d", result[i]);

}

printf("\n");

free(result);
}
