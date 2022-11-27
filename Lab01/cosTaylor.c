/**
 * Arquivo: cosTaylor.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double factorial(int number)
{

    double result; /*variável acumulativa*/
    if (number > 1)
    {
        result = number * factorial(number - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    double x, acc;
    printf("Insira um valor inteiro:\n");
    scanf("%d", &n);
    printf("Insira um valor com decimal: \n");
    scanf("%lf", &x);

    for (int i = 0; i <= n; acc = acc + (pow(-1, i) * (pow(x * PI, 2 * i) / factorial(2 * i))), i++)
        ;
    printf("%.6lf\n", acc);

    return 0;
}