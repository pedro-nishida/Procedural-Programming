/**
 * Arquivo: contaVogais.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de dezembro 2022
 * Status de Teste: VERIFICADO
 * 
 * dado uma lista de characteres, o programa conta as vogais presentes.
*/

#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
int vowel_count(char * str);

int main(void) {
    char s[N];
    printf("Digite uma palavra: \n");
    getstr(s, N);
    printf("%d\n", vowel_count(s));

    return 0;
}

void getstr(char * str, int nchar) {
    char c;int i;
    for(int i = 0;i < nchar;i++){
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        }
        else {
            break;
        }
    }
    if (i == nchar) {
        str[nchar - 1] = '\0';
        while ((c = getchar()) != '\n' && c != EOF); //limpar buffer teclado
    }
}

int vowel_count(char * str) {
    int i = 0;int count = 0;
    while (str[i]) {
        // se possui vogal em lower ou upper case:
        if (str[i] == 'A' || str[i] == 'a' || 
        str[i] == 'E' || str[i] == 'e' || 
        str[i] == 'I' || str[i] == 'i' || 
        str[i] == 'O' || str[i] == 'o' ||
        str[i] == 'U' || str[i] == 'u') {
            count += 1;
        }
        i++;
    }
    return count;
}