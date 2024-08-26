// Identificacao geral
/*

Programa0119 - v0.0
Data de modificacao da versao: 02/03/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0119 Programa0119.c

Para executar (Windows):
Programa0119

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0119 (void)
{
// Definir dados
float raio_1 = 0;
float raio_2 = 0;
float area_1 = 0;
float area_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa visa tomar um valor digitado e o usar como o raio de um circulo." );
printf ( "%s\n", "A partir desse, entao se calculara (aproximado a 6 casas decimais) a area de um semicirculo com um sexto desse raio." );


// Ler input
printf ( "\n%s\n", "Digite um valor para o raio: " );
scanf ( "%f", &raio_1 );
getchar ();


// Calculos
raio_2 = raio_1 / 6;
area_1 = raio_1 * raio_1 * M_PI;
area_2 = raio_2 * raio_2 * M_PI;


// Mostrar resultados
printf ( "\nCom o raio digitado (%.0f), o seu sexto equivale a %f", raio_1, raio_2 );
printf ( "\nAssim, a area desse semicirculo equivale a %f", area_2 );
printf ( "\nComparativamente, %f eh menor que a area do circulo original (%f) por 72 vezes\n", area_2, area_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0119 _ Programa v0.0" );
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
	programa_0119 ();
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