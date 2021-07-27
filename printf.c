#include "holberton.h"

/**
*_printf - Format and prints data
*@format: format of the date eg int: i, char:c etc
*Return: The no of characters printed excluding the NULL byte
*/
int _printf(const char *format, ...)
{
va_list arguments;
va_start(arguments,format);
int count = 0;
while (*format != '\0')
{
if (*format == '%')
{
*format++;
if (*format == '%')
{
count++;
putchar('%');
*format ++;
continue;
}
if (*format == 'c')
{
int ch = va_arg(arguments , int);
count++;
putchar(ch);
*format ++;
continue;
}
if (*format == 's')
{
char* str = va_arg(arguments , char*);
while(*str != '\0')
{
count ++;
putchar(*str);
*str++;
}
*format ++;
continue;
}
return 0;
}
count++;
putchar(*format);
*format ++;
}
}
