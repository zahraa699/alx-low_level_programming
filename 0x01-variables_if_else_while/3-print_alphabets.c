#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphbet letter captail & smaller letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}

/*print A -Z */
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
