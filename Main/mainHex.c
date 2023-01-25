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
	long res = INT_MAX;

	len = _printf("%x\n", 1024);
	len2 = printf("%x\n", 1024);

	_printf("%x\n", -1024);
	printf("%x\n", -1024);

	_printf("%x\n", 0);
	printf("%x\n", 0);

	_printf("%x\n", UINT_MAX);
	printf("%x\n", UINT_MAX);

	l += 1024;
	_printf("%x\n", l);
	printf("%x\n", l);

	_printf("There is %x bytes in %x KB\n", 1024, 1);
	printf("There is %x bytes in %x KB\n", 1024, 1);

	_printf("%x - %x = %x\n", 2048, 1024, 1024);
	printf("%x - %x = %x\n", 2048, 1024, 1024);

	res *= 2;
	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);


	_printf("%X\n", 1024);
        printf("%X\n", 1024);

        _printf("%X\n", -1024);
        printf("%X\n", -1024);

        _printf("%X\n", 0);
        printf("%X\n", 0);

        _printf("%X\n", UINT_MAX);
        printf("%X\n", UINT_MAX);

        _printf("%X\n", l);
        printf("%X\n", l);

        _printf("There is %X bytes in %X KB\n", 1024, 1);
        printf("There is %X bytes in %X KB\n", 1024, 1);

        _printf("%X - %X = %X\n", 2048, 1024, 1024);
        printf("%X - %X = %X\n", 2048, 1024, 1024);

	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
        printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);

	printf("COMB\n");

	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);

	_printf("uuoxxX%xuoXo\n", 1024);
	printf("uuoxxX%xuoXo\n", 1024);

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
