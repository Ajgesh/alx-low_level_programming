#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - two number addition
  * @a: firstnumber
  * @b: secondnumber
  *
  * Return: add
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - two number subt
  * @a: firstnumber
  * @b: secondnumber
  *
  * Return: subt
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two number
  * @a: firstnumber
  * @b: secondnumber
  *
  * Return: multiply
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two number
  * @a: firstnumber
  * @b: second number
  *
  * Return: divide
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
  * op_mod - module of two number
  * @a: firstnumber
  * @b: secondnumber
  *
  * Return: module
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
