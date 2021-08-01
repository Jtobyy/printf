#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void str_f(char buf[], char *p, int *);
void char_f(char buf[], char c, int *);
void int_f(char buf[], int i, int *);
int _pow10(int);
void add_zeros(char buf[], int n, int p, int *);
void print_number(char buf[], int n, int *);
void swtch_f(char buf[], char f, va_list ap, int *);
void binary_f(char buf[], unsigned int i, int *);
void usigned_f(char buf[], unsigned int, int *);
void print_usigned_number(char buf[], unsigned int n, int *);
void oct_f(char buf[], unsigned int j, int *);
void hex_f(char buf[], unsigned int j, char s, int *);
void lim_itoa(char buf[], char a[], unsigned int n[], unsigned int j, int *);
void strapd(char buf[], char, int *);

#endif /* _PRINTF_H_ */
