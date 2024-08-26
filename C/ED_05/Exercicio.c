/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
Exercicio
*/



// Bibliotecas
#include "MyLib.h"




/*  Comandos para terminal

Compilar:
gcc -o Exercicio Exercicio.c

Executar:
./Exercicio
Exercicio

*/



void metodo0511 ( void )
{
// Dados
int n = 0;
int x = 0;

// Identificacao do metodo
println ( "Metodo 0511: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Repeticao ate x ultrapassar n
for (x = 1; x <= n ; x = x + 1)
    {
    printf ("\n%d: %d", x, x*6);
    }
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0512 ( void )
{
// Dados
int n = 0;
int x = 0;

// Identificacao do metodo
println ( "Metodo 0512: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Repeticao ate x ultrapassar n
for (x = 1; x <= n ; x = x + 1)
    {
    printf ("\n%d: %d", x, x*15);
    }

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0513 ( void )
{
// Dados
int n = 0;
int x = 0;
int x4 = 0;
    

// Identificacao do metodo
println ( "Metodo 0513: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Valor base para x4
x4 = 1;
for (x = 1; x <= n ; x = x + 1)
    {
    x4 = x4 * 4;
    }

// Repeticao ate x ultrapassar n
for (x = n; x >= 1 ; x = x - 1)
    {
    printf ("\n%d: %d", x, x4);
    x4 = x4 / 4;
    }

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0514 ( void )
{
// Dados
int n = 0;
int x = 0;

// Identificacao do metodo
println ( "Metodo 0514: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Valor inicial para x
x = 1;

// Repeticao ate x ultrapassar n
while (x <= n)
    {
    printf ("\n%d: 1/%d", x, x*6);
    x = x +1;
    }


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo0515 ( void )
{
// Dados
int n = 0;
int denominador_inicial = 0;
int denominador = 0;
int potencia = 0;
int x = 0;

// Identificacao do metodo
println ( "Metodo 0515: " );
linhasvazias ( );

// Ler valor para o denominador
denominador_inicial = readint ("Defina o denominador: ");
linhavazia ();

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Valores iniciais
potencia = 0;
x = 0;

// Repeticao ate x ultrapassar n
while (x <= n)
    {
    denominador = pow (denominador_inicial, potencia);
    printf ("\n%d: 1/%d", x, denominador);
    potencia = potencia + 2;
    x = x +1;
    }


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}





void metodo0516 ( void )
{
// Dados
int n = 0;
int x = 0;
int multi3 = 0;
int soma = 0;

// Identificacao do metodo
println ( "Metodo 0516: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Repeticao ate x ultrapassar n
for (x = 1; x <= n ; x = x + 1)
    {
    if (!( x % 5 == 0 ))
	{
	multi3 = 3 * x;
	soma = soma + multi3;
	}
    }

// Mostrar soma final
printf ("Soma final = %d", soma );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}






void metodo0517 ( void )
{
// Dados
int n = 0;
int x = 0.0;
double multi6 = 0.0;
double soma = 0.0;

// Identificacao do metodo
println ( "Metodo 0517: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();


// Repeticao ate x ultrapassar n
for (x = 1.0; x <= n ; x = x + 1.0)
    {
    if (!( x % 5 == 0 ))
	{
	multi6 = 6 * x;
	soma = soma + (1/multi6);
	}
    }

// Mostrar soma final
printf ("Soma final = %lf", soma );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();

}




void metodo0518 ( void )
{
// Dados
int n = 0;
int x = 0;
int numero = 0;
int soma = 0;

// Identificacao do metodo
println ( "Metodo 0518: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Valor inicial
numero = 6;

// Loop enquanto x menor que n
while (x <= n-1)
	{
	soma = soma + numero;
	x = x + 1;
	numero = numero + x;
	}


// Mostrar soma final
printf ("\nSoma Final = %d", soma);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo0519 ( void )
{

// Dados
int n = 0;
int x = 0;
int numero = 0;
int soma = 0;

// Identificacao do metodo
println ( "Metodo 0519: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();

// Valor inicial
numero = 6;

// Loop enquanto x menor que n
while (x <= n-1)
	{
	soma = soma + pow (numero, 2);
	x = x + 1;
	numero = numero + 1;
	}


// Mostrar soma final
printf ("\nSoma Final = %d", soma);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo520 ( void )
{
// Dados
int n = 0;
int denominador = 0;
int numero = 0;
int x = 0;
int contador = 0;
double soma = 0;


// Identificacao do metodo
println ( "Metodo 0520: " );
linhasvazias ( );

// Ler valor para n
n = readint ("Defina a quantidade de numeros: ");
linhavazia ();


// Valor base para x4
denominador = 6;
for (x = 0; x <= n - 1 ; x = x + 1)
    {
    denominador = denominador + x;
    }
x = x - 1;


// Repeticao ate x ultrapassar n
println ("Repeticao");
for (contador = n - 1; contador >= 0 ; contador = contador - 1)
    {
    soma = soma + (1.0/denominador);
    denominador = denominador - x;
    x = x - 1;
    }

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
println ( "1 - Metodo 0511" );
println ( "2 - Metodo 0512" );
println ( "3 - Metodo 0513" );
println ( "4 - Metodo 0514" );
println ( "5 - Metodo 0515" );
println ( "6 - Metodo 0516" );
println ( "7 - Metodo 0517" );
println ( "8 - Metodo 0518" );
println ( "9 - Metodo 0519" );
println ( "10 - Metodo 520" );
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
	metodo0511 ();
	break;
case 2:
	metodo0512 ();
	break;
case 3:
	metodo0513 ();
	break;
case 4:
	metodo0514 ();
	break;
case 5:
	metodo0515 ();
	break;
case 6:
	metodo0516 ();
	break;
case 7:
	metodo0517 ();
	break;
case 8:
	metodo0518 ();
	break;
case 9:
	metodo0519 ();
	break;
case 10:
	metodo520 ();
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



