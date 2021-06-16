#include<stdio.h>
// Comentários em uma unica linha
/* 
Multiplos comentários
*/
int main (void){ // É criado uma função que inicia que retorna um void
	int a, b; // Declara as variaveis
	printf ("Digite o primeiro valor: "); // Mostra na tela
	scanf ("%d", &a); // Lê as variaveis e guarda na memória %d = inteiro
	printf ("Digite o segundo valor: "); // Mostra na tela %d = inteiro
	scanf("%d", &b); // Lê as variaveis e guarda ne memória
	printf ("O primeiro valor é: %d \n",a); // Mostra o resultado na tela pulando uma linha
	printf ("O segundo valor é: %d \n",b); // Mostra o resultado na tela pulando uma linha
}
