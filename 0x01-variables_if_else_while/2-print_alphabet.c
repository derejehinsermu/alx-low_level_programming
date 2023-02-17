#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return 0;
}
