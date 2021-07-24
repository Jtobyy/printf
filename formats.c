#include "holberton.h"

int str_f(char * p)
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
putchar('\n');
return n;
}

int char_f(char c)
{
int n;
n = 1;
putchar(c);
putchar('\n');
return n;
}
