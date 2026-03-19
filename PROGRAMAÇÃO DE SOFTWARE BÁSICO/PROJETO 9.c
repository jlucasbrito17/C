#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *teste;
	
	char frase[50];
	
	fopen_s(&teste, "teste3.txt", "r");
	
	fgets(frase, sizeof(frase), teste);
	
	puts(frase);
	
	fclose(teste);
	
	fflush(stdout);
}