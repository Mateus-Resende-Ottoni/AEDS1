// Identificacao geral
/*

Programa0112 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0112 Programa0112.c

Para executar (Windows):
Programa0112

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0112 (void)
{
// Definir dados
float lado_1 = 0.0f;
float lado_2 = 0.0f;
int area_1 = 0;
float area_2 = 0.0f;
int peri_1 = 0;
int peri_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa visa tomar um valor digitado e o usar para calcular o quadruplo e o quadrado de sua metade" );
printf ( "%s\n", "Para efeito de visualizacao, considere o valor como o lado de um quadrado, assim sera calculado a area e o perimetro do quadrado menor" );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro a ser usado no calculo: " );
scanf ( "%f", &lado_1 );
getchar ();


// Calculos
lado_2 = lado_1 / 2;
area_1 = pow (lado_1, 2);
area_2 = pow (lado_2, 2);
peri_1 = lado_1 * 4;
peri_2 = lado_2 * 4;

// Mostrar resultados
printf ( "\nCom o lado digitado (%.0f), a sua metade equivale a %.1f", lado_1, lado_2 );
printf ( "\nAssim, a area obtida a partir desse lado equivale a %.2f, e o perimetro equivale a %d", area_2, peri_2);
printf ( "\nComparativamente, %.2f eh menor que a area do lado original (%d) por 4 vezes, e %d eh menor que o perimetro original (%d) por 2 vezes\n", area_2, area_1, peri_2, peri_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}



int main ()
{
// Definir dados
int option = 0;


// Identificacao do autor
printf ( "%s\n", "\nPrograma0112 _ Programa v0.0" );
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
	programa_0112 ();
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