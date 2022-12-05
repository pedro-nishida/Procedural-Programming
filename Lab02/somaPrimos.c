/**
 * Arquivo: somaPrimos.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022
*/

#include <stdio.h>

int primo(int numero);
int somaAcc(int a, int b);

int main(void) {
    int primeiro, segundo;
    
    printf("Escolha dois números inteiros, sendo o segundo maior que o primeiro\n");
    
    scanf("%d %d", &primeiro, &segundo);
    somaPrimos(primeiro,segundo);
    
    return 0;
}

int primo(int num) {
    int i;
    //função de força bruta
    for (i=2; i<num; i++){
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int somaPrimos(int primeiro, int segundo) {
    int i,  soma;
    for (i = primeiro; i <= segundo; i++){
        if (primo(i)&& (i != 1)){
            soma = soma + i;
        }
    }
    printf("%d", soma);
    return 0;
}