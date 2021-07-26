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
int j;
char s;
char f;
i = 0;
n = 0;
while (format[i] != '\0')
i++;
va_start(ap, format);
for (j = 0; j < i; j++)
{
if (format[j] == '%')
{
j += 1;
if (format[j] == '%')
{
putchar('%');
n++;
continue;
}
else
{
f = format[j];
n += swtch_f(f, ap);
}
}
else
{
s = format[j];
putchar(s);
n++;
}
}
return (n);
}

/**
 *swtch_f - does the conditional op for printf
 *@f: format character
 *@ap: variable of type va_list
 *Return: number of characters printed to stdout
 */
int swtch_f(char f, va_list ap)
{
int i;
int n;
char s;
char *p;
switch (f)
{
case 's':
p = va_arg(ap, char *);
n = str_f(p);
break;
case 'c':
s = (char)va_arg(ap, int);
n = char_f(s);
break;
case 'd':
case 'i':
i = va_arg(ap, int);
n = int_f(i);
break;
}
return (n);
}
