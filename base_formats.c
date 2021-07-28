#include "holberton.h"

/**
 *binary_f - converts a number to binary and prints
 *its ressult.
 *@buf: current buffer
 *@i: given number
 *Return: no of chars printed
 */
void binary_f(char buf[], unsigned int i)
{
unsigned int rem;
rem = i % 2;
if (i == 1)
{
strapd(buf, (1 + '0'));
return;
}
i /= 2;
binary_f(buf, i);
strapd(buf, (rem + '0'));
return;
}

/**
 *oct_f - converts a number to given base 8 and
 *prints it out
 *@buf: current buffer
 *@j: no to be printed or converted
 *Return: no of chars printed
 */
void oct_f(char buf[], unsigned int j)
{
int rem;
if (j < 8)
{
strapd(buf, (j + '0'));
return;
}
rem = j % 8;
j /= 8;
oct_f(buf, j);
strapd(buf, (rem + '0'));
return;
}

/**
 *hex_f - hexadecimal no converter
 *@buf: current buffer
 *@j: unsigned in to be converted
 *@s: indicator to use uppercase or lowercase
 *Return: no of chars printed
 */
void hex_f(char buf[], unsigned int j, char s)
{
unsigned int rem;
int i;
char a[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
unsigned int n[6] = {10, 11, 12, 13, 14, 15};
if (s == 'X')
{
for (i = 0; i < 6; i++)
a[i] -= 32;
}
if (j < 16)
{
if (j >= 10)
lim_itoa(buf, a, n, j);
else
strapd(buf, (j + '0'));
return;
}
rem = j % 16;
j /= 16;
hex_f(buf, j, s);
if (rem >= 10)
lim_itoa(buf, a, n, rem);
else
strapd(buf, (rem + '0'));
return;
}

/**
 *lim_itoa - a limited itoa function that converts
 *an int btw 10 and 15 to its corresponding alphabet
 *@buf: current buffer
 *@a: array of alphabets
 *@n: array of numbers
 *@j:  number to search for or convert
 *Return: void
 */
void lim_itoa(char buf[], char a[], unsigned int n[], unsigned int j)
{
int i;
char tmp;
i = 0;
while (i < 6)
if (n[i] == j)
{
tmp = a[i];
strapd(buf, tmp);
break;
}
else
i++;
return;
}
