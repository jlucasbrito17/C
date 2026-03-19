/* Incluindo bibliotecas*/

#include <stdio.h>
#include <stdlib.h>
// Header da biblioteca calclib
#include "calclib.h"


int main(int argc, char *argv[]) 
{
	int num1, num2; //declarando duas variaveis do tipo inteiro
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &num1, &num2); //lendo dois valores inteiros e guardando nas variaveis num1 e num2
	
	/*Chamando as funcoes soma e sub, que foram incluidas ao codigo pela chamada do header da biblioteca. O codigo
	da biblioteca foi compilado, gerando um arquivo objeto de sufixo .o; esse arquivo e acrescentado a esse
	projeto e podemos ter acesso as funcoes implementadas ao incluir seu header (cabecalho). Dessa forma temos
	uma bilbioteca funcionando como API, ou seja, nao temos acesso ao codigo interno, mas somente as chamadas
	de funcao.*/

	printf("A soma dos numeros e: %d\n", soma(num1, num2));
	printf("A subtracao dos numeros e: %d\n", sub(num1, num2));
	
	return 0;
}