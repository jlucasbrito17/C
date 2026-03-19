#include<stdio.h>
#include<stdlib.h>

void main()
{
	int hex;
	
	printf("Digite um numero hexadecimal: ");
	scanf("%x", &hex);
	
	printf("\nHexadecimal (maiusculo): %X", hex);
	printf("\nAnterior: %X", hex-1);
	printf("\nPosterior: %X", hex+1);
	
	printf("\n\nValores em decimal:\n\n");
	printf("%d\n%d\n%d", hex, hex-1, hex+1);
}