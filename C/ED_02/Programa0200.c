/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
Programa0200
*/



// Bibliotecas
#include "MyLib.h"




/*  Comandos para terminal

Compilar:
gcc -o Programa0200 Programa0200.c

Executar:
./Programa0200
Programa0200

*/



void metodo0211 ( void )
{
// Dados
int x = 0;
int z = 0;


// Identificacao do metodo
println ( "Metodo 0211: Reconhecer inteiro par ou impar" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );


// Discenir par ou impar
z = x % 2;

if ( z == 0 )
{
printf ( "\nNumero escolhido (%d) e' par", x );
}
else
{
printf ( "\nNumero escolhido (%d) e' impar", x );
}

linhasvazias ();
}




void metodo0212 ( void )
{
// Dados
int x = 0;
int z = 0;


// Identificacao do metodo
println ( "Metodo 0212: Reconhecer inteiro par e maior/menor que 25 ou impar e maior/menor que -25" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );


// Discenir par ou impar e pertencimento ao intervalo
z = x % 2;

if ( z == 0 )
{
	if ( 25 < x )
	{
	printf ( "\nNumero escolhido (%d) e' par e maior que 25", x );
	}
	else
	{
	printf ( "\nNumero escolhido (%d) e' par e menor que 25", x );
	}
}
else
{
	if ( x < -25)
	{
	printf ( "\nNumero escolhido (%d) e' impar e menor que -25", x );
	}
	else
	{
	printf ( "\nNumero escolhido (%d) e' impar e maior que -25", x );
	}
}

linhasvazias ();
}




void metodo0213 ( void )
{
// Dados
int x = 0;


// Identificacao do metodo
println ( "Metodo 0213: Reconhecer inteiro pertencente ao intervalo (35:65)" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );


// Discernir pertencimento ao intervalo
if ( 35 < x && x < 65 )
{
printf ( "\nNumero escolhido (%d) pertence ao intervalo (35:65)", x );
}
else
{
printf ( "\nNumero escolhido (%d) nao pertence ao intervalo (35:65)", x );
}

linhasvazias ();
}




void metodo0214 ( void )
{
// Dados
int x = 0;


// Identificacao do metodo
println ( "Metodo 0214: Reconhecer inteiro pertencente ao intervalo [15:60]" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );


// Discernir pertencimento ao intervalo
if ( 15 <= x && x <= 60 )
{
printf ( "\nNumero escolhido (%d) pertence ao intervalo [15:60]", x );
}
else
{
printf ( "\nNumero escolhido (%d) nao pertence ao intervalo [15:60]", x );
}

linhasvazias ();
}



void metodo0215 ( void )
{
// Dados
int x = 0;


// Identificacao do metodo
println ( "Metodo 0215: Reconhecer inteiro pertencente aos intervalos [10:30] e [25:50]" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );


// Discernir pertencimento a interseccao dos intervalos
if ( 10 <= x && x <= 50 )
{
	if ( 25 <= x && x <= 30)
	{
	printf ( "\nNumero escolhido (%d) pertence a ambos intervalos ", x );
	}
	else
	{
	if ( x < 25 )
		{
		printf ( "\nNumero escolhido (%d) pertence apenas ao intervalo [10:30] ", x );
		}
	if ( 30 < x )
		{
		printf ( "\nNumero escolhido (%d) pertence apenas ao intervalo [25:50] ", x );
		}
	}
}
else
{
	printf ( "\nNumero escolhido (%d) nao pertence a ambos intervalos", x );
}

linhasvazias ();
}





void metodo0216 ( void )
{
// Dados
int x = 0;
int y = 0;
int a = 0;
int b = 0;


// Identificacao do metodo
println ( "Metodo 0216: Reconhecer dois inteiros e se o primeiro e' impar e o segundo e' par" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );
y = readint ( "Digite outro numero inteiro: " );


// Discenir par ou impar
a = x % 2;
b = y % 2;

if ( a != 0 )
{
	if ( b == 0 )
	{
	printf ( "\nPrimeiro numero (%d) e' impar e o segundo (%d) e' par", x, y);
	}
	else
	{
	printf ( "\nPrimeiro numero (%d) e' impar e o segundo (%d) tambem", x, y);
	}
}
else
{
	if ( b == 0 )
	{
	printf ( "\nPrimeiro numero (%d) e' par e o segundo (%d) tambem", x, y);
	}
	else
	{
	printf ( "\nPrimeiro numero (%d) e' par e o segundo (%d) e' impar", x, y);
	}
}

linhasvazias ();
}






