#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct conversion_specifiers - Struct for symbols and functions
 * @c_s: conversion specifier symbol
 * @f: conversion specifier function
 *
 * Description: Symbols and functions of conversion specifiers
 */
typedef struct conversion_specifiers
{
	char c_s;
	int (*f)(va_list, int);
} conversion_specif;

int _printf(const char *format, ...);

int print_char(va_list, int);
int print_string(va_list, int);
int print_custom_s(va_list, int);
int print_int(va_list, int);
int print_binary(va_list, int);
int print_unsignedInt(va_list, int);
int print_unsignedInt(va_list, int);
int print_octal(va_list, int);
int print_hexadecimal(va_list, int);
int print_hexCapital(va_list, int);
int print_reverse(va_list, int);
int print_rot13(va_list, int);
int print_pointer(va_list _string, int number);

int print_percentage(va_list, int);
int _buffer(char c);

#endif
