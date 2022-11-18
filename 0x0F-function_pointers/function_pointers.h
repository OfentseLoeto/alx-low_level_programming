#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int _strspn(char *s, char *accept);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
void _puchar(char c);
int main(int argc, char *argv[]);

#endif
