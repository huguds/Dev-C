#include<stdio.h>
#include<locale.h>
/*
Calcular a média de um aluno
*/
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite colocar acentos
	printf ("Bem vindo ao cálculo de média ! \n");
	float a, b, media; // Cria as variaveis flutuantes (decimais)
	printf ("Digite a sua primeira nota: "); // Mostra na tela
	scanf ("%f", &a); // Lê o valor e guarda na memoria
	printf ("Digite a sua segunda nota: "); // Mostra na tela 
	scanf ("%f",&b); // Lê o valor e guarda na memória
	printf ("A sua média é de: %2.1f \n",media = (a+b)/2); // Mostra na tela limitando os valores decimais
	
}
