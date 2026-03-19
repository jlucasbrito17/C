#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *teste;
	
	fopen_s(&teste, "teste2.txt", "w");
	fclose(teste);
	
	fflush(stdout);
}