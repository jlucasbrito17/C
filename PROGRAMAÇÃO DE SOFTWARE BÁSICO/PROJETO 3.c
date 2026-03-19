#include<stdio.h>
//#include<stdlib.h>

void printNumber(double x)
{
	printf("%Lf em notacao cientifica: %e", x, x);
}

void main()
{
	//long double numerasso;
	double numerasso;
	
	printf("Digite um numero enooooooorme: ");
	scanf("%lf", &numerasso);
	
	printNumber(numerasso);
	
	//printf("\nNumero em notacao cientifica: %Lf", numerasso);
	
}