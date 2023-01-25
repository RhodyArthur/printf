#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 on success, error code otherwise
 */

int main(void)
{
	int len, len2;

	len = _printf("%S\n", "No special character.");
	len2 = printf("No special character.\n");

	_printf("%S\n", "\n");
	printf("\\x0A\n");

	_printf("%S\n", "\x01\x02\x03\x04\x05\x06\x07");
	printf("\\x01\\x02\\x03\\x04\\x05\\x06\\x07\n");

	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");

	printf("Empty Down\n");
	_printf("");
	printf("");

	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	printf("- What did you say?\n- %s\n- That's what I thought.\n", "");

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
