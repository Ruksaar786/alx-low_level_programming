#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: Pointer to the first occurance of the character c in the string s
 **/

char *_strchr(char *s, char c)
{
while (*s != '\0') /*Declaring while*/
{
if (*s == c) /*if s == c*/
{
return (s); /*return s*/
}

++s;

}

if (*s == c)
{

return (s);

}
