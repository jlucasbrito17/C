O codigo abaixo se refere a um programa que declara um inteiro, um real e um char, e ponteiros para
inteiro, real e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
modificacao.

#include <stdio.h>
int main() {

int num = 20;
float valor= 35.50;
char letra = 't';
int *Endint = &num;
float *Endfloat = &valor;
char *Endchar = &letra;
printf("Variavel inteiro = %d \nEndereco ponteiro inteiro = %d\n\n", num, Endint);
printf("Variavel float = %.2f\nEndereco do ponteiro float = %d\n\n",valor, Endfloat);
printf("Variavel char = %c\nEndereco do ponteiro char = %d\n\n",letra, &letra);
printf("\tAPOS A MODIFICACAO:\n");

*Endint = 40;
*Endfloat = 50.50;
*Endchar = 'c';
printf("\nEndereco do ponteiro: %d\nAlterado para o valor: %d\n\n", Endint, *Endint);
printf("Endereco do ponteiro: %d\nAlterado para o valor: %f\n\n", Endfloat, *Endfloat);
printf("Endereco do ponteiro: %d\nAlterado para o caracter: %c\n\n", Endchar, *Endchar);
getch();
return 0;

}

O codigo abaixo se refere a um programa que contenha duas variaveis inteiras. Compare seus enderecos
e exiba o maior endereco.

#include <stdio.h>

main() 

{

int a = 30, b = 80;
int *EndA = &a , *EndB = &b;
printf("\tA = %d B = %d\n\n",a, b);
printf("Endereco de A = %d\nEndereco de B = %d\n",EndA, EndB);
 if(EndA > EndB) {
 if(&a > &b)
printf("\n\nEndereco %d de A e maior: \n",EndA);
//printf("\n\nEndereco %d de A e maior: \n", &a);
}

else 

{

printf("\n\nEndereco %d de B eh maior: \n",EndB);
//printf("\n\nEndereco %d de B eh maior: \n",&b);

}

 getch ();
 return 0;
 
}

O codigo abaixo se refere a um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.

#include <stdio.h>

main() 

{

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

else 

{

printf("\n\nEndereco %d de b e maior:", EndB);

}

printf("\n\n");
getch();
return 0;

}