
/*O codigo abaixo se refere a um programa que declara um inteiro, um real e um char, e ponteiros para
inteiro, real e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a 
modificacao.*/

#include <stdio.h>

int main() {

int num = 20;
float valor= 35.50;
char letra = 't';

int *Endint = &num;
float *Endfloat = &valor;
char *Endchar = &letra; 

printf("Variavel inteiro = %d \nEndereco ponteiro inteiro = %d\n\n", num, Endint);
printf("Variavel float  =  %.2f\nEndereco do ponteiro float = %d\n\n",valor, Endfloat);
printf("Variavel char  = %c\nEndereco do ponteiro  char = %d\n\n",letra, &letra);

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
