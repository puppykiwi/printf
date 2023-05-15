#include <main.h>
#include <stdarg.h>
int _printf(const char *format, ...){
    int i = 0;
    va_list args;
    Va_start(args, format);
    while (format != NULL){
        _putchar(format);
        i++;
    }
    va_end(args);
    return (i);
}