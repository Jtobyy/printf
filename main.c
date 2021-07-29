#include "holberton.h"

#include <limits.h>
#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
    int len2;
    unsigned int ui;
    char *s;
    char *tmp;
    char *tmp2;
    void *addr __attribute__((unused));

    len = _printf("me: Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("me: Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("me: Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("me: Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("me: [%d, %i]\n", 03, 10);
    len2 = printf("[%d, %i]\n", 03, 10);
    _printf("me: Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Character:[%s]\n", "\"o^''%df~!@#$%^&*()_+=");
    printf("Character:[%s]\n", "\"o^''%df~!@#$%^&*()_+=");
    _printf("Character:my[%c%q s%o%%f~!@#$%^&*()_+?]\n", 'H');
    printf("Character:[%c%q s%o%%f~!@#$%^&*()_+?]\n", 'H');
    _printf("Character:my[%s ]\n", "of\0");
    printf("Character:[%s ]\n", "of\0");
    s = malloc(sizeof(char) * 727);
    tmp = malloc(sizeof(char) * 147);
    tmp2 = malloc(sizeof(char) * 97);
    s  = "goLorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in volup";
    tmp = 
    len = _printf("%s%d", s, 123456789);
    len2 =    printf("%s%d", s, 123456789);
    len = printf(str, "you", "normally does preprocessing, compilation, assembly", '"', '"', "For example,", tmp, 'o', tmp2, 8);
    len2 =  printf(str, "you", "normally does preprocessing, compilation, assembly", '"', '"', "For example,", tmp, 'o', tmp2, 8);

 printf("len: %d, len2: %d\n", len, len2);
    ui = -1 * ((unsigned int)INT_MAX + 1024);
    addr = (void *)0x7ffe637541f0;
    _printf("Negative:[%d]\n", 762534);
    printf("Negative:[%d]\n", 762534);
    _printf("Unsigned:[%u]\n", -ui);
    printf("Unsigned:[%u]\n", -ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    /**    
        _printf("Address:[%p]\n", addr);
	  printf("Address:[%p]\n", addr); */
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /**    _printf("Unknown:[%r]\n");
	  printf("Unknown:[%r]\n");*/
     printf("Binary:[%b]\n", 98);
len= _printf("Binary:[%b]\n", 98);
 _printf("Len:[%d]\n", len);
 len= _printf("Binary:[%b]\n", 3);
  _printf("Len:[%d]\n", len);
   len= _printf("Binary:[%b]\n", 4);
     _printf("Len:[%d]\n", len);
   
  return (0);
}
