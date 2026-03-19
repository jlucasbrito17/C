#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *teste;
	
	char frase[] = "Quem sabe faz ao vivo";
	
	fopen_s(&teste, "teste3.txt", "a");
	
	fprintf(teste, "\n%s", frase);
	
	fclose(teste);
	
	fflush(stdout);
}