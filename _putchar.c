#include "main.h"
#include <unistd.h>
int _putchar(const char c)
{
    return (write(1, &c, 1));
}