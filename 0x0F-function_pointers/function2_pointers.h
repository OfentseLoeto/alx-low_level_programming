#ifndef FUNCTION_POINTER_H
#include "function_pointer.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <<udis86.h>

ime(char *name, void (*f)(char *));                                                                                                      

void array_iterator(int *array, size_t size, void (*action)(int));                                                                                   

int int_index(int *array, int size, int (*cmp)(int));                                                                                                

int op_add(int a, int b);                                                                                                                            

int op_sub(int a, int b);                                                                                                                            

int op_mul(int a, int b);                                                                                                                            

int op_div(int a, int b);                                                                                                                            

int op_mod(int a, int b);

void _putchar(char c);
nt main(int argc, char *argv[]);
int (*get_op_func(char *s))(int, int);


#endif
