/**
 * Objetivo: Programa calcula média ponderada de dois input's, respectivamente
 *           com peso 3.5 e 7.5
 * Autor: Pedro Henrique Fujinami Nishida
 * Criado em: 25 Out. 2022
*/
#include <stdio.h>
 
int main(){
    //Declaração de variáveis:
    float a, b;
    double media;

    //Entrada de dados:
    scanf("%f\n%f", &a, &b);

    //Processamento de dados:
    media = (a*3.5 + b*7.5)/11;
    
    //Saída
    printf("MEDIA = %.5lf\n", media);
    return 0;
}