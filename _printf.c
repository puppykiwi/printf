#include "main.h"
#include <stdarg.h>
int _printf(const char *format, ...){
    int i = 0;
    va_list args;
    va_start(args, *format);
    while (*format != '\0'){

        if (*format == '%'){
            format++;
            //switch case to handle the different format specifiers, c, s, d, i
            switch (*format)
            {
            case 'c':
                // handle the character format and call the getChar function
                break;
            
            case 's':
                // handle the string format and call the getString function
                break;

            case 'i':
                // handle the integer format and call the getInt function
                break;
            
            case 'f':
                // handle the floatingPoint format and call the getFloat function
                break;

            default:
                break;
            }
        }
        else{
            _putchar(*format);
        }
        format++;
        
    }
    va_end(args);
    return (i);
}