#include "holberton.h"

/**
*_printf - Format and prints data
*@format: format of the date eg int: i, char:c etc
*Return: The no of characters printed excluding the NULL byte
*/
int _printf(const char *format, ...)
{
va_list ap;
int n;
int i;
char s;
char f;
char *p;
i = 0;
while (format[i] != '\0')
i++;
if (format[0] != '%' || i > 2)
{
char err_mssg[400] = "error: _printf(\"%[format_char]\", ..).";
i = 0;
while (err_mssg[i] != '\0')
{
s = err_mssg[i];
putchar(s);
i++;
}
putchar('\n');
return (0);
}
va_start(ap, format);
f = format[1];
switch (f)
{
case 's':
p = va_arg(ap, char *);
n = str_f(p);
break;
case 'c':
case '%':
s = (char)va_arg(ap, int);
n = char_f(s);
break;
}
return (n);
}
