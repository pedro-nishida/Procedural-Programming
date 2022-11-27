/**
 * Arquivo: areaTriRec.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022
*/

#include <stdio.h>

float area(float x, float y);

int main(void) {
    float xA, yA, xB, yB;

    printf("Distância em 2 pontos em um plano\nColoque as coordenadas do primeiro ponto: ");
    scanf("%f %f", &xA, &yA);
    printf("Coloque a segunda coordenada: ");
    scanf("%f %f", &xB, &yB);

    printf("%g \n", area(xB-xA, yB-yA));

    return 0;
}

float area(float x,float y) {
    return (x*y)/2;
}