/*
 * Arquivo: imc.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 9 de nov 2022
 */

#include <stdio.h>

char * tabela_imc(int imc) {
    if (imc < 16) {
        return "Perigo de vida";
    }
    
    if (imc >= 16 && imc < 17) {
        return "Muito abaixo do peso";
    }
               
    if (imc >= 17 && imc < 18.5) {
        return "Abaixo do peso";
    }
      
    if (imc >= 18.5 &&  imc < 25) {
        return "Peso normal";
    }
      
    if (imc >= 25 && imc < 30) {
        return "Acima do peso";
    }
      
    if (imc >= 30 && imc < 35) {
        return "Obesidade grau I";
    }
      
    if (imc >= 35 && imc < 40) {
        return "Obesidade grau II";
    }

    if (imc >= 40) {
        return "Obesidade grau III";
    }
}


int main() {
    int peso;
    float altura, imc;

    printf("CALCULADORA DE IMC: \nInsira o peso:\n");
    scanf("%d", &peso);
    printf("Insira a altura: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%.2f (%s)\n", imc, tabela_imc(imc));
    
    return 0;
}