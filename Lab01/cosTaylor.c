/**
 * Arquivo: cosTaylor.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de nov 2022
 */

// !ATENÇÃO! A RESPOSTA FEITA PELO CÓDIGO VARIA CONFORME O SISTEMA OPERACIONAL//

#include <stdio.h>
#include <math.h>

//atribui valor para PI sem necessidade de compilá-lo
#define PI 3.14159265358979323846

double cosTaylor(int numero, double x);
int factorial(int number);


int main(void) {
    int numero;
    double x;

    printf("Insira o limite do coseno de Taylor: ");
    scanf("%d", &numero);

    printf("Insira o numero multiplo de pi: ");
    scanf("%lf", &x);

    printf("O coseno de Taylor resultante é: %lf \n", cosTaylor(numero, x));

    return 0;
}

double cosTaylor(int numero, double x) {
    double result = 0;
    for(int i = 0; i < numero; i++) {
        result += (pow(-1, i))* ((pow(x*PI, 2*i))/ (factorial(2*i)));
    }
    return result;
}


int factorial(int number) {

    int result; /*variável acumulativa*/
    if (number > 1) {
        result = number * factorial(number - 1);
    }
    else {
        return 1;
    }
}