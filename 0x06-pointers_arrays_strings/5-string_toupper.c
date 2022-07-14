#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: string
* Return: returns char
*/
char *string_toupper(char *s)
{
char *str = s;
while (*s)
{
if (*s >= 97 && *s <= 122)
*s -= 32;
s++;
}
return (str);
}
