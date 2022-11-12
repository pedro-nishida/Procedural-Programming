/*
 * Arquivo: fibonacci.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
 */

#include <stdio.h>

int main() {
    int numberInput; 

    printf("Insira um número:\n");
    scanf("%d", &numberInput);

    /*Expressão Fibonacci descrita dentro do loop até o termo-input colocado*/
    /* Fn-1 = j,  Fn-2 = i, Fn = t */                                    
    for(int j = 1, i = 0 , t = 0, k;  k < numberInput;  t = i + j, i = j, j = t, ++k) printf("%d, ", i);
    printf("...");

    return 0;
}