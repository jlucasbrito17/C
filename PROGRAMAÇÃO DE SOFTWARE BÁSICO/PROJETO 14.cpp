
/* Exemplo de um menu de uma lanchonete */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* Declaração das variaveis de forma global*/
int codprod, op, op2, qtd, qtdref;
char *descricao, *descrrefre;
float valor, valortotal, valorrefre,totalGeral;
 
void MenuCliente() {
	
	printf("======================================\n");
	printf("|          Delivery e Cia             |\n");
	printf("|-------------------------------------|\n");
	printf("|  1- Fazer Pedido | 2 - Alt. Pedido  |\n");
	printf("|-------------------------------------|\n");
	printf("|  3-Consultar     | 4 -   Voltar     |\n");
	printf("|=====================================|\n");
	printf("Selecione a opção desejada ou 5 para sair \n");
	scanf("%d",&op2);
	system("cls");
}


void Cardapio() {
	
	printf(" =====================================|\n");
	printf("|  ESCOLHA O LANCHE QUE VOCE DESEJA   |\n");
	printf("|-------------------------------------|\n");
	printf("|  Codigo  |   Descricao      | Valor |\n");
	printf("|-------------------------------------|\n");
	printf("|    1     |Sanduiche Natural | 7.00  |\n");
	printf("|-------------------------------------|\n");
	printf("|    2     |    Nachos       | 7.50   |\n");
	printf("|-------------------------------------|\n");
	printf("|    3     |   Mini Pizza    | 5.00   |\n");
	printf("|-------------------------------------|\n");
	printf("|    4     |    Coxinha      | 4.50   |\n");
	printf("|-------------------------------------|\n");
	printf("|    5     |  Coca-Cola lata | 2.50   |\n");
	printf("|=====================================|\n");
	
	printf("Informe o codigo do produto \n");
	scanf("%d",&codprod);	
	switch(codprod){
		case 1:{
			   descricao="Sanduiche Natural";
			 valor = 7.00;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd); 
			break;
		}
		case 2:{
			   descricao="Nachos ";
			 valor = 7.50;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd);
			break;
		}
		case 3:{
			   descricao="Mini Pizza ";
			 valor = 5.00;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtd);
			break;
		}
		case 4:{
			  descrrefre=" Coxinha ";
			 valorrefre = 4.50;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtdref);
			break;
		}
		case 5:{
			 descrrefre="Coca Cola Lata";
			 valorrefre = 5.00;
			 printf("informe a quantidade \n");
			 scanf("%d",&qtdref);
			break;
		}
		
		
}
