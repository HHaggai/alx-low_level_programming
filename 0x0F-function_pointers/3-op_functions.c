#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Ret the sum of two nums.
 * @a: The first numb.
 * @b: The second num.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Ret the diff of two numbers.
 * @a: The first numb.
 * @b: The second numb.
 *
 * Return: The diff of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the prod of two nums.
 *@a: The first numb.
 * @b: The second numb.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Ret the divis of two numbers.
 * @a: The first numb.
 * @b: The second numb.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remain of the divis of two numbers.
 * @a: The first numb.
 * @b: The second numb.
 *
 * Return: The remain of the divis of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

