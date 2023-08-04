#include "main.h"

/**
 * wildcap - compare strings
 * @s1: pointer to string parans
 * @s2: pointer to string parans
 * Return: 0
 */

int wildcap(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcap(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcap(s1 + 1, s2) || wildcap(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcap(s1 + 1, s2 + 1));
	}
	return (0);
}
