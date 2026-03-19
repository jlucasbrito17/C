
/* Exemplo de uma fila de um banco */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define max 10

typedef struct estrutura1
{
 char nome[100];
} Pessoa;

typedef struct estrutura2
{
 Pessoa p;
 struct estrutura2 *prox;
} No;

//Pessoa person[max] = {"Erico", "Sekeff", "Chikin", "Rosianni", "Queiroz", "Anderson", "Laercio", "Eldelita", "Laurindo", "Evandro"};


No* cria();
No* inserir(No *a);
No* remover(No *a);
void imprimir(No *a);
void imprimir2(No *f);
void imprimir3(No *a);
No* esvaziar(No *a);

int main()
{
 Pessoa pessoa;
 No *f, *a = NULL; //frente, atrás;
 int opcao=0, existe=0;

 enum menu{CRIAR=1, INSERIR, REMOVER, IMPRIMIR, IMPRIMIR2,IMPRIMIR3, ESVAZIAR, SAIR};

 while(opcao != 8)
   {
   system("cls");
   printf("-----BEM VINDO-----\n\n\n");
   printf("Digite:\n1 - Para iniciar a fila;\n2 - Para permitir mais uma pessoa entrar na fila;\n3 - Para concluir o atendimento;\n4 - Para saber quem esta na fila;\n5 - Para saber de quem e a vez;\n6 - Para saber o ultimo a ingressar na fila;\n7 - Para utilizar o modo mais eficiente de atender as pessoas;\n8 - Para sair;\n\n\nOpcao: ");
   scanf("%d", &opcao);
   
   switch(opcao)
     {
     case CRIAR:
          if(existe == 0)
            {
            system("cls");
            f = cria();
            existe = 1;
            }
          else
            {
            system("cls");
            printf("FILA JA INICIADA!");
            getchar();
            }
          break;
          
     case INSERIR:
          if(existe == 1)
            {
            system("cls");
            a = inserir(a);
            if(f == NULL)
              f = a;
            }
          else
            {
            system("cls");
            printf("FILA NAO INCIADA!");
            //getchar();
            system("pause");
            }
          break;
          
     case REMOVER:
          if(existe == 1)
            {
            system("cls");
            if(f == NULL)
              {
              a = NULL;
              printf("FILA VAZIA!");
              //getchar();
              system("pause");
              }
            else
              {
              f = remover(a);
              }
            }
          else
            {
            system("cls");
            printf("FILA NAO INCIADA!");
            //getchar();
            system("pause");
            }
          break;
          
     case IMPRIMIR:
          if(existe == 1)
            {
            if(a == NULL)
              {
              system("cls");
              printf("FILA VAZIA!");
              //getchar();
              system("pause");
              }
            else
              {
              system("cls");
              imprimir(a);
              }
            }
          else
            {
            system("cls");
            printf("FILA NAO INCIADA!");
            //getchar();
            system("pause");
            }
          break;
          
     case IMPRIMIR2:
          if(existe == 1)
            {
            if(a == NULL)
              {
              system("cls");
              printf("FILA VAZIA!");
              //getchar();
              system("pause");
              }
            system("cls");
            imprimir2(f);
            }
          else
            {
            system("cls");
            printf("FILA NAO INCIADA!");
            //getchar();
            system("pause");
            }
          break;
          
     case IMPRIMIR3:
          if(existe == 1)
            {
            if(a == NULL)
              {
              system("cls");
              printf("FILA VAZIA!");
              //getchar();
              system("pause");
              }
            system("cls");
            imprimir3(a);
            }
          else
            {
            system("cls");
            printf("FILA NAO INCIADA!");
            //getchar();
            system("pause");
            }
          break;
          
     case ESVAZIAR:
          if(existe == 1)
            {
            system("cls");
            if(f != NULL)
              {
              a = esvaziar(a);
              f = NULL;
              }
            else
              {
              printf("FILA JA VAZIA!");
              //getchar();
              system("pause");
              }
            }
          else
            {
            system("cls");
            printf("FILA NAO INICADA!");
            system("pause");
            }
          break;
          
     case SAIR:
          system("cls");
          printf("Saindo...\n\n");
          Sleep(1000);
          printf("1\n");
          Sleep(1000);
          printf("2\n");
          Sleep(1000);
          printf("3\n");
          Sleep(1000);
          break;
          
     default:
             printf("\n\n\nOpcao invalida!!!");
             //getchar();
             system("pause");
     }
   }
 free(a);
 free(f);
}

No* cria()
{
 printf("FILA CRIADA COM SUCESSO!");
 //getchar();
 system("pause");
 return NULL;
}

No* inserir(No *a)
{
 No *novo = (No*)malloc(sizeof(No));
 if(novo == NULL)
   {
   printf("Impossivel acrescentar mais alguem na fila!");
   //getchar();
   system("pause");
   return a;
   }
 else
   {
   if(a == NULL)
     {
     //strcpy(novo->p.nome, person[flag].nome);
     //novo->p.nome = person[flag].nome;
     printf("Digite o nome do ultimo a entrar na fila: ");
     scanf(" %100[^\n]", &novo->p.nome);
     novo->prox = NULL;
     printf("%s entrou na fila!", novo->p.nome);
     //getchar();
     system("pause");
     return novo;
     }
   else
     {
     //novo->p = person[flag];
     printf("Digite o nome do ultimo a entrar na fila: ");
     scanf(" %100[^\n]", &novo->p.nome);
     novo->prox = a;
     printf("%s entrou na fila!", novo->p.nome);
     //getchar();
     system("pause");
     return novo;
     }
   }
}

No* remover(No *a)
{
 No *q, *ant;
 q = a;
 if(q->prox == NULL)
   {
   printf("%s foi atendido!\n", q->p.nome);
   //getchar();
   system("pause");
   free(q);
   return NULL;
   }
 else
   {
   do
     {
     ant = q;
     q = q->prox;
     }while(q->prox != NULL);
   
   printf("%s foi antendido!\n", q->p.nome);
   //getchar();
   system("pause");
   free(q);
   ant->prox = NULL;
   //flag--;
   return ant;
   }
}

void imprimir(No *a)
{
 Pessoa fila[max];
 int i=0, contador=0;
 No *q;
 q = a;
 while(q != NULL)
   {
   q = q->prox;
   contador++;
   }
 q = a;
 do
   {
    strcpy(fila[i].nome, q->p.nome);
    i++;
    q = q->prox;
   }while(q != NULL);
 printf("Ordem de atendimento:\n");
 for(i = contador-1; i>-1; i--)
   {
   printf("%s;\n", fila[i].nome);
   }
 //getchar();
 system("pause");
 contador = 0;
}

void imprimir2(No *f)
{
 printf("Cliente a ser atendido: %s;", f->p.nome);
 //getchar();
 system("pause");
}

void imprimir3(No *a)
{
 printf("Ultimo da fila: %s", a->p.nome);
 //getchar();
 system("pause");
}

No* esvaziar(No *a)
{
 Pessoa fila2[max];
 No *q, *r;
 int c = 0, i;
 q = a;
 do
   {
   strcpy(fila2[c].nome, q->p.nome);
   c++;
   r = q->prox;
   free(q);
   q = r;
   }while(q != NULL);
 
 printf("PILHA ESVAZIADA!");
 system("cls");
 //printf("SAIDA:\n");
 for(i=c-1;i>-1;i--)
   {
   printf("%s foi atendido!\n", fila2[i].nome);
   }
 //getchar();
 system("pause");
 //contador = 0;
 //flag = 0;
 return NULL;
}
