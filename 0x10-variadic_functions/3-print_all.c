#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: pointer to a character that
 * will determine what is to be printed
 * based on cfis.
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char args[] = "cifs";

	va_start(arglist, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arglist, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(arglist, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(arglist, double)), k = 1;
			break;
		case 's':
			str = va_arg(arglist, char *), k = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(arglist);
}
