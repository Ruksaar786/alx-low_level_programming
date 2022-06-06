#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
int number_left;
int number_middle;
int number_right;


for (number_left = 48; number_left <= 57; number_left++)
{
for (number_middle = number_left + 1 ; number_middle <= 57; number_middle++)
{
for (number_right = number_middle + 1 ; number_right <= 57; number_right++)
{


putchar(number_left);
putchar(number_middle);
putchar(number_right);


if ((number_left == 55) && (number_middle == 56) && (number_right == 57))
{
break;
}

putchar(',');
putchar(' ');

}

}

}

putchar('\n');


return (0);


}
