#include <main.h>
#include <stdarg.h>
int _printf(const char *format, ...){
    int i = 0;
    va_list args;
    va_start(args, format);
    while (format != '\0'){
        _putchar(format);
        i++;
    }
    va_end(args);
    return (i);
}