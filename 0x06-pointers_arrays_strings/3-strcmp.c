#include "main.h"

/**
 *  _strcmp - Function which compare two strings and
 *@s1: first string
 *@s2:second string
 *Return:
 *returns zero if s1 == s2
 *returns negative number if s1 < s2
 *returns positive number if s1 > s2
*/

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}

