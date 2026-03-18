
/* O codigo esta modificando a estrutura do ALUNO do "PROJETO 5 " onde o campo endereco vai ser projetado 
em uma estrutura aninhada com os campos: CEP, endereco e numero.

2. Depois de criar a estrutura, ela vai obter as informacoes de forma completa de um aluno solicitando
as informacoes ao usuario depois imprimindo essas informacoes.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Endereco {
 	char endereco [65];
 	int numero;
 	float CEP;
 	
} Endereco;

typedef struct Aluno {
    char nome[45];
    int matricula;
    char curso[35];
    Endereco endereco1;

}Aluno;


main ()  {
	
Aluno aluno1;

printf ("Iniciando o Cadastro:\n");

printf ("\nNome Do Aluno:\n");
fgets(aluno1.nome, 45, stdin);
fflush(stdin);

printf ("\nDigite a Matricula:\n");
scanf("%d", aluno1.matricula);
fflush(stdin);

printf ("\nDigite o Curso:\n");
scanf("%c", aluno1.curso);
fflush(stdin);

printf ("\nDigite o Endereco e o Numero:\n");
scanf("%c%d", &aluno1.endereco1.endereco, &aluno1.endereco1.numero);
fflush(stdin);

printf ("\nDigite o Seu CEP:\n");
scanf("%d", aluno1.endereco1.CEP);

printf ("\n\nSuccessful Application:\n");

getch();

return 0;

}
