
#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	int y;
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %d byte(s)\n", sizeof(x));
	printf("Size of an int: %d byte(s)\n", sizeof(y));
	printf("Size of a long int: %d byte(s)\n", sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", sizeof(b));
	printf("Size of a float: %d byte(s)\n", sizeof(c));
	return (0);
}
