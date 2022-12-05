
/**
 * Arquivo: remNegativos.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * 
 * Algoritmo que separa quais da lista são inteiros positivos
*/

#include <stdio.h>

int contagem(int positivo, int * lista_positivo);

int main(void) {

    int numero, quantidade_positiva = 0;

    printf("Quantos elementos utilizará: ");
    scanf("%d", &numero);

    int vetor[numero];
    for (int i = 0; i < numero; i++){
        printf("Selecione %dº numero, posivo ou negativo: ", i + 1);
        scanf("%d", vetor + i);
        if (vetor[i] > 0) {
            quantidade_positiva += 1;
        }
    }

    int lista_positivos[quantidade_positiva], contador = 0;
    for (int i = 0; i < numero; i++) {
        if (vetor[i] > 0) {
            lista_positivos[contador] = vetor[i];
            contador += 1;
        }
    }

    contagem(quantidade_positiva, lista_positivos);

    return 0;
}

int contagem(int positivo, int * lista_positivo){

    if (positivo > 0) {
        for (int i = 0; i < positivo; i++) {
            printf("%d", lista_positivo[i]);
            if (!(positivo-1 == i)){
                printf(", ");
            }
        }
    }
    else {
        printf("vazio");
    }
    printf("\n");
}


