#include<stdio.h>
#include<locale.h>
/*
Calcular a m�dia de um aluno
*/
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil"); // Permite colocar acentos
	printf ("Bem vindo ao c�lculo de m�dia ! \n");
	float a, b, media; // Cria as variaveis flutuantes (decimais)
	printf ("Digite a sua primeira nota: "); // Mostra na tela
	scanf ("%f", &a); // L� o valor e guarda na memoria
	printf ("Digite a sua segunda nota: "); // Mostra na tela 
	scanf ("%f",&b); // L� o valor e guarda na mem�ria
	printf ("A sua m�dia � de: %2.1f \n",media = (a+b)/2); // Mostra na tela limitando os valores decimais
	
}
