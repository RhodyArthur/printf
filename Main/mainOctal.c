#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 * Return: 0 on success, error code otherwise
 */

int main(void)
{
	int len, len2;
	long int l = UINT_MAX;

	len = _printf("%o\n", 1024);
	len2 = printf("%o\n", 1024);
	_printf("%o\n", -1024);
	printf("%o\n", -1024);
	_printf("%o\n", 0);
	printf("%o\n", 0);
	_printf("%o\n", UINT_MAX);
	printf("%o\n", UINT_MAX);


	l += 1024;
	len = _printf("%o\n", l);
	len2 = printf("%o\n", l);

	_printf("There is %o bytes in %o KB\n", 1024, 1);
	printf("There is %o bytes in %o KB\n", 1024, 1);

	_printf("%o - %o = %o\n", 2048, 1024, 1024);
	printf("%o - %o = %o\n", 2048, 1024, 1024);

	long res = INT_MAX;

	res *= 2;
	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);


	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
