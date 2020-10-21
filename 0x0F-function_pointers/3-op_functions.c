#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two integers
 *
 * @a: parameter
 * @b: parameter
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 *
 * @a: parameter
 * @b: parameter
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: parameter
 * @b: parameter
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 *
 * @a: parameter
 * @b: parameter
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division
 *
 * @a: parameter
 * @b: parameter
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
