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
int *bp;
b = 0;
buf[0] = '\0';
bp = &b;
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
strapd(buf, '%', bp);
continue;
}
else if (format[j] == ' ' || format[j] == '\0')
continue;
else
swtch_f(buf, format[j], ap, bp);
}
else
strapd(buf, format[j], bp);
}
for (j = 0; buf[j] != '\0'; j++)
continue;
write(1, &buf, j);
*bp = *bp + j;
return (b);
}

/**
 *strapd - appends c to buf
 *@buf: buf
 *@c: char to append
 *@bp: current char count
 *Return: void
 */
void strapd(char buf[], char c, int *bp)
{
int i;
char *err;
i = 0;
while (buf[i] != '\0')
i++;
if (i > 1024)
{
err = malloc(sizeof(char) * 18);
err = "An error occurred";
write(2, &err, 18);
}
if (c == '\0' && i < 1024)
{
write(1, &buf, i);
putchar('\0');
*bp = *bp + (i + 1);
buf[0] = '\0';
return;
}
if (i < 1024)
{
buf[i] = c;
if (i < 1023)
buf[i + 1] = '\0';
else
{
write(1, &buf, i + 1);
*bp = *bp + (i + 1);
buf[0] = '\0';
}
return;
}
else
{
write(1, &buf, 1024);
*bp = *bp + 1024;
buf[0] = c;
buf[1] = '\0';
return;
}
}

/**
 *swtch_f - does the conditional op for printf
 *@buf: current buffer
 *@f: format character
 *@ap: variable of type va_list
 *@bp: current char count
 *Return: number of characters printed to stdout
 */
void swtch_f(char buf[], char f, va_list ap, int *bp)
{
char *p;
switch (f)
{
case 's':
p = va_arg(ap,  char *);
if (p == NULL)
str_f(buf,  "(null)", bp);
else
str_f(buf, p, bp);
break;
case 'c':
char_f(buf, (char)va_arg(ap, int), bp);
break;
case 'd':
case 'i':
int_f(buf, va_arg(ap, int), bp);
break;
case 'b':
binary_f(buf, va_arg(ap, unsigned int), bp);
break;
case 'u':
usigned_f(buf, va_arg(ap, unsigned int), bp);
break;
case 'o':
oct_f(buf, va_arg(ap, unsigned int), bp);
break;
case 'X':
case 'x':
hex_f(buf, va_arg(ap, unsigned int), f, bp);
break;
default:
strapd(buf, '%', bp);
strapd(buf, f, bp);
}
return;
}
