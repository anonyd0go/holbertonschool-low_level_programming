#include <stdio.h>

void printstr(void) __attribute__ ((constructor));
/**
 * printstr - prints desired text before main
 * Return: void
 */
void printstr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
