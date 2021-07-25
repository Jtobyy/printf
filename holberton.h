#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int str_f(char *);
int char_f(char c);
int int_f(int i);
int _pow10(int);
int add_zeros(int n, int p);
int print_number(int n);
int swtch_f(char f, va_list ap);

#endif /* _PRINTF_H_ */
