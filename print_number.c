#include "holberton.h"

/**
 *print_number - prints an integer
 *@n: number to be printed
 *Return: void
 */

int print_number(int n)
{
int quo;
int i;
int p;
int c;
i = 0;
c = 0;
quo = n;
if (n < 0)
{
putchar('-');
n = 0 - n;
return (1 + print_number(n));
}
while (quo >= 10)
{
quo = quo / 10;
i++;
}
putchar(quo + '0');
c++;
p = _pow10(i);
n = (n - (quo *p));
c += add_zeros(n, p);
if (n >= 10)
return (c + print_number(n));
else
{
putchar(n + '0');
return (c + 1);
}
}

/**
 *_pow10 - calculates the value of 10 raised to an integer
 *@n: value of power
 *Return: void
 */
int _pow10(int n)
{
int i;
int tmp;
tmp = 10;
for (i = 1; i < n; i++)
tmp *= 10;
return (tmp);
}

/**
 *add_zeros - adds appropratite amount of zeros before digits
 *@n: integer that zeros should be added before
 *@p: Power of MSD of initial integer
 *Return: void
 */
int add_zeros(int n, int p)
{
int i;
int d;
d = 0;
for (i = p / 10; i > 1 && n < i; i = i / 10)
{
putchar(0 + '0');
d++;
}
return (d);
}