#include <stdio.h>

/**
 * main - print 1 through 100 anf fizz for 3 and buzz for every 5
 *
 * Return: 0
 */
int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 3 == 0 && p % 15 !=0)
			printf("Fizz");
		else if (p % 5 == 0 && p % 15 !=0)
			printf("Buzz");
		else if (p % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", p);
		if (p < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
