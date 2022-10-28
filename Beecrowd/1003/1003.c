/**
 * Objetivo: Programa calcula soma a partir de dois input's inteiros
 * Autor: Pedro Henrique Fujinami Nishida
 * Criado em: 25 Out. 2022
*/


#include <stdio.h>
 
int main() {
    //Declaração de variáveis:
    short int a, b, soma;

    //Entrada de dados:
    scanf("%hd\n%hd",&a, &b);

    //Processamento de dados:
    soma=a+b;

    //Saída de Dados:
    printf("SOMA = %hd\n",soma);
    
    return 0;
}