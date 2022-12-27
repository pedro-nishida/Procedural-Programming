/**
 * Arquivo: aritmInt.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 3 de nov 2022
*/

//Importação de funções entrada e saída
#include <stdio.h>

int main() {

    //Declaração de variaáveis
    int primeiroInt, segundoInt;

    //Pede usuário escrever 2 inteiros para input
    printf("Insira dois numeros inteiro: \n");
    scanf("%d %d", &primeiroInt, &segundoInt);

    //Saída de Dados:
    //imprime ao usuário a soma dos numeros
    printf("%d+%d = %d,  ", primeiroInt, segundoInt, primeiroInt+segundoInt);

    //imprime ao usuário a subtração dos numeros
    printf("%d-%d = %d,  ", primeiroInt, segundoInt,  primeiroInt-segundoInt);
    
    //imprime ao usuário o produto dos numeros
    printf("%d*%d = %d,  ", primeiroInt, segundoInt,  primeiroInt*segundoInt);
    
    //imprime ao usuário a divisão inteira dos numeros
    printf("%d/%d = %d,  ", primeiroInt, segundoInt,  primeiroInt/segundoInt);
    
    //imprime o resto da divisão dos numeros
    printf("%d%%%d = %d,  ", primeiroInt, segundoInt,  primeiroInt%segundoInt);
    
    return 0;
}
