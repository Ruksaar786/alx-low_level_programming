#include "main.h"

/**
 *times_table -prints tables
 *
 * Return: Always 0.
 */
void times_table(void)
{
    int num;

    printf("Enter a positive number\n")
    scanf("%d", &num);

    pritf("\nMultiplaction Table for %d is:\n", num);

    tables(num);

    return (0)

}
    void tables(int num)
 {
     int count;

     for(count =1; count <=9, count++)
 {
     printf(%d x %d = %d\n", num, count, num*count);
 }

 }

