// Identificacao geral
/*

Programa0120 - v0.0
Data de modificacao da versao: 02/03/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0120 Programa0120.c

Para executar (Windows):
Programa0120

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0120 (void)
{
// Definir dados
float raio_1 = 0;
float raio_2 = 0;
float volume_1 = 0;
float volume_2 = 0;


// Apresentacao
printf ( "\n%s\n", "Esse programa visa tomar um valor digitado e o usar como o raio de uma esfera." );
printf ( "%s\n", "A partir desse, entao se calculara (aproximado a 6 casas decimais) o volume de uma esfera com 3/4 desse raio." );


// Ler input
printf ( "\n%s\n", "Digite um valor para o raio: " );
scanf ( "%f", &raio_1 );
getchar ();


// Calculos
raio_2 = raio_1 * 3 /4;
volume_1 = pow (raio_1, 3) * M_PI * 3 / 4;
volume_2 = pow (raio_2, 3) * M_PI * 3 / 4;


// Mostrar resultados
printf ( "\nCom o raio digitado (%.0f), 3/4 dele equivale a %.2f", raio_1, raio_2 );
printf ( "\nAssim, o volume dessa esfera equivale a %f", volume_2 );
printf ( "\nComparativamente, %f equivale a 27/64 do volume da esfera original (%f)\n", volume_2, volume_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0120 _ Programa v0.0" );
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
	programa_0120 ();
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