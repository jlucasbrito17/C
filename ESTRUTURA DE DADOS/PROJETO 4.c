
/* O codigo se refere a um programa que tem como funcao ler o nome, a idade, o endereco de uma pessoa e
armazenar os dados em uma estrutura. */

#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome [45];
	int idade;
	char endereco [65];
	int numero;

};

int main() {
	struct cadastro c;
	
	printf("Iniciando o Cadastro:\n");
	
	printf("\nInsira o Nome:\n");
	gets(c.nome);
	fflush(stdin);
	
	printf("\nInsira a Idade:\n");
	scanf("%d", &c.idade);
	fflush(stdin);
	
	printf("\nInsira o Endereco:\n");
	gets(c.endereco);
	fflush(stdin);
	
	printf("\nInsira o Numero Da Rua:\n");
	scanf("%d", &c.numero);
	fflush(stdin);
	
		
	printf("\n\nSuccessful Application\n");
	printf("\nInformacoes Cadastradas\n");
	printf("\nNome: %s", c.nome);
	printf("\nIdade: %d", c.idade);
	printf("\nEndereco: %s", c.endereco);
	printf("\nNumero: %d", c.numero);
	
	getch();
	
	return 0;	
}
