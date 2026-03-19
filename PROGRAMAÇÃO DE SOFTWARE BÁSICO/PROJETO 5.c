#include <stdio.h>
#include <stdlib.h>

void main()
{
	char frase[30];
	
	printf("Digite uma frase. Aperte ENTER para finalizar.\n\n");
	
	//gets(frase);
	fgets(frase, sizeof(frase), stdin);
	
	//puts(frase);
	fputs(frase, stdout);
}