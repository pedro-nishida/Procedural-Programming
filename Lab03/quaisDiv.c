
/**
 * Arquivo: quaisDiv.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 4 de dez 2022
 * Status de Teste: ERRO
 * 
 * Algoritmo que mostra qual dos numeros da lista são divisores do valor final escolhido
*/

#include <stdio.h>

void identificaDivisores(int * vetor, int tamanho, int referencia);

int main(void) {
    int numeroInput, referencia; 

    printf("Quantos elementos? ");
    scanf("%d", &numeroInput);

    int vetor[numeroInput]; // C99 apenas!! VARIABLE LENGTH ARRAY
    for(int i = 0; i < numeroInput; i++) {
        printf("Informe o %dº elemento: ",i+1);
        scanf("%d", vetor + i);
    }
    printf("Escolha o número de referência: ");
    scanf("%d", &referencia);

    identificaDivisores(vetor, numeroInput, referencia);


    return 0;
}

void identificaDivisores(int * vetor, int tamanho, int referencia) {


    for(int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (referencia % vetor[i] == 0);
            printf("#");

        printf(" ");
    }
    printf("\n");
}