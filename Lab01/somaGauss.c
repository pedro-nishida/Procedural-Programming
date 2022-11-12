/**
 * Arquivo: somaGauss.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 3 de nov 2022
*/

#include <stdio.h>

int main() {
    // Declaração de Variáveis:
    int numero = 0, result;

    /*Input de valores para 'numero' */
    scanf("%d", &numero);

    /* Formula da Soma gausiana n(n+1)/2 */
    result = (numero * (numero + 1)) / 2; 

    //Saída de dados:
    printf("%d\n", result);

    return 0;
}