#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success/correct)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'a')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
