#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 on success
 */
int main(void)
{
	char a;
	int b;

	int long c;
	int long long d;

	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
