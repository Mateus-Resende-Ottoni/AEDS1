// Identificacao geral
/*

Programa0116 - v0.0
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Programa0116 Programa0116.c

Para executar (Windows):
Programa0116

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




void programa_0116 (void)
{
// Definir dados
int lado_1 = 0;
int lado_2 = 0;
float altura_1 = 0;
float altura_2 = 0;
float area_1 = 0.0f;
float area_2 = 0.0f;
int peri_1 = 0;
int peri_2 = 0;
float raiz_3 = sqrt (3);



// Apresentacao
printf ( "\n%s\n", "Escolha um valor para representar o lado de um triangulo equilatero" );
printf ( "%s\n", "Sera entao calculado a area, altura e perimetro de um triangulo com o triplo do lado (arredondado para 6 casas decimais" );



// Ler input
printf ( "\n%s\n", "Digite um valor inteiro para o lado: " );
scanf ( "%d", &lado_1 );
getchar ();


// Calculos
lado_2 = lado_1 * 3;
altura_1 = lado_1 * raiz_3 / 2;
altura_2 = lado_2 * raiz_3 / 2;
area_1 = lado_1 * lado_1 * raiz_3 / 4;
area_2 = lado_2 * lado_2 * raiz_3 / 4;
peri_1 = lado_1 * 3;
peri_2 = lado_2 * 3;


// Mostrar resultados
printf ( "\nDado o lado %d, seu triplo sera %d", lado_1, lado_2 );
printf ( "\nPara esse lado, a altura do triangulo equilatero sera %f (3 vezes maior que a altura original %f)", altura_2, altura_1 );
printf ( "\nJa o perimetro sera %d e a area %f, que sao 3 e 9 vezes maior que os valores originais (%d e %f), respectivamente", peri_2, area_2, peri_1, area_1 );



// Encerramento do programa
printf ( "\n%s\n\n", "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}





int main ()
{
int option = 0;

// Identificacao do autor
printf ( "%s\n", "\nPrograma0116 _ Programa v0.0" );
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
	programa_0116 ();
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