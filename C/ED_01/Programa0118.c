// Identificacao geral
/*

Programa0118 - v0.0
Data de modificacao da versao: 02/03/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0118 Programa0118.c

Para executar (Windows):
Programa0118

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0118 (void)
{
// Definir dados
float altura_1 = 0.0f;
float altura_2 = 0.0f;
float largura_1 = 0.0f;
float largura_2 = 0.0f;
float profundidade_1 = 0.0f;
float profundidade_2 = 0.0f;
float volume_1 = 0.0f;
float volume_2 = 0.0f;



// Apresentacao
printf ( "\n%s\n", "Esse programa visa tomar tres valores digitados e os supor como o comprimento, a altura e a largura de um paralelepipedo." );
printf ( "%s\n", "A partir dai, sera calculado o volume e um outro paralelepipedo com medidas equivalente a 1/8 das digitadas." );


// Ler input
printf ( "\n%s\n", "Digite um valor inteiro para a altura: " );
scanf ( "%f", &altura_1 );
getchar ();
printf ( "\n%s\n", "Digite um valor inteiro para a altura: " );
scanf ( "%f", &largura_1 );
getchar ();
printf ( "\n%s\n", "Digite um valor inteiro para a altura: " );
scanf ( "%f", &profundidade_1 );
getchar ();


// Calculos
altura_2 = altura_1 / 8;
largura_2 = largura_1 / 8;
profundidade_2 = profundidade_1 / 8;
volume_1 = altura_1 * largura_1 * profundidade_1;
volume_2 = altura_2 * largura_2 * profundidade_2;


// Mostrar resultados
printf ( "\nCom as medidas digitadas (%.0f, %.0f, %.0f), os seus oitavos equivalem a %0.3f, %0.3f e %0.3f", altura_1, largura_1, profundidade_1, altura_2, largura_2, profundidade_2 );
printf ( "\nAssim, o volume do solido obtido equivale a %f", volume_2 );
printf ( "\nComparativamente, %f eh maior que o volume original (%.0f) por 512 vezes\n", volume_2, volume_1);


// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0118 _ Programa v0.0" );
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
	programa_0118 ();
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