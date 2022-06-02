#include <stdio.h>
/**
 * main - entry point
 * prints size
 *Return: Always 0 (Succes)
 */
int main(void)
{
printf("Size of a char: %d bytes(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of a flaot: %d bytes(s)\n", sizeof(float));
return (0);
}
