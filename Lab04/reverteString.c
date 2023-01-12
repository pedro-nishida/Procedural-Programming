/**
 * Arquivo: reverteString.c
 * Autor: Pedro Henrique Fujinami Nishida
 * Matrícula: 12121ECP015
 * Criado em: 11 de dezembro 2022
 * Status de Teste: VERIFICADO
 * 
 * dado uma lista de characteres, o programa reverte a ordem da lista, é entregado em Uppercase.
*/

#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
long long int lengthStr(char * str);
void upperReverte(char* string, long long int length);

int main(void) {
    char string[N];
    printf("Escreva uma palavra, e seu revertido sera retornado: \n");
    getstr(string, N);
    upperReverte(string, lengthStr(string));
}

void getstr(char * str, int nchar) {
    char c; int i;
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

long long int lengthStr(char* str) {
    long long int len=0;

    while (str[len]) {
        len++;
    }
    return len;
}

void upperReverte(char* string, long long int length) { 
    char character;
    for (int i = length - 1; i >= 0; i--) {
        character = string[i];
            if (character >= 'a' && character <= 'z') {
                character -= 'a' - 'A';
            }
        printf("%c", character);
    }
}