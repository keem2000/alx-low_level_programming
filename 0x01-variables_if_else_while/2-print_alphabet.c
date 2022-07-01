#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - starts the code
* Description: prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
