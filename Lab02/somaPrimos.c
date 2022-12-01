/**
 * Arquivo: impares.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 26 de nov 2022
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int numero);
int store(int n_primo);

int main(void){
    int menor, maior, result = 0;

    printf("Escolha dois inteiros, sendo o segundo maior que o primeiro: ");
    scanf("%d %d", &menor, &maior);

    for (int i = menor; i <= maior; i++) {
        if (ehPrimo(i)) {
            result = result + i;
        }
    }

    printf("%d\n", store(result));

    return 0;
}

int store() {
    
}

bool ehPrimo(int numero) {

    // numero par diferente de 2 é primo
    if (numero != 2 && numero % 2 == 0) 
        return false;

    // verificação progressiva até o ponto de inflexão dos multiplos
    for(int i = 2; i < sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}
