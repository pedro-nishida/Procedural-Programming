
/**
 * Arquivo: procductorio.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * Status de Teste: VERIFICADO
 * 
 * Algoritmo que calcula a multiplicação de todos valores da lista
*/

#include <stdio.h>

float produto(float * vetor, int tamanho);

int main(void) {
    int numero;

    // Mensagem para o usuáro
    printf("Quantos elementos para calcular? ");
    scanf("%d", &numero); // input do usuário

    float vetor[numero]; // específico do C99

    for(int i = 0; i < numero; i++) { //    
        printf("Informe elemento %d: ", i+1);   
        scanf("%f", vetor + i);
    }

    // formato de saída
    for(int i = 0; i < numero; i++) {
        printf("%g ", vetor[i]);
        if (!(numero-1 == i)){
            printf("* ");
            }
        }
    printf("= %g\n", produto(vetor, numero));
    return 0;
}

float produto(float * vetor, int tamanho) {
    float p = 1;
    for(int i = 0; i < tamanho; i++) 
        p *= vetor[i];
    return p;
}