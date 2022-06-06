#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
int number_left;
int number_right;


for (number_left = 1; number_left <= 98; number_left++)
{
for (number_right = number_left + 1 ; number_right <= 99; number_right++)
{


putchar(number_left / 10 + 48);
putchar(number_left % 10 + 48);
putchar(' ');
putchar(number_right / 10 + 48);
putchar(number_right % 10 + 48);


if ((number_left == 98) && (number_right == 99))
{
break;
}

putchar(',');
putchar(' ');

}

}

putchar('\n');


return (0);


}
