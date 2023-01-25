#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "mainn.h"

/**
 * main - Entry point
 * Return: 0 on success, error code otherwise
 */

int main(void)
{
	int len, len2;
	long int l = UINT_MAX;

	l += 1020;
	len = _printf("%b", l);
	len2 = printf("1111111111");
	printf("UINT_MAX    :   %u\n", l);
	  printf("UINT_MAX    :   %ld\n", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
