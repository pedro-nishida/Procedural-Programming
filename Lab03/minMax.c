
/**
 * Arquivo: minMax.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 1 de dez 2022
 * Status de teste: VERIFICADO
 * 
 * Em uma lista de numeros, o algoritmo mostra qual delas é o menor e o maior.
*/


#include <stdio.h>

void identifica_Min_Max(int * vetor, int tamanho);

int main(void) {
    int entrada;

    printf("Quantos elementos? \n");
    scanf("%d", &entrada);

    int vetor[entrada];
    for(int i = 0;i < entrada;i++) {
        printf("insira o %do elemento: ", i + 1);
        scanf("%d", vetor + i);
    }

    identifica_Min_Max(vetor, entrada);

    return 0;
}

void identifica_Min_Max(int * vetor, int tamanho){

    int min = vetor[0], max = vetor[0];
    for(int i = 0; i < tamanho;i++) {
        if (vetor[i] > max) {
            max = vetor[i];
        }
        if (vetor[i] < min) {
            min = vetor[i];
        }
    }

    for(int i = 0; i < tamanho; i++) {
        if (vetor[i] == max) {
            printf("%d> ", max);
        }
        if (vetor[i] == min) {
            printf("%d< ", min);
        }
        if (vetor[i] != max && vetor[i] != min)
        {
            printf("%d ", vetor[i]);
        }
    }
}