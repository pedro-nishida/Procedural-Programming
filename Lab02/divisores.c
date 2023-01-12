/**
 * Arquivo: divisores.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022
 * Status de Teste: VERIFICADO
 * 
 * O programa mostra todos os divisores inteiros de dado numero.
*/

#include <stdio.h>

int divisores(int n);

int main(void) {
    int input_inteiro;

    printf("Escolha um número para saber seus divisores: ");
    scanf("%d", &input_inteiro);

    for(int i = 1; i <= input_inteiro; i++ ) { 
        if (input_inteiro % i == 0) {
            printf("%d, ", i);
        }
    }
    return 0;
}
