// Identificacao geral
/*

Programa0113 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0113 Programa0113.c

Para executar (Windows):
Programa0113

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0113 (void)
{
// Definir dados
int lado_11 = 0;
int lado_12 = 0;
int area_1 = 0;
int area_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa, a partir de dois lados de um retangulo que sao fornecidos pelo usuario, calcula o sextuplo de sua area" );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro a ser usado no calculo: " );
scanf ( "%d", &lado_11 );
getchar ();
printf ( "%s\n", "Digite outro valor inteiro: " );
scanf ( "%d", &lado_12 );
getchar ();


// Calculos
area_1 = lado_11 * lado_12;
area_2 = area_1 * 6;

// Mostrar resultados
printf ( "\nCom os lados digitados (%d,%d), a area do retangulo equivale a %d", lado_11, lado_12, area_1);
printf ( "\nAssim, o sextuplo dessa area equivale a %d\n", area_2 );


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0113 _ Programa v0.0" );
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
	programa_0113 ();
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