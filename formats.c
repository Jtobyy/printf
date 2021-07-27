#include "holberton.h"

/**
 *str_f - prints a string to sdout
 *@buf: current buffer
 *@p: pointer to string
 *Return: number of characters printed
 */
void str_f(char buf[], char *p)
{
int i;
i = 0;
for (i = 0; p[i] != '\0'; i++)
strapd(buf, p[i]);
return;
}

/**
 *char_f - prints out a character to stdout
 *@buf: current buffer
 *@c: character to print
 *Return: 1
 */
void char_f(char buf[], char c)
{
strapd(buf, c);
return;
}


/**
 *int_f - prints out an integer to stdout
 *@buf: cuurent beffer
 *@i: character to print
 *Return: number of digits prited
 */
void int_f(char buf[], int i)
{
print_number(buf, i);
return;
}

/**
 *usigned_f - prints out an unsigned integer
 *@buf: current buffer
 *@j: unsigned integer value
 *Return: no of chars printed
 */
void usigned_f(char buf[], unsigned int j)
{
print_usigned_number(buf, j);
return;
}
