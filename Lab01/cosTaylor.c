/**
 * Arquivo: cosTaylor.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n; double x, acc;
    printf("Insira um valor inteiro e outra com decimal: \n");
    scanf("%d %lf", &n, &x);

    for (int i = 0; i <= n; acc = acc + pow(-81, i)*pow(x * M_PI, 2*i)/2i )


}