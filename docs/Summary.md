## Temas
- ***variadic functions***

## Requisitos

Program name | libftprintf.a
-------------|--------------
Turn in files | Makefile, *.h, */*.h, *.c, */*.c 
Makefile | NAME, all, clean, fclean, re
External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end
Libft authorized | Yes
Description | Write a library that contains ft_printf(), a function that will mimic the original printf()

*You have to recode the printf() function from libc.*
- *The prototype of **ft_printf()** is:*
```c
int ft_printf(const char *, ...);
```

- Não implemente o gerenciamento de buffer do printf() original. 
- Sua função deve lidar com as seguintes conversões: cspdiuxX%
- Usar o comando **ar** para cria a biblioteca

***You have to implement the following conversions:***
- %c Prints a single character. 
- %s Prints a string (as defined by the common C convention). 
- %p The void * pointer argument has to be printed in hexadecimal format. 
- %d Prints a decimal (base 10) number. 
- %i Prints an integer in base 10. 
- %u Prints an unsigned decimal (base 10) number. 
- %x Prints a number in hexadecimal (base 16) lowercase format. 
- %X Prints a number in hexadecimal (base 16) uppercase format. 
- \%% Prints a percent sign.