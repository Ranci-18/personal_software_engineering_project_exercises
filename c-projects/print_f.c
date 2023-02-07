#include <stdarg.h>
#include <stdio.h>

int my_printf(const char *format, ...) {
    va_list args;
    int i = 0, j = 0;
    int count = 0;

    va_start(args, format);

    while (format[i]) {
        if (format[i] == '%') {
            i++;
            switch (format[i]) {
                case 'd':
                {
                    int int_arg = va_arg(args, int);
                    count += printf("%d", int_arg);
                    break;
                }
                case 's':
                {
                    char *string_arg = va_arg(args, char *);
                    count += printf("%s", string_arg);
                    break;
                }
                case 'c':
                {
                    char char_arg = (char) va_arg(args, int);
                    count += printf("%c", char_arg);
                    break;
                }
                case 'f':
                {
                    double float_arg = va_arg(args, double);
                    count += printf("%f", float_arg);
                    break;
                }
                default:
                    putchar(format[i]);
                    count++;
                    break;
            }
        } else {
            putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(args);

    return count;
}

