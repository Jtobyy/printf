#include "holberton.h"

/**
*_printf - Format and prints data
*@format: format of the date eg int: i, char:c etc
*Return: The no of characters printed excluding the NULL byte
*/
int _printf(const char *format, ...)
{
va_list ap;
int j;
int b;
char buf[1024];
buf[0] = '\0';
va_start(ap, format);
for (j = 0; format[j] != '\0'; j++)
{
if (format[j] == '%')
{
j += 1;
if (format[j] == '%')
{
strapd(buf, '%');
continue;
}
else
swtch_f(buf, format[j], ap);
}
else
b += strapd(buf, format[j]);
}
for (j = 0; buf[j] != '\0'; j++)
continue;
write(1, &buf, (j + 1));
return (b);
}

/**
 *strapd - appends c to buf
 *@buf: buf
 *@c: char to append
 *Return: void
 */
int strapd(char buf[], char c)
{
int i;
i = 0;
while (buf[i] != '\0')
i++;
if (i < 1024)
{
buf[i] = c;
buf[i + 1] = '\0';
return (i);
}
else
{
write(1, &buf, 1023);
i = 0;
buf[i] = c;
buf[i + 1] = '\0';
return (1023 + i);
}
}

/**
 *swtch_f - does the conditional op for printf
 *@buf: current buffer
 *@f: format character
 *@ap: variable of type va_list
 *Return: number of characters printed to stdout
 */
void swtch_f(char buf[], char f, va_list ap)
{
int i;
char *p, s;
unsigned int j;
switch (f)
{
case 's':
p = va_arg(ap, char *);
str_f(buf, p);
break;
case 'c':
s = (char)va_arg(ap, int);
char_f(buf, s);
break;
case 'd':
case 'i':
i = va_arg(ap, int);
int_f(buf, i);
break;
case 'b':
i = va_arg(ap, int);
binary_f(buf, i);
break;
case 'u':
j = va_arg(ap, unsigned int);
usigned_f(buf, j);
break;
case 'o':
j = va_arg(ap, unsigned int);
oct_f(buf, j);
break;
case 'X':
case 'x':
j = va_arg(ap, unsigned int);
hex_f(buf, j, f);
break;
default:
strapd(buf, '%');
strapd(buf, f);
}
return;
}

