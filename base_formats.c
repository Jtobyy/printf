#include "holberton.h"

/**
 *binary_f - converts a number to binary and prints
 *its ressult.
 *@buf: current buffer
 *@i: given number
 *@bp: current char count
 *Return: no of chars printed
 */
void binary_f(char buf[], unsigned int i, int *bp)
{
unsigned int rem;
rem = i % 2;
if (i == 1)
{
strapd(buf, (1 + '0'), bp);
return;
}
i /= 2;
binary_f(buf, i, bp);
strapd(buf, (rem + '0'), bp);
return;
}

/**
 *oct_f - converts a number to given base 8 and
 *prints it out
 *@buf: current buffer
 *@j: no to be printed or converted
 *@bp: current char count
 *Return: no of chars printed
 */
void oct_f(char buf[], unsigned int j, int *bp)
{
int rem;
if (j < 8)
{
strapd(buf, (j + '0'), bp);
return;
}
rem = j % 8;
j /= 8;
oct_f(buf, j, bp);
strapd(buf, (rem + '0'), bp);
return;
}

/**
 *hex_f - hexadecimal no converter
 *@buf: current buffer
 *@j: unsigned in to be converted
 *@s: indicator to use uppercase or lowercase
 *@bp: current char count
 *Return: no of chars printed
 */
void hex_f(char buf[], unsigned int j, char s, int *bp)
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
lim_itoa(buf, a, n, j, bp);
else
strapd(buf, (j + '0'), bp);
return;
}
rem = j % 16;
j /= 16;
hex_f(buf, j, s, bp);
if (rem >= 10)
lim_itoa(buf, a, n, rem, bp);
else
strapd(buf, (rem + '0'), bp);
return;
}

/**
 *lim_itoa - a limited itoa function that converts
 *an int btw 10 and 15 to its corresponding alphabet
 *@buf: current buffer
 *@a: array of alphabets
 *@n: array of numbers
 *@j:  number to search for or convert
 *@bp: current char count
 *Return: void
 */
void lim_itoa(char buf[], char a[], unsigned int n[], unsigned int j, int *bp)
{
int i;
char tmp;
i = 0;
while (i < 6)
if (n[i] == j)
{
tmp = a[i];
strapd(buf, tmp, bp);
break;
}
else
i++;
return;
}
