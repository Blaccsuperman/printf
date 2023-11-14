#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int get_length(int num);
char *tostring(int num);

#endif/*MAIN_H*/
