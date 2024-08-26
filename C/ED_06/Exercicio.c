/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
ProgramaBase
*/



// Bibliotecas
#include "MyLib.h"




/*  Comandos para terminal

Compilar:
gcc -o Exercicio Exercicio.c

Executar:
./Exercicio
Exercicio

Uso de mk:
./mk Exercicio

*/


void multiplocrescente_6 ( int n )
{
if ( n > 0 )
    {
    multiplocrescente_6 ( n-1 );
    printf ("\n%d", n*6);
    } 
}


void metodo_0611 ( void )
{
// Dados
int n = 0;

// Identificacao do metodo
println ( "Metodo 0611: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
multiplocrescente_6 (n);

    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}


void multiplodecrescente_6 ( int n )
{
if ( n > 0 )
    {
    printf ("\n%d", n*6);
    multiplodecrescente_6 ( n-1 );
    } 
}


void metodo_0612 ( void )
{
// Dados
int n = 0;

// Identificacao do metodo
println ( "Metodo 0612: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
multiplodecrescente_6 (n);

    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}


void multiplocrescentefracao_6 ( int n )
{
if ( n > 1 )
    {
    multiplocrescentefracao_6 ( n-1 );
    printf ("\n1/%d", (n-1)*6);
    } 
else if (n == 1 )
    {
    printf ("\n1/1");
    }
}

void metodo_0613 ( void )
{
// Dados
int n = 0;

// Identificacao do metodo
println ( "Metodo 0613: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
multiplocrescentefracao_6 (n);

    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}


void multiplodecrescentefracao_6 ( int n )
{
if ( n > 1 )
    {
    printf ("\n1/%d", (n-1)*6);
    multiplodecrescentefracao_6 ( n-1 );
    } 
else if (n == 1 )
    {
    printf ("\n1/1");
    }
}

void metodo_0614 ( void )
{
// Dados
int n = 0;

// Identificacao do metodo
println ( "Metodo 0614: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
multiplodecrescentefracao_6 (n);

    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int soma_adicaopares_6 ( int n )
{
// Dado
int soma = 0;
    
if ( n > 0 )
    {
    soma = 6 + ((n-1)*2);
    soma = soma + soma_adicaopares_6 ( n-1 );
    } 
return (soma);
}


void metodo_0615 ( void )
{
// Dados
int n = 0;
int soma = 0;

// Identificacao do metodo
println ( "Metodo 0615: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
soma = soma_adicaopares_6 (n);
printf ("\nSoma da soma de 6 com numeros pares: %d", soma);
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



double soma_multiplosfracao_6 ( int n )
{
// Dado
double soma = 0;
    
if ( n > 0 )
    {
    soma = 1.0/(6.0*n);
    soma = soma + soma_multiplosfracao_6 ( n-1 );
    } 
return (soma);
}


void metodo_0616 ( void )
{
// Dados
int n = 0;
double soma = 0.0;

// Identificacao do metodo
println ( "Metodo 0616: " );
linhasvazias ( );

    
// Ler valor
n = readint ("Digite a quantidade de numeros: ");


// Funcao
soma = soma_multiplosfracao_6 (n);
printf ("\nSoma dos numeros de denominadores multiplos de 6: %lf", soma);
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void mostrarchar ( char *palavra, int tamanho)
{

if (tamanho > 0)
    {
    mostrarchar ( palavra, tamanho-1);
    printf ("\n%c", palavra [tamanho-1]);
    }
}


void metodo_0617 ( void )
{
// Dados
int tamanho = 0;
char palavra [81];

// Identificacao do metodo
println ( "Metodo 0617: " );
linhasvazias ( );


// Ler cadeia
printf ( "\n%s", "Digite uma cadeia de caracteres: " );
fgets (palavra, 81, stdin);

tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

// Chamar funcao
mostrarchar ( palavra, tamanho);
    
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int contarchar_par ( char *palavra, int tamanho)
{
// Dados
int n_pares = 0;

if (tamanho > 0)
    {
    n_pares = contarchar_par ( palavra, tamanho-1);
    if (palavra [tamanho-1] == '0' || palavra [tamanho-1] == '2' ||
        palavra [tamanho-1] == '4' || palavra [tamanho-1] == '6' ||
        palavra [tamanho-1] == '8')
        {
        n_pares = n_pares + 1;
        }
    }

return (n_pares);
}

void metodo_0618 ( void )
{
// Dados
int tamanho = 0;
char palavra [81];
int n_pares = 0;

// Identificacao do metodo
println ( "Metodo 0618: " );
linhasvazias ( );


// Ler cadeia
printf ( "\n%s", "Digite uma cadeia de caracteres: " );
fgets (palavra, 81, stdin);

tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

// Chamar funcao
n_pares = contarchar_par ( palavra, tamanho);
printf ("\nNumero de caracteres pares: %d", n_pares);
    
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int contarchar_menorL ( char *palavra, int tamanho)
{
// Dados
int n_menorL = 0;

if (tamanho > 0)
    {
    n_menorL = contarchar_menorL ( palavra, tamanho-1);
    if ( palavra [tamanho-1] >= 'A' && palavra [tamanho-1] < 'L' )
        {
        n_menorL = n_menorL + 1;
        }
    }
return (n_menorL);
}

void metodo_0619 ( void )
{
// Dados
int tamanho = 0;
char palavra [81];
int n_menorL = 0;

// Identificacao do metodo
println ( "Metodo 0619: " );
linhasvazias ( );


// Ler cadeia
printf ( "\n%s", "Digite uma cadeia de caracteres: " );
fgets (palavra, 81, stdin);

tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

// Chamar funcao
n_menorL = contarchar_menorL ( palavra, tamanho);
printf ("\nNumero de letras maiusculas menores que L (maiusculo): %d", n_menorL);
    
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int fibonacci_pares_quant ( int quant )
{
// Dados
int n = 0;
int valor = 0;
int soma = 0;

// Definir dados
n = quant;

if (n>2)
	{
	valor = fibonacci_pares_quant (n - 1) + fibonacci_pares_quant (n - 2);
	}
else
	{
	valor = 1;
	}


return (valor);
}


int fibonacci_pares_soma ( int quant )
{
// Dados
int n = 0;
int valor = 0;
int soma = 0;

// Definir dados
n = quant;

while (n > 1)
	{
	valor = fibonacci_pares_quant (n);

	if (n % 3 == 0)
		{
		soma = soma + valor;
		}
	n = n - 1;
	}

return (soma);
}


void metodo_0620 ( void )
{
// Dados
int soma_fibonacci_pares = 0;
int n = 0;
int n_multiplicado = 0;

// Identificacao do metodo
println ( "Metodo 0620: " );
linhasvazias ( );


// Ler numero de numeros a serem usados na funcao
n = readint ("Digite a quantidade de numeros pares: ");

// A cada 3 valores na sequência de Fibonacci, o ultimo e' par
n_multiplicado = n * 3;


// Chamar funcao
soma_fibonacci_pares = fibonacci_pares_soma ( n_multiplicado );

// Mostrar valor
printf ("\n Soma total: %d", soma_fibonacci_pares);


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
println ( "1 - Metodo 0611" );
println ( "2 - Metodo 0612" );
println ( "3 - Metodo 0613" );
println ( "4 - Metodo 0614" );
println ( "5 - Metodo 0615" );
println ( "6 - Metodo 0616" );
println ( "7 - Metodo 0617" );
println ( "8 - Metodo 0618" );
println ( "9 - Metodo 0619" );
println ( "10 - Metodo 0620" );
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
	metodo_0611 ();
	break;
case 2:
	metodo_0612 ();
	break;
case 3:
	metodo_0613 ();
	break;
case 4:
	metodo_0614 ();
	break;
case 5:
	metodo_0615 ();
	break;
case 6:
	metodo_0616 ();
	break;
case 7:
	metodo_0617 ();
	break;
case 8:
	metodo_0618 ();
	break;
case 9:
	metodo_0619 ();
	break;
case 10:
	metodo_0620 ();
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



