#ifndef PRINTF_H
#define PRINTF_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *c);
int print_int(long int num);
int print_Str(char *c);
int print_bin(unsigned int num);
int print_hex(unsigned long int num);
int print_hexlow(unsigned long int num);
int print_oct(unsigned long int num);
int print_unt(unsigned long int num);
int print_ptr(void *ptr);
int print_rot13(char *c);
int print_rev(char *c);

#endif
