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
b = 0;
buf[0] = '\0';
if (format == NULL)
return (-1);
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
b = strapd(buf, format[j]);
}
for (j = 0; buf[j] != '\0'; j++)
continue;
write(1, &buf, j);
while (b > 1023)
{
printf("size of j: %d\n", j);
j += 1023;
b -= 1023;
}
return (j);
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
if (i < 1023)
buf[i + 1] = '\0';
return (i + 1);
}
else
{
printf("buf: %s\n", buf);
write(1, buf, 1024);
buf[0] = c;
buf[1] = '\0';
return (1024);
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
char *p;
switch (f)
{
case 's':
p = va_arg(ap,  char *);
if (p == NULL)
str_f(buf,  "(null)");
else
str_f(buf, p);
break;
case 'c':
char_f(buf, (char)va_arg(ap, int));
break;
case 'd':
case 'i':
int_f(buf, va_arg(ap, int));
break;
case 'b':
binary_f(buf, va_arg(ap, unsigned int));
break;
case 'u':
usigned_f(buf, va_arg(ap, unsigned int));
break;
case 'o':
oct_f(buf, va_arg(ap, unsigned int));
break;
case 'X':
case 'x':
hex_f(buf, va_arg(ap, unsigned int), f);
break;
default:
strapd(buf, '%');
strapd(buf, f);
}
return;
}
