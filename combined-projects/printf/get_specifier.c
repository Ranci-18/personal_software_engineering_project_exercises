#include <stdio.h>
#include "main.h"
/**/
typedef int (*specifier_func)(const char *)

int print_string(const char *s)
{

}
int get_specifier(const char *format)
{
	specifier_func specifiers[] = {print_string, print_integer, printk_float}
	char format_specifiers[] = {'c', 's', 'd', 'i'};
	int i;

	for (i = 0; format_specifier[i]; i++)
	{
		if (format[0] == format_specifiers[i])
		{
			return (*specifiers[i](format + 1));
		}
	}
	return (0);
}
