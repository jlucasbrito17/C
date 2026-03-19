#include <stdio.h>
#include <stdlib.h>

void main()
{
	char caractere;
	
	// EXEMPLO 1
	/*printf("Informe um caractere alfanumerico: ");
	caractere = getchar();
	
	printf("\nO caractere escrito e: ");
	putchar(caractere);*/
	
	// EXEMPLO 2
	printf("Escreva uma frase e encerre-a com a tecla ENTER\n\n");
	do
	{
		caractere = getchar();
		putchar(caractere);
	}while(caractere != '\n');
}