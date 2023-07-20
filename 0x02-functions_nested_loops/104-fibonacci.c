#include <stdio.h>
/**
 * main - Entry point
 * Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int previous = 1;
	unsigned long int next = 2;
	unsigned long int limit = 1000000000;
	unsigned long int previous1;
	unsigned long int previous2;
	unsigned long int next1;
	unsigned long int next2;

	printf("%lu", previous);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", next);
		next += previous;
		previous = next - previous;
	}

	previous1 = (previous / limit);
	previous2 = (previous % limit);
	next1 = (next / limit);
	next2 = (next % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", next1 + (next2 / limit));
		printf("%lu", next2 % limit);
		next1 = next1 + previous1;
		previous1 = next1 - previous1;
		next2 = next2 + previous2;
		previous2 = next2 - previous2;
	}
	printf("\n");
	return (0);
}
