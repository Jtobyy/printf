#include "holberton.h"

/**
 *str_f - prints a string to sdout
 *@p: pointer to string
 *Return: number of characters printed
 */
int str_f(char *p)
{
int i;
int n;
char s;
n = 0;
for (i = 0; p[i] != '\0'; i++)
{
s = p[i];
putchar(s);
n++;
}
s = p[i];
putchar(s);
return (n);
}

/**
 *char_f - prints out a character to stdout
 *@c: character to print
 *Return: 1
 */
int char_f(char c)
{
int n;
n = 1;
putchar(c);
return (n);
}


/**
 *int_f - prints out an integer to stdout
 *@i: character to print
 *Return: number of digits prited
 */
int int_f(int i)
{
int n;
n = print_number(i);
return (n);
}