void metodo0217 ( void )
{
// Dados
int x = 0;
int y = 0;
int a = 0;
int b = 0;


// Identificacao do metodo
println ( "Metodo 0217: Reconhecer dois inteiros e se o primeiro e' par e negativo e o segundo e' impar e positivo" );
linhasvazias ( );


// Ler valor
x = readint ( "Digite um numero inteiro: " );
y = readint ( "Digite outro numero inteiro: " );


// Discenir par ou impar
a = x % 2;
b = y % 2;

if ( a == 0 && x < 0)
{
	if ( b != 0 && 0 < y)
	{
	printf ( "\nPrimeiro numero (%d) e' par e negativo e o segundo (%d) e' impar e positivo", x, y);
	}
	else
	{
	printf ( "\nPrimeiro numero (%d) e' par e negativo e o segundo (%d) nao e' impar e positivo", x, y);
	}
}
else
{
	if ( b != 0 && 0 < y)
	{
	printf ( "\nPrimeiro numero (%d) nao e' par e negativo e o segundo (%d) e' impar e positivo", x, y);
	}
	else
	{
	printf ( "\nPrimeiro numero (%d) nao e' par e negativo e o segundo (%d) nao e' impar e positivo", x, y);
	}
}
}




void metodo0218 ( void )
{
// Dados
double x = 0;
double y = 0;
double z = 0;


// Identificacao do metodo
println ( "Metodo 0218: Reconhecer dois reais e se o segundo e' maior que um terco do primeiro" );
linhasvazias ( );


// Ler valor
x = readdouble ( "Digite um numero real: " );
y = readdouble ( "Digite outro numero real: " );


// Determinar um terco de x
z = x / 3;

// Comparar dados
if ( z < y )
{
	printf ( "\n%lf e' maior que um terco de %lf (%lf)", y, x, z );
}
else
{
	printf ( "\n%lf e' menor que um terco de %lf (%lf)", y, x, z );
}

linhasvazias ();
}



void metodo0219 ( void )
{
// Dados
double x = 0;
double y = 0;
double z = 0;


// Identificacao do metodo
println ( "Metodo 0219: Reconhecer tres numeros reais e se o primeiro esta no intervalo entre os outros dois" );
linhasvazias ( );


// Ler valor
x = readdouble ( "Digite um numero real: " );
y = readdouble ( "Digite outro numero real: " );
z = readdouble ( "Digite outro numero real: " );



if ( y < z )
{
	if ( y < x && x < z )
	{
	printf ( "\n%lf esta entre %lf e %lf", x, y, z);
	}
	else
	{
	printf ( "\n%lf nao esta entre %lf e %lf", x, y, z);
	}
}
if ( z < y )
{
	if ( z < x && x < y )
	{
	printf ( "\n%lf esta entre %lf e %lf", x, z, y);
	}
	else
	{
	printf ( "\n%lf nao esta entre %lf e %lf", x, z, y);
	}
}
if ( y == z)
{
	println ( "Nao ha intervalo entre os dois ultimos numeros" );
}
}




void metodo0220 ( void )
{
// Dados
double x = 0;
double y = 0;
double z = 0;


// Identificacao do metodo
println ( "Metodo 0220: Reconhecer tres numeros reais distintos e se o primeiro nao esta no intervalo entre os outros dois" );
linhasvazias ( );


// Ler valor
x = readdouble ( "Digite um numero real: " );
y = readdouble ( "Digite outro numero real: " );
z = readdouble ( "Digite outro numero real: " );


if ( x != y && x != z && y != z )
{
	if ( y < z )
	{
		if ( y < x && x < z )
		{
		printf ( "\n%lf esta entre %lf e %lf", x, y, z);
		}
		else
		{
		printf ( "\n%lf nao esta entre %lf e %lf", x, y, z);
		}
	}
	if ( z < y )
	{
		if ( z < x && x < y )
		{
		printf ( "\n%lf esta entre %lf e %lf", x, z, y);
		}
		else
		{
		printf ( "\n%lf nao esta entre %lf e %lf", x, z, y);
		}
	}
}
else
{
	linhavazia ();
	println ( "Ao menos dois dos numeros reconhecidos possuem o mesmo valor" );
}
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
println ( "1 - Metodo 0211" );
println ( "2 - Metodo 0212" );
println ( "3 - Metodo 0213" );
println ( "4 - Metodo 0214" );
println ( "5 - Metodo 0215" );
println ( "6 - Metodo 0216" );
println ( "7 - Metodo 0217" );
println ( "8 - Metodo 0218" );
println ( "9 - Metodo 0219" );
println ( "10 - Metodo 0220" );
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
	metodo0211 ();
	break;
case 2:
	metodo0212 ();
	break;
case 3:
	metodo0213 ();
	break;
case 4:
	metodo0214 ();
	break;
case 5:
	metodo0215 ();
	break;
case 6:
	metodo0216 ();
	break;
case 7:
	metodo0217 ();
	break;
case 8:
	metodo0218 ();
	break;
case 9:
	metodo0219 ();
	break;
case 10:
	metodo0220 ();
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



