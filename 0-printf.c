#include "main.h"

/*

  _printf - function that produces output according to a format
  @format: character string that specifies the output format
  Return: the number of characters printed (excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
  va_list valist;
  int count = 0;
  va_start(valist, format);

  for (; *format; format++)
    {
      if (*format == '%')
	{
	  format++;
	  switch (*format)
	    {
	    case 'c':
	      _putchar(va_arg(valist, int));
	      count++;
	      break;
	    case 's':
	      _puts(va_arg(valist, char *));
	      count += _strlen(va_arg(valist, char *));
	      break;
	    case '%':
	      _putchar('%');
	      count++;
	      break;
	    default:
	      _putchar(*format);
	      count++;
	      break;
	    }
	}
      else
	{
	  _putchar(*format);
	  count++;
	}
    }
  va_end(valist);

  return (count);
}
