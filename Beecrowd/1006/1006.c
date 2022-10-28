/**
 * Objetivo: Programa calcula a média ponderada de 3 inputs em peso 2, 3, 5 respectivamente
 * Autor: Pedro Henrique Fujinami Nishida
 * Criado em: 25 Out. 2022
*/

#include <stdio.h>
 
int main() {
    // Declaração de Variáveis:
    float a, b, c, media;

    // Entrada de Dados
    scanf("%f\n %f\n %f", &a, &b, &c);
    
    // Processamento de Dados
    media = (a*2 + b*3 + c*5)/10;
    
    // Saída
    printf("MEDIA = %.1f\n", media);
    return 0;
}