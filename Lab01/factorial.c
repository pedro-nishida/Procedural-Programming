/*
 * Arquivo: factorial.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 9 de nov 2022
 * Status de Teste: VERIFICADO
 * 
 * Programa demosttra a fatorial de dado número
*/

#include <stdio.h>  /*possibilita o uso de funções printf e scanf*/
#include <stdint.h> /*possibilita o uso de variáveis de maior tamanho (uso de int64_t)*/

/*função recursiva da fatorial numero inteiro*/
int64_t factorial(int number) {

    int64_t result; /*variável acumulativa*/
    if (number > 1) {
        result = number * factorial(number - 1);
    }
    else {
        return 1;
    }
}

/*função principal*/
int main() {
    int number; /*variavel guarda input inteiro*/

    printf("Escolha um número maior que um, para saber sua fatorial\n"); /*mensagem para o usuário*/
    scanf("%d", &number);                                              /*pede ao usuário o input de numero inteiro*/

    printf("%d! = %ld\n", number, factorial(number)); /*saída do reusltado da fatorial pedida*/

    return 0;
}
