/**
 * Arquivo: maxHappyPrime.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022    (Editado em 27 de dez 2022)
 * Status de Teste: ERRO (PROGRAMA INCOMPLETO)
 * 
*/

#include <stdio.h>
#include <math.h>

int quantidadeAlgarismo(int numero);
int ehHappy(int numero, int algarismo);
int ehPrimo(int num);

int main(void) {
    
    int entrada;
    printf("Escolha um numero para descobrir o maximo primo feliz: ");
    scanf("%d", &entrada);

    if (entrada <=6) {
        printf("0***");
    } else {
        while(1) {
            if (ehPrimo(entrada) && ehHappy(entrada,quantidadeAlgarismo(entrada))) {
                printf("%d",entrada);
                break;
                }
            entrada -= 1;
            }
        }

    return 0;
    }

int quantidadeAlgarismo(int numero) {
    int quantidade = 1; 
    while (numero >= 9) {
        numero = numero / 10;
        quantidade += 1;
    };
    return quantidade;
}

int ehHappy(int numero, int algarismo) {
    int somatoria = 0;
    if (somatoria == 1 || somatoria == 4)
    {
        printf("Y1")
        return somatoria%4;
    }
    while (somatoria !=1 || somatoria !=4) {
        for(int i = 0; i < algarismo; i++) {
            int sucessor = pow(10,i+1), anterior = pow(10,i);

            somatoria += pow(((numero%sucessor) / anterior),2);
        }
        somatoria = ehHappy(somatoria, algarismo);
    }
}

int ehPrimo(int num) {
    int i;
    //função de força bruta
    for (i=2; i<num; i++){
        if (num%i == 0) {
            return 0;
            printf("não");
        }
    }
    printf("é");
    return 1;
}