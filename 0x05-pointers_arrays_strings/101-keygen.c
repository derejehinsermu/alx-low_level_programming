#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char password[9] = {0};
	/* Seed RNG with time */
	srand(time(0));
	/* Generate random numbers */
	for (i = 0; i < 8; i++)
		password[i] = (rand() % 26) + 'a';
	/* Print the password */
	printf("Password: %s\n", password);
	return (0);
}
