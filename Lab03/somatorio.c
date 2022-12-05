/**
 * Arquivo: somatorio.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * 
 * Algoritmo que calcula em um set, a somatória de todos valores
*/

#include <stdio.h>

float soma(float * vetor, int tamanho);

int main(void) {
    int numero;

    // Mensagem para o usuárop
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
            printf("+ ");
            }
        }
    printf("= %g\n", soma(vetor, numero));
    return 0;
}

float soma(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    return s;
}