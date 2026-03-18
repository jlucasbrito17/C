
/* O codigo se refere a uma estrutura dados tendo como objetivo realizar um cadastro de um aluno preenchendo com nome, 
numero de matricula e o curso */

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[45];
    int matricula;
    char curso[35];
};

main() {
	
    struct Aluno alunos[5];
    int i;
    for(i = 0; i < 5; i++) {
    	
    	printf ("Inciando o Cadastro:\n");
        
		printf("\nEntre com o nome:\n");
        gets(alunos[i].nome);
        fflush(stdin);
        
        printf("Entre com a matricula:\n");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        
        printf("Entre com o curso:\n");
        gets(alunos[i].curso);
        
    }
    
    for(i = 0; i < 5; i++){
    	printf ("\n\nSuccessful Application:\n");
        printf("\nNome: %s\n",alunos[i].nome);
        printf("\nMatricula: %d\n", alunos[i].matricula);
        printf("\nCurso: %s\n", alunos[i].curso);
    }
    
   	getch();
    
    return 0;
}
