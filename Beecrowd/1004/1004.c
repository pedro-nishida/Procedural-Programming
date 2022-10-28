/**
 * Objetivo: Programa calcula a multiplicação de dois inputs tipo inteiros
 * Autor: Pedro Henrique Fujinami Nishida
 * Criado em: 25 Out. 2022
*/


#include <stdio.h>
 
int main() {
    // Declaração de variáveis
    short int prod, a, b;

    // Entrada de Dados:
    scanf("%hd\n%hd", &a, &b);
    
    // Processamento de Dados:
    prod=a*b;

    // Saída de Dados:
    printf("PROD = %hd\n", prod);
    return 0;
}