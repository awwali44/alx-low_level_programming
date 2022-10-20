
#include <stdio.h>

void print_stuff(void) __attribute__ ((constructor));

/**
 * print_stuff - Prints a sentence
 *
 * Return: 1
 */
void print_stuff(void)
{
	char *s1 = "You're beat! and yet, you must allow,";
	char *s2 = "I bore my house upon my back!";

	printf("%s\n%s\n", s1, s2);
}
