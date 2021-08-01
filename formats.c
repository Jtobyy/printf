#include "holberton.h"

/**
 *str_f - prints a string to sdout
 *@buf: current buffer
 *@p: pointer to string
 *@bp: current char count
 *Return: number of characters printed
 */
void str_f(char buf[], char *p, int *bp)
{
int i;
i = 0;
for (i = 0; p[i] != '\0'; i++)
strapd(buf, p[i], bp);
return;
}

/**
 *char_f - prints out a character to stdout
 *@buf: current buffer
 *@c: character to print
 *@bp: current char count
 *Return: 1
 */
void char_f(char buf[], char c, int *bp)
{
strapd(buf, c, bp);
return;
}


/**
 *int_f - prints out an integer to stdout
 *@buf: current buffer
 *@i: character to print
 *@bp: current char count
 *Return: number of digits prited
 */
void int_f(char buf[], int i, int *bp)
{
print_number(buf, i, bp);
return;
}

/**
 *usigned_f - prints out an unsigned integer
 *@buf: current buffer
 *@j: unsigned integer value
 *@bp: current char count
 *Return: no of chars printed
 */
void usigned_f(char buf[], unsigned int j, int *bp)
{
print_usigned_number(buf, j, bp);
return;
}
