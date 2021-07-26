#include "holberton.h"

/**
 *binary_f - converts a number to binary and prints
 *its ressult.
 *@i: given number
 *Return: no of chars printed
 */
int binary_f(int i)
{
int rem;
int c;
c = 1;
rem = i % 2;
if (i == 1)
{
putchar(1 + '0');
return (1);
}
i /= 2;
c += binary_f(i);
putchar(rem + '0');
return (c);
}

/**
 *oct_f - converts a number to given base 8 and
 *prints it out
 *@j: no to be printed or converted
 *Return: no of chars printed
 */
int oct_f(unsigned int j)
{
int rem;
int c;
c = 1;
if (j < 8)
{
putchar(j + '0');
return (1);
}
rem = j % 8;
j /= 8;
c += oct_f(j);
putchar(rem + '0');
return (c);
}

/**
 *hex_f - hexadecimal no converter
 *@j: unsigned in to be converted
 *@s: indicator to use uppercase or lowercase
 *Return: no of chars printed
 */
int hex_f(unsigned int j, char s)
{
unsigned int rem;
int c;
int i;
char a[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
unsigned int n[6] = {10, 11, 12, 13, 14, 15};
if (s == 'X')
{
for (i = 0; i < 6; i++)
a[i] -= 32;
}
c = 1;
if (j < 16)
{
if (j >= 10)
lim_itoa(a, n, j);
else
putchar(j + '0');
return (1);
}
rem = j % 16;
j /= 16;
c += hex_f(j, s);
if (rem >= 10)
lim_itoa(a, n, rem);
else
putchar(rem + '0');
return (c);
}

/**
 *lim_itoa - a limited itoa function that converts
 *an int btw 10 and 15 to its corresponding alphabet
 *@a: array of alphabets
 *@n: array of numbers
 *@j:  number to search for or convert
 *Return: void
 */
void lim_itoa(char a[], unsigned int n[], unsigned int j)
{
int i;
char tmp;
i = 0;
while (i < 6)
if (n[i] == j)
{
tmp = a[i];
putchar(tmp);
break;
}
else
i++;
return;
}
