#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: this is the c string to be scanned.
 * @accept: character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s != '\0') /*Declaring while*/
	{
		r = 0;
		while (accept[r] != '\0') /*Evaluating *accept*/
		{
			if (*s == accept[r])
			{
				return (s);
			}

			r++; /*add r+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
