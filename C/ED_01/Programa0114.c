// Identificacao geral
/*

Programa0114 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0114 Programa0114.c

Para executar (Windows):
Programa0114

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0114 (void)
{
// Definir dados
float lado_11 = 0.0f;
float lado_12 = 0.0f;
float lado_21 = 0.0f;
float lado_22 = 0.0f;
int area_1 = 0;
float area_2 = 0.0f;
int peri_1 = 0;
float peri_2 = 0.0f;


// Apresentacao
printf ( "\n%s\n", "Conceba um retangulo e os seus lados." );
printf ( "%s\n", "Esse programa ira calcular a area e o perimetro de um retangulo cujos lados forem um quarto dos valores fornecidos." );


// Ler input
printf ( "\n%s\n", "Determine um valor inteiro para um dos lados: " );
scanf ( "%f", &lado_11 );
getchar ();
printf ( "\n%s\n", "Digite um valor inteiro para o outro lado: " );
scanf ( "%f", &lado_12 );
getchar ();


// Calculos
lado_21 = lado_11 / 4;
lado_22 = lado_12 / 4;
area_1 = lado_11 * lado_12;
area_2 = lado_21 * lado_22;
peri_1 = (lado_11 * 2) + (lado_12 * 2);
peri_2 = (lado_21 * 2) + (lado_22 * 2);

// Mostrar resultados
printf ( "\nCom os lados digitado (%.0f, %.0f), os seus quartos equivalem a %.2f e %.2f", lado_11, lado_12, lado_21, lado_22 );
printf ( "\nAssim, a area obtida a partir desses lados equivale a %.4f, e o perimetro equivale a %.2f", area_2, peri_2);
printf ( "\nComparativamente, %.4f eh menor que a area do lado original (%d) por 16 vezes, e %.2f eh menor que o perimetro original (%d) por 4 vezes\n", area_2, area_1, peri_2, peri_1);

// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{

int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0114 _ Programa v0.0" );
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
	programa_0114 ();
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