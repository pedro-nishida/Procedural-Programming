/**
 * Arquivo: impares.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022
 * Staus de Teste: VERIFICADO
 * 
 * O programa mostra os numeros impares existentes no intervalo de dados dois numeros inteiros.
*/

#include <stdio.h>

int main(void) {
    int maior, menor, i;

    printf("Escolha um número e outro numero maior: ");
    scanf("%d %d", &menor, &maior);

    for( (menor % 2 !=0)? (i = menor) : (i = menor + 1); i <= maior; i=i+2) {
        printf("%d ", i);
    }
    return 0;
}