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

            case 'p':
                //handle the pointer format and call the getPointer function
                i++;
                break;

            case 'c':
                // handle the character format and call the getChar function
                i++;
                break;
            
            case 's':
                // handle the string format and call the getString function
                i++;
                break;

            case 'i' | 'd':
                // handle the integer format and call the getInt function
                i++;
                break;
            
            case 'f':
                // handle the floatingPoint format and call the getFloat function
                i++;
                break;

            default:
                // handle unsupported format specifiers
                _putchar(*format);
                i++;
                break;
                return -1;
            }
        }
        else{
            _putchar(*format);
            i++;
        }
        format++;
        
    }
    va_end(args);
    return (i);
}