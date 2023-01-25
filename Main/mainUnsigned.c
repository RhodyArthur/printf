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

	len = _printf("%u\n", 1024);
	len2 = printf("%u\n", 1024);

	_printf("%u\n", -1024);
	printf("%u\n", -1024);

	_printf("%u\n", 0);
	printf("%u\n", 0);

	_printf("%u\n",UINT_MAX);
	printf("%u\n",UINT_MAX);

	l += 1024;
	_printf("%u\n", l);
	printf("%u\n", l);

	_printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("There is %u bytes in %u KB\n", 1024, 1);

	_printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("%u - %u = %u\n", 2048, 1024, 1024);

	long res = INT_MAX;

	res *= 2;
	_printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
