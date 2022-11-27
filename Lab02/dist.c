/**
 * Arquivo: dist.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022
*/

#include <stdio.h>
#include <math.h>

float distance(float x , float y);

int main(void) {
    float xA, yA, xB, yB;

    printf("Distância em 2 pontos em um plano\nColoque as coordenadas do primeiro ponto: ");
    scanf("%f %f", &xA, &yA);
    printf("Coloque a segunda coordenada: ");
    scanf("%f %f", &xB, &yB);

    printf("%g\n", distance(xA - xB, yA - yB));
    return 0;
}

float distance(float x , float y) {
    return sqrt(pow( x, 2) + pow( y, 2));
}