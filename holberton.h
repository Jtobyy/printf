#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void str_f(char buf[], char *p);
void char_f(char buf[], char c);
void int_f(int i);
int _pow10(int);
void add_zeros(char buf[], int n, int p);
void print_number(char buf[], int n);
void swtch_f(char buf[], va_list ap);
void binary_f(char buf[], int i);
void usigned_f(char buf[], unsigned int);
void print_usigned_number(char buf[], unsigned int n);
void oct_f(char buf[], unsigned int j);
void hex_f(char buf[], unsigned int j, char s);
void lim_itoa(char buf[], char a[], unsigned int n[], unsigned int j);
int strapd(char buf[], char);

#endif /* _PRINTF_H_ */
