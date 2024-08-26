/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
Exemplo0700
*/



// Bibliotecas
#include "MyLib.h"




/*  Comandos para terminal

Compilar:
gcc -o Exemplo0700 Exemplo0700.c

Executar:
./Exemplo0700
Exemplo0700

Uso de mk:
./mk Exemplo0700
(Para dar permissão: chmod +x mk)

*/



void metodo_01 ( void )
{
// Dados
int n = 0;
int x = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "dados.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 01: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();
printf ("%d\n", n);

for ( x = 1 ; x <= n ; x = x + 1)
    {
    printf ( "\n%d", x);
    fprintf (arquivo, "%d\n", x);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_02 ( void )
{
int x = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "dados.txt", "rt" );

// Identificacao do metodo
println ( "Metodo 02: " );
linhasvazias ( );


// Acoes
fscanf (arquivo, "%d", &x);

while ( ! feof (arquivo))
    {
    printf ( "\n%d", x);
    fscanf (arquivo, "%d\n", &x);
    }
    printf ( "\n%d", x);

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_03 ( void )
{
int n = 0;
int x = 1;
FILE * arquivo = NULL;
arquivo = fopen ( "dados.txt", "at" );

// Identificacao do metodo
println ( "Metodo 03: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();
printf ("%d\n", n);

for ( x = 1 ; x <= n ; x = x + 1)
    {
    printf ( "\n%d", 10+x);
    fprintf (arquivo, "%d\n", 10+x);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_04 ( void )
{
int n = 0;
int x = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "dados.txt", "rat" );

// Identificacao do metodo
println ( "Metodo 05: " );
linhasvazias ( );


// Acoes
printf ("\nn = \n");
scanf ( "%d", &n);
getchar ();

fscanf (arquivo, "%d", &x);

while ( ! feof (arquivo))
    {
    printf ( "\n%d", x);
    fscanf (arquivo, "%d\n", &x);
    }
    printf ( "\n%d", x);

for ( x = 1 ; x <= n ; x = x + 1)
    {
    printf ( "\n%d", 10+x);
    fprintf (arquivo, "%d\n", 10+x);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_05 ( void )
{
// Identificacao do metodo
println ( "Metodo 05: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}





void metodo_06 ( void )
{
// Identificacao do metodo
println ( "Metodo 06: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}






void metodo_07 ( void )
{



// Identificacao do metodo
println ( "Metodo 07: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_08 ( void )
{


// Identificacao do metodo
println ( "Metodo 08: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_09 ( void )
{


// Identificacao do metodo
println ( "Metodo 09: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_10 ( void )
{


// Identificacao do metodo
println ( "Metodo 10: " );
linhasvazias ( );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int main (void)
{
// Variaveis e dados
int opcao = 0;



// Identificacao do autor
autor ( );


do
{
// Lista de opcoes
linhavazia ( );
println ( "Lista de opcoes" );
println ( "0 - Terminar o programa" );
println ( "1 - Metodo 01" );
println ( "2 - Metodo 02" );
println ( "3 - Metodo 03" );
println ( "4 - Metodo 04" );
println ( "5 - Metodo 05" );
println ( "6 - Metodo 06" );
println ( "7 - Metodo 07" );
println ( "8 - Metodo 08" );
println ( "9 - Metodo 09" );
println ( "10 - Metodo 10" );
linhavazia ( );

// Escolher opcao
opcao = readint ( "Digite sua opcao: " );
showint ( "Opcao escolhida = ", opcao );
linhasvazias ( );



// Metodos
switch ( opcao)
{
case 0:
	break;
case 1:
	metodo_01 ();
	break;
case 2:
	metodo_02 ();
	break;
case 3:
	metodo_03 ();
	break;
case 4:
	metodo_04 ();
	break;
case 5:
	metodo_05 ();
	break;
case 6:
	metodo_06 ();
	break;
case 7:
	metodo_07 ();
	break;
case 8:
	metodo_08 ();
	break;
case 9:
	metodo_09 ();
	break;
case 10:
	metodo_10 ();
	break;
default:
	println ( "Opcao nao reconhecida" );
	linhavazia ( );
	break;
}

}
while ( opcao != 0 );


println ( "Encerramento do programa" );
println ( "Aperte ENTER para terminar o programa" );
getchar ();
return ( 0 );
}



