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

	len = _printf("%b\n", -1024);
	len2 = printf("11111111111111111111110000000000\n");
	printf("%u\n",-1024);
	_printf("%b\n", 0);
	_printf("%b\n", 1);
	_printf("%b\n", UINT_MAX);

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
