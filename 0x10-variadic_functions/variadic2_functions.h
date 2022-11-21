#ifndef VARIADICT_FUNCTIONS_H
#define "variadict_functions.h"
#include <stdio.h>
#include <stdlib.h>                                                                                                                                    
#include "stdarg.h"

int sum_them_all(const unsigned int n, ...);                                                                                                           

void print_numbers(const char *separator, const unsigned int n, ...);                                                                                  

void print_strings(const char *separator, const unsigned int n, ...);                                                                                  

void print_all(const char * const format, ...);                                                                                                        

void _putchar(char c); 

#endif
