/**
 * Arquivo: somaSeqHailst.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 24 de nov 2022   (Editado em 27 de dez 2022)
 * 
 * Dado um número inteiro pelo usuário, o programa calcula a somatória
 *  dos valores da sequência de Hailstone: 
 *  para X de n+1, Xn/2 se X é par ou 3.Xn + 1 se X for ímpar.
*/

#include <stdio.h>

int somaSeqHail(int numero);

int main(void) {
    int int_entrada;

    printf("Escolha o número inicial para sequencia de Hailstone: "); //mensagem ao usuário
    scanf("%d", &int_entrada); //espera resposta do usuário

    printf("O resultado é %d\n",somaSeqHail(int_entrada)); //mensagem ao usuário com a resposta

    return 0;
}

int somaSeqHail(int numero) {
    int somatoria = numero;
    
    //rodar a função até o limite da somatória, quando o 'x' for 1
    while (!(numero == 1)) {

        /*formato a seguir é para otimizar a função (ao não utilizar 'if' e 'else'):
         *  se é par a primeira secção é TRUE, a segunda é FALSE
         *  se é impar a primeira secção é FALSE, a segunda é TRUE
        */
        numero = ((numero/2)*( !(numero%2))) + ((3*numero + 1)*(numero%2));
        
        //variável acumulativa para a soma dos valores:
        somatoria += numero;

    }

    //se 'x' igual a 0: encerra a função e retorna a somatória.
    return somatoria;
}