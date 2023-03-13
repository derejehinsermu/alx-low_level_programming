#include <stdio.h>

/**
 * main- a program that prints its name
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 * Return: 0- success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
