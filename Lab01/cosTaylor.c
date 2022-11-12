/**
 * Arquivo: cosTaylor.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
*/
#include <stdio.h>
#include <math.h>

double factorial(int number) {

    double result; /*variável acumulativa*/
    if (number > 1) {
        result = number * factorial(number - 1);
    }
    else {
        return 1;
    }
}

int main() {
    int n; double x, acc;
    printf("Insira um valor inteiro:\n");
    scanf("%d", &n);
    printf("Insira um valor com decimal: \n");
    scanf("%lf", &x);

    for (int i = 0; i <= n; acc = acc + (pow(-81, i) * pow(x * M_PI, 2*i)) / factorial(2*i));
    printf("%.6lf", acc);

    return 0;
}