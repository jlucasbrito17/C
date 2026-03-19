
/* Exemplo de uma lista duplamente encadeada */

#include<stdio.h>
#include<stdlib.h>


//estrutura da composicao de cada posicao da lista
typedef struct{ 
  int num;
} TItem;

//definição do nó da lista
typedef struct lista{
  TItem info;
  struct lista *prox; //ponteiro para uma próxima estrutura do mesmo tipo
  struct lista *ant; //ponteiro para uma estrutura anterior do mesmo tipo
} TLista; //tipo Lista


int menu();
TLista* cria(void);
int vazia (TLista* l);
TLista* insere_final(TLista* l, TItem i);
void imprime(TLista* l);
void busca(TLista* l, TItem i);
TLista* remover(TLista* l, TItem i);
int tamanho(TLista* l);

int main(){
   //defino uma variavel e ponteiro para lista   
   TLista *l;  

   TItem elemento;
   int p; //auxiliar
   TLista *b=NULL; //auxiliar
   int op, existe=0; //auxiliar
   
   enum{SAIR, CRIAR, VAZIA, INSERIRFINAL, IMPRIME, BUSCA, REMOVE, TAMANHO};
   
   for(;;){
     op = menu();
     
     switch(op){
        case CRIAR:
             system("cls");
             if(existe==0){
               l = cria();
               printf("LISTA CRIADA");
               system("pause");;
             }
             else{
               printf("JA EXISTE LISTA CRIADA");
               system("pause");;
             }
             existe = 1;
             system("cls");
             break;
        
        case VAZIA:
             system("cls");
             if(existe == 1){
               if(vazia(l))
                 printf("A Lista esta vazia!");
               else
                 printf("A Lista contem registros!");
               system("pause");;
             }else{
               printf("A LISTA NAO FOI CRIADA!!");
               system("pause");;
             }
             system("cls");  
             break;
             
        case INSERIRFINAL:
             system("cls");
             if(existe == 1){
               printf("Digite um valor: ");
               scanf("%d", &elemento.num);
               l = insere_final(l, elemento);
               if(b==NULL)
                          b = l;
             }else{
               printf("A LISTA NAO FOI CRIADA!!");
               system("pause");;
             }
             system("cls");  
             break;
        
        case IMPRIME:
             system("cls");
             if(existe == 1){
               imprime(b);
             }else{
               printf("A LISTA NAO FOI CRIADA!!");
               system("pause");;
             }
             system("cls");  
             break;
        
        case BUSCA:
             system("cls");
             if(existe == 1){
               printf("Digite o valor buscado: ");
               scanf("%d", &elemento.num);
               busca(b, elemento);
             }
             system("cls");  
             break;
        
        case REMOVE:
             system("cls");
             if(existe == 1){
               printf("Digite o valor a ser removido: ");
               scanf("%d", &elemento.num);
               l=remover(l,elemento);
             }else{
               printf("A LISTA NAO FOI CRIADA!!");
               system("pause");;
             }
             system("cls");  
             break;
        
        case TAMANHO:
             system("cls");
             if(existe == 1){
               printf("Tamanho da lista = %d", tamanho(b));
               system("pause");;
             }else{
               printf("A LISTA NAO FOI CRIADA!!");
               system("pause");;
             }
             system("cls");  
             break;
        
        case SAIR:
             printf("\n\n\n----FIM DO PROGRAMA----");
             system("pause");;
             exit(1);
             break;
        default:
             printf("Opcao Invalida!!");
             system("pause");;
             system("cls");
             break;
     }
   }
   
   system("pause");;
}

//funcao menu
int menu(){
   int op;
   printf("1- Criar Lista Encadeada\n");
   printf("2- Lista Vazia\n");
   printf("3- Inserir Elemento no final da Lista\n");
   printf("4- Imprimir Lista\n");
   printf("5- Buscar Elemento na Lista\n");
   printf("6- Remover Elemento da Lista\n");
   printf("7- Tamanho da Lista\n");
   printf("0- Sair\n\n");
   printf("Digite sua opcao: ");
   scanf("%d", &op);
   return op;
}

//função de inicialização: retorna uma lista vazia
TLista* cria(void){
  return NULL;
}

//função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (TLista* l){
  if (l == NULL)
    return 1;
  else
    return 0;
}

//função de inserção no início: retorna a lista atualizada
TLista* insere_final(TLista* l, TItem i){
  TLista* novo = (TLista*) malloc(sizeof(TLista));
  if(novo == NULL){
    printf("Não foi possível alocar espaço!!");
    system("pause");;
    return l;
  }
  else{
       if(l==NULL){
                   novo->info=i;
                   novo->prox=NULL;
                   novo->ant=NULL;
                   printf("Inserido com sucesso!!!");
                   system("pause");;
                   return novo;
                   }
       else{
            l->prox = novo;                           
            novo->info = i;
            novo->ant = l;
            novo->prox = NULL;
            printf("Inserido com sucesso!!!");
            system("pause");;
            return novo;
            }
       }
}

//função imprime: imprime valores dos elementos
void imprime (TLista* l){
  TLista* p; //variável auxiliar para percorrer a lista
  for (p = l; p != NULL; p=p->prox)
    printf("info = %d\n", p->info.num);
  system("pause");;
}

//função busca: busca um elemento na lista
void busca(TLista* l, TItem i){
  TLista* p;
  int flag=0;
  for (p=l; p!=NULL; p=p->prox)
    if(p->info.num == i.num){
      flag=1;
      printf("ACHEI O VALOR: %d\n",p->info.num);
      if(p->prox != NULL)
        printf("VALOR PROXIMO: %d\n",p->prox->info.num);
      else
        printf("NAO POSSUI VALOR PROXIMO!!\n");
      if(p->ant != NULL)
        printf("VALOR ANTERIOR: %d\n",p->ant->info.num);
      else
        printf("NAO POSSUI VALOR ANTERIOR!!\n");
      system("pause");;
    }
  if(flag==0){
      printf("NAO ACHEI ESTE VALOR!!");
      system("pause");;
  }
}

//função remove elemento: retira elemento da lista
TLista* remover(TLista* l, TItem i){
  TLista* p = l; //ponteiro para percorrer a lista
  
  //procura elemento na lista, guardando anterior
  while (p != NULL && p->info.num != i.num){
    p = p->prox;
  }
  if (p == NULL){
    printf("Nao achei Elemento!!");
    system("pause");;
    return l; //não achou elemento
  }
  
  //retira elemento
  if (l == p)
    l = p->prox; //retira elemento do inicio
  else
    p->ant->prox = p->prox;
  
  printf("Elemento Removido com sucesso!!");
  system("pause");;
  if (p->prox != NULL)
    p->prox->ant = p->ant;
  free(p);
  return l;
}

//funcao que retorna o tamanho da lista
int tamanho(TLista* l){
  TLista* p = l;
  int n = 0;
  while (p != NULL) {
    p = p->prox;
    n++;
  }
  return n;
}
