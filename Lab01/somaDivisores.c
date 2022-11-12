/**
 * Arquivo: somaDivisores.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
*/
#include <stdio.h>

int somaDivisores(numero) {
    int i = 0, acc = 0;

    for (i = 0; i < numero; ++i) {
        if (numero % i == 0) {
            acc = acc + i;
        }
    }

    return acc;
}

int main() {
    int numero;
    
    printf("Insira um número: ");
    scanf("%d\n", &numero);

    printf("%d", somaDivisores(numero));
}