#include "holberton.h"

/**
*_printf - Format and prints data
*@format: format of the date eg int: i, char:c etc
*Return: The no of characters printed excluding the NULL byte
*/
int _printf(const char *format, ...)
{
int i;
int count;
int ch;
int j;
char *str;
va_list arguments;
count = 0;
i = 0;
va_start(arguments, format);
while (*(format + i) != '\0')
{
if (*(format + i) == '%')
{
i++;
if (*(format + i) == '%')
{
count++;
putchar('%');
i++;
continue;
}
else if (*(format + i) == 'c')
{
ch = va_arg(arguments , int);
count++;
putchar(ch);
i++;
continue;
}
else if (*(format + i) == 's')
{
str = va_arg(arguments , char *);
j = 0;
while(*(str + j) != '\0')
{
count ++;
putchar(*(str + j));
j++;
}
i++;
continue;
}
}
count++;
putchar(*(format + i));
i++;
}
return 0;
}
