/**
 * Arquivo: diferencas.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * 
 * Algoritmo que calcula diferença com seu adjacente e mostra entre elas qual
 * o menor e maior valor
*/


#include <stdio.h>

double diferenca(double * vetor, int numero);

int main(void) {
    int numero;

    printf("Quantos elementos utilizará: ");
    scanf("%d", &numero);

    double vetor[numero];
    for (int i = 0; i < numero; i++) {
        printf("Escolha %dº tipo float: ", i + 1);
        scanf("%lf", vetor + i);
    }

    double diff[numero-1]; 
    for (int i; i < (numero - 1); i++){
        diff[i] = vetor[i+1] - vetor[i];
        printf("%g", diff[i]);

        if (!(numero-2 == i)){
                printf(", ");
            }
    
    }

    double min = diff[0], max = diff[0];
    for(int i = 0; i < (numero - 1);i++) {
        if (diff[i] > max) {
            max = diff[i];
        }
        if (diff[i] < min) {
            min = diff[i];
        }
    }

    printf(" min: %lf max: %lf \n", min, max);

    return 0;
}