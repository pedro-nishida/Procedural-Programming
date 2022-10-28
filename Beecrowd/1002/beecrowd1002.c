/**
 * Objetivo: Programa calcula área a partir de um dado input
 * Autor: Pedro Henrique Fujinami Nishida
 * Criado em: 25 Out. 2022
*/

#include <stdio.h>
 
int main() {

    // Declaração de variáveis
    double raio, area;

    // Processamento:
    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;

    //Saída
    printf("A=%.4lf\n", area);   
 
    return 0;
}