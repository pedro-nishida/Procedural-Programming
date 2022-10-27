/*
 * Arquivo: base.c
 * Data de criação: 2/out/2022
 * Autor: Pedro Henrique Fujinami Nishida
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
	for (int i=0; i< argc; i++)
		printf("%s\n", argv[i]);
	printf("Bom dia filho da puta!\n");

	return EXIT_SUCCESS;
}

