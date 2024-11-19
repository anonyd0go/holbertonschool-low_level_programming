#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two nums
 * @a: int to add
 * @b: int to add
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two nums
 * @a: int to subtract
 * @b: int to subtract
 * Return: Subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two nums
 * @a: Int to mult
 * @b: Int to mult
 * Return: Result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: Dividend
 * @b: Divisor
 * Return: Result of the Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the remainder of a division
 * @a: Dividend
 * @b: Divisor
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
