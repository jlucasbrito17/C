
/* Exemplo de um codigo de comanda e servico */

#include <stdio.h>
#include <stdlib.h>
	
typedef struct {
	char descricao[35];
	int cod;
	float valor;
	struct Produto *proximo;
} Produto;


typedef struct {
	int cod;
	Produto produtos [100];
	struct Comanda *proximo;
} Comanda;


int menuAdmin();
Produto* criarListaProduto();

int main(){ 
	
	Comanda *ini_fila, *fim_fila; //ponteiros para uma fila de comandas
	Produto *ini_produto, *fim_produto; //ponteiro para uma lista de produtos
	int adminOp;
	
	adminOp = menuAdmin();
	
	if(adminOp == 1)
	{
		ini_produto = criarListaProduto();
		
		printf("\n\n");
		printf("Descricao do produto: %s;\n", ini_produto->descricao);
		printf("Codigo do produto: %d;\n", ini_produto->cod);
		printf("Preco do produto: %f.\n", ini_produto->valor);
		if(ini_produto->proximo == NULL)
			printf("A lista so tem um elemento");
		else
			puts("A lista tem mais produtos!");
		
		/* TODO
			- Menu dos produtos
				+ Criar lista de produtos
				+ Adicionar produto
				+ Remover produto
				+ Editar produto*/
	}
}

int menuAdmin()
{
	int opcao;
	printf("================================\n");
	printf("|     Delivery e Cia           |\n");
	printf("|------------------------------|\n");
	printf("|            ADMIN             |\n");
	printf("|------------------------------|\n");
	printf("| 1 - Criar lista de produtos  |\n");
	printf("| 2 - Iniciar fila de comandas |\n");
	printf("================================\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	
	return opcao;
}

Produto* criarListaProduto()
{
	Produto *novo = (Produto *)malloc(sizeof(Produto));
	
	printf("Digite a descricao do produto: ");
	scanf("%s", &novo->descricao);
	//fgets(novo->descricao, sizeof(novo->descricao), stdin);
	//gets(novo->descricao);
	
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &novo->cod);
	
	printf("\nDigite o valor do produto: ");
	scanf("%f", &novo->valor);
	
	novo->proximo = NULL;
	
	return novo;
}
