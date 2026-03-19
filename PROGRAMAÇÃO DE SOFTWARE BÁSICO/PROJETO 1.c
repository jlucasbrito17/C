
/* Abertura de Arquivo*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *teste;
	
	teste = fopen("teste.txt", "a");
	fclose(teste);
	
	fflush(stdout);
}