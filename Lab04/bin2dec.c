/**
 * Arquivo: bin2dec.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de dezembro 2022
 * Status de Teste: VERIFICADO
 * ESSE PROGRAMA FOI FEITO EM SALA NA PRESENÇA DO PROFESSOR, SEMELHANÇAS PODERÃO SER ENCONTRADAS
 * 
 * dado um numero em binario, o programa transforma-o em decimal.
*/

#include <stdio.h>
#include <string.h>

//define o tamanho da limite da string
#define N 1024

void getbin(char * str, long long int nchar);
int bin2dec(char * msg);

int main(void) {
    char binario[N];

    printf("Entre com binario: ");  //mensagem ao usuário
    getbin(binario, N); //função guarda cada charactere do usuário em array

    //saída do programa, resultado da transformação
    printf("%s = %d\n", binario, bin2dec(binario));

    return 0;
}

int bin2dec(char * msg) {
    int num = 0;

    for(int i=strlen(msg)-1;i>=0; i--) {
        if (msg[i] == '1')
            num += 1 << i; //para a leitura de bit 1, sucessivas, soma conforme a tranformação binário em decimal.
    }
    return num;
}

void getbin(char * str, long long int nchar) {
    char c;
    long long int i; 
    for(i = 0; i < nchar && (c = getchar()) != '\n'; 
            i += (c == '0' || c == '1')? 1 : 0)

        //parte mudada de funções de outros programas, lê somente '0' e '1'
        if(c == '0' || c == '1')
            str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}