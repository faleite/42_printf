#### Na linguagem C, os especificadores de conversão são usados ​​em conjunto com a função printf() para formatar a saída de uma string.

***Aqui está o que cada um dos especificadores de conversão significa:***

- %c: converte um valor para um caractere e o insere na string de saída.
- %s: converte um valor em uma string de caracteres e a insere na string de saída.
- %p: converte um valor em um ponteiro de memória e o insere na string de saída.
- %d: converte um valor em um número inteiro decimal com sinal e o insere na string de saída.
- %i: converte um valor em um número inteiro decimal com sinal e o insere na string de saída. (%i e %d são intercambiáveis).
- %u: converte um valor em um número inteiro decimal sem sinal e o insere na string de saída.
- %x: converte um valor em um número hexadecimal sem sinal em letras minúsculas e o insere na string de saída.
- %X: converte um valor em um número hexadecimal sem sinal em letras maiúsculas e o insere na string de saída.
- \%%: insere um caractere de porcentagem na string de saída (para imprimir um símbolo de porcentagem literal, use dois símbolos de porcentagem "\%%" na string de formato).

***Além disso, é possível especificar um campo de largura mínima para o valor de saída, um caractere de preenchimento e outros modificadores usando a sintaxe "%\[flags]\[width]\[.precision]\[length]specifier". Mas esses são recursos mais avançados que podem ser aprendidos com mais detalhes na documentação da linguagem C.***
