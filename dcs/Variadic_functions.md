Variadic functions são funções em C que podem receber um número variável de argumentos. Isso significa que o número de argumentos que a função recebe pode ser diferente em cada chamada.

Em C, as funções que recebem um número fixo de argumentos são definidas com uma lista de parâmetros na sua declaração, como em:

```c
int soma(int a, int b) {
    return a + b;
}
```

Nesse caso, a função "soma" recebe dois argumentos inteiros: "a" e "b".

Já as funções variadic permitem que uma quantidade variável de argumentos seja passada para a função. Por exemplo, a função "printf" da biblioteca padrão de C é uma função variadic, que permite imprimir um número variável de valores formatados para a saída padrão:

```c
int printf(const char *format, ...);
```

O primeiro argumento é uma string de formato que contém as informações de como os valores seguintes devem ser formatados, seguido de reticências ("...") que indicam que a função pode receber um número variável de argumentos.

Para acessar os argumentos variáveis dentro da função, é necessário utilizar a biblioteca padrão "stdarg.h" e suas funções para manipular listas de argumentos variáveis, como a "va_list", "va_start", "va_arg", "va_copy" e "va_end".

As funções variadic são muito úteis para lidar com situações em que o número de argumentos necessários pode variar, como por exemplo, funções que realizam cálculos matemáticos ou operações em conjuntos de dados com tamanho variável.