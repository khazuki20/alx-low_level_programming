#include <stdio.h>
/**
 * main -print out sizes of data of types in c
 * code by Khazuki
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(e));
	return (0);
}
