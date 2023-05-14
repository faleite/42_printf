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
  - Na função `printf`, as flags `%X` e `%x` são usadas para formatar a saída de valores hexadecimais. Ambas as flags imprimirão o valor hexadecimal sem o prefixo "0x". 
  - A única diferença entre as flags `%X` e `%x` é que `%X` imprimirá as letras maiúsculas de A a F, enquanto `%x` imprimirá letras minúsculas de a a f. 
  - Já a flag `%p` é usada para imprimir um ponteiro na saída. O valor impresso será o endereço de memória para o qual o ponteiro aponta, na forma de um valor hexadecimal com o prefixo "0x". 
  - Portanto, a diferença entre as flags `%X` e `%x` em relação à flag `%p` é que as primeiras não imprimirão o prefixo "0x", enquanto a última imprimirá.
  - Não há uma regra definida para determinar se as letras serão impressas em maiúsculas ou minúsculas ao utilizar a flag `%p`. Isso dependerá do ambiente em que o código está sendo executado. 
- %d Prints a decimal (base 10) number. 
- %i Prints an integer in base 10. 
- %u Prints an unsigned decimal (base 10) number. 
- %x Prints a number in hexadecimal (base 16) lowercase format. 
- %X Prints a number in hexadecimal (base 16) uppercase format.
  - [Convert decimal to hexadecimal](https://www.rapidtables.org/pt/convert/number/decimal-to-hex.html) 
- \%% Prints a percent sign.

Info | Comando
----|--------
*Limites de variaveis*| **man limits.h**


