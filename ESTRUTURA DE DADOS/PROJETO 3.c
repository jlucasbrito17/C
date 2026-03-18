
/* O codigo abaixo se refere a um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco. */

#include <stdio.h>

int main() {

int a, b;

printf("\tDigite o valor de a: ");
scanf("%d",&a);

printf("\n\tDigite o valor b: ");
scanf("%d",&b);

printf("\nValor de a = %i\nValor de b = %i\n\n",a, b);

int *EndA = &a, *EndB = &b;

printf("Endereco de a = %i\nEndereco de b = %i\n\n",EndA, EndB);

if(EndA > EndB) {

printf("\n\nEndereco %d de a e maior:",EndA);

}

else {

printf("\n\nEndereco %d de b e maior:", EndB);

}

printf("\n\n");

getch();

return 0;

}
