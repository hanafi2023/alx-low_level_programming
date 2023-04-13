/*
 * File: 0-malloc_checked.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
		exit(98);

	return (memo);

}