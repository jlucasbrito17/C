#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *teste;
	
	char estringue[] = "String de teste";
	
	fopen_s(&teste, "teste3.txt", "w");
	
	fprintf(teste, "%s", estringue);
	
	fclose(teste);
	
	fflush(stdout);
}