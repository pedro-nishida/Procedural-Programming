/**
 * Arquivo: muSigma.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * 
 * Algoritmo que calcula a média aritmética e o erro amostral dada uma lista de valores.
*/

#include <stdio.h>
#include <math.h>

float media(float * vetor, int tamanho);
float sigma(float * vetor, int tamanho);

int main(void) {
    int numero;
    
    printf("Quantos elementos irá calcular: ");
    scanf("%d", &numero);

    float vetor[numero]; // funciona apenas em C99
    for (int i = 0; i < numero; i++) {
        printf("Digite %dº numero :", i + 1);
        scanf("%f", vetor + i);
    }

    printf("média %g, desvio %g\n", media(vetor, numero), sigma(vetor, numero));

    return 0;
}

float media(float * vetor, int tamanho) {
    float m , s = 0;
    // somatória dos termos
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    
    // dividido pelo numero de elementos
    m = s / tamanho;
    return m;
}

float sigma(float * vetor, int tamanho) {
    float s = 0, m, sg;
    m = media(vetor, tamanho);
    for (int i = 0; i < tamanho; i ++){
        s += pow(vetor[i] - m, 2);
    }
    sg = pow((s / tamanho), 0.5);
    return sg;
}