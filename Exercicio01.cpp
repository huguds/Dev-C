#include<stdio.h>
// Coment�rios em uma unica linha
/* 
Multiplos coment�rios
*/
int main (void){ // � criado uma fun��o que inicia que retorna um void
	int a, b; // Declara as variaveis
	printf ("Digite o primeiro valor: "); // Mostra na tela
	scanf ("%d", &a); // L� as variaveis e guarda na mem�ria %d = inteiro
	printf ("Digite o segundo valor: "); // Mostra na tela %d = inteiro
	scanf("%d", &b); // L� as variaveis e guarda ne mem�ria
	printf ("O primeiro valor �: %d \n",a); // Mostra o resultado na tela pulando uma linha
	printf ("O segundo valor �: %d \n",b); // Mostra o resultado na tela pulando uma linha
}
