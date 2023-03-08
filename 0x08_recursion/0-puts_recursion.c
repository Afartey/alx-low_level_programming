#include "main.h"

/**
 * _puts_iterative - prints a string
 * @s: pointer to the string to be printed
 * Return: void
 */

void _puts_iterative(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}
