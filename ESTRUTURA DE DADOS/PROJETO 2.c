
/*O codigo abaixo se refere a um programa que contenha duas variaveis inteiras. Compare seus enderecos
e exiba o maior endereco. */

#include <stdio.h>

main() {

int a = 30, b = 80;
int *EndA = &a , *EndB = &b;

printf("\tA = %d     B = %d\n\n",a, b);

printf("Endereco de A = %d\nEndereco de B = %d\n",EndA, EndB);

if(EndA > EndB) {
if(&a > &b) 

printf("\n\nEndereco %d de A e maior: \n",EndA);

//printf("\n\nEndereco %d de A e maior: \n", &a);

}

else {

printf("\n\nEndereco %d de B eh maior: \n",EndB);

//printf("\n\nEndereco %d de B eh maior: \n",&b);

}

getch ();
return 0;

}
