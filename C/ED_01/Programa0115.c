// Identificacao geral
/*

Programa0115 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0115 Programa0115.c

Para executar (Windows):
Programa0115

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0115 (void)
{
// Definir dados
int base = 0;
int altura_1 = 0;
int altura_2 = 0;
float area_1 = 0.0f;
float area_2 = 0.0f;


// Apresentacao
printf ( "\n%s\n", "Escolha dois valores para representar a base e a altura de um triangulo" );
printf ( "%s\n", "Sera entao calculado a area de um triangulo cuja base for a mesma, mas a altura equivale ao dobro da escolhida" );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro para a base: " );
scanf ( "%d", &base );
getchar ();
printf ( "\n%s\n", "Digite um valor inteiro para a altura: " );
scanf ( "%d", &altura_1 );
getchar ();

// Calculos
altura_2 = altura_1 * 2;
area_1 = (base * altura_1) / 2;
area_2 = (base * altura_2) / 2;

// Mostrar resultados
printf ( "\nCom a altura digitada (%d), o seu dobro equivale a %d", altura_1, altura_2 );
printf ( "\nAssim, a area obtida equivale a %0.1f", area_2 );
printf ( "\nComparativamente, %0.1f eh maior que a area do lado original (%0.1f) por 2 vezes\n", area_2, area_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0115 _ Programa v0.0" );
printf ( "%s\n", "Autor: Mateus Resende Ottoni" );
printf ( "\n" );


do
{
// Mostrar opcoes
printf ( "%s\n", "0 - Terminar o programa" );
printf ( "%s\n", "1 - Iniciar o programa " );


printf ( "\n%s\n", "Digite sua opcao" );
scanf ( "%d", &option );


switch (option)
{
case 0:
	break;

case 1:
	programa_0115 ();
	break;

default:
	printf ( "\n%s\n", "Opcao nao reconhecida");
	break;
}

}
while ( option != 0);


// Encerramento do programa
printf ( "\n%s\n", "Encerramento do programa escolhido" );
printf ( "%s\n", "Pressione ENTER para terminar o programa" );
getchar ();


return (0);
}