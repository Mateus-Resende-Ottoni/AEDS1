// Identificacao geral
/*

Programa0117 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0117 Programa0117.c

Para executar (Windows):
Programa0117

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0117 (void)
{
// Definir dados
int lado_1 = 0;
int lado_2 = 0;
int volume_1 = 0;
int volume_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa ira registrar o valor digitado para o lado de um cubo e entao calcular seu volume para caso possuisse um lado 5 vezes maior" );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro para o lado do cubo: " );
scanf ( "%d", &lado_1 );
getchar ();


// Calculos
lado_2 = lado_1 * 5;
volume_1 = pow (lado_1, 3);
volume_2 = pow (lado_2, 3);

// Mostrar resultados
printf ( "\nCom o lado digitado (%d), o seu quintuplo equivale a %d", lado_1, lado_2 );
printf ( "\nAssim, o volume obtido em cubo com esse lado equivale a %d", volume_2 );
printf ( "\nComparativamente, %d eh maior que o volume de um cubo com o lado original (%d) em 125 vezes\n", volume_2, volume_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0117 _ Programa v0.0" );
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
	programa_0117 ();
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