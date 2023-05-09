Na linguagem C, as funções variáveis ​​são funções que recebem um número variável de argumentos. Para lidar com esses argumentos, a linguagem C fornece um conjunto de macros que podem ser usados em conjunto com a biblioteca stdarg.h. As principais macros são va_start(), va_arg(), va_copy() e va_end(), que são explicadas a seguir:

Leia sobre: [[va_list]]

- va_start(): é usada para iniciar uma lista de argumentos variáveis. Ela recebe dois argumentos: um ponteiro para o último argumento fixo e um nome de argumento. A partir desse ponto, a função pode acessar a lista de argumentos variáveis usando a macro va_arg(). Exemplo: 
```c
void my_printf(char* fmt, ...) {
    va_list argptr;
    va_start(argptr, fmt);
    // ...
}
```

- va_arg(): é usada para obter o próximo argumento da lista. Ele recebe dois argumentos: um tipo de dados e um ponteiro para a lista de argumentos variáveis. A macro retorna o próximo argumento da lista com o tipo especificado. Exemplo:
```c
void my_printf(char* fmt, ...) {
    va_list argptr;
    va_start(argptr, fmt);
    int ival = va_arg(argptr, int);
    // ...
}
```

- va_copy(): é usada para copiar uma lista de argumentos variáveis para outra variável. Ela recebe dois argumentos: um ponteiro para a variável de destino e um ponteiro para a variável de origem. Exemplo:
```c
void my_printf(char* fmt, ...) {
    va_list argptr, copy;
    va_start(argptr, fmt);
    va_copy(copy, argptr);
    // ...
}
```

- va_end(): é usada para limpar a lista de argumentos variáveis. Ela recebe um ponteiro para a lista de argumentos variáveis e deve ser chamada no final da função. Exemplo:
```c
void my_printf(char* fmt, ...) {
    va_list argptr;
    va_start(argptr, fmt);
    // ...
    va_end(argptr);
}
```

Essas macros permitem que as funções variáveis ​​trabalhem com um número variável de argumentos, o que é útil em muitos casos, como em funções como printf() e scanf(). É importante lembrar de chamar va_end() no final da função para evitar vazamentos de memória.

---


