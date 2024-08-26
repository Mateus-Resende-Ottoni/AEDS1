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
(Para dar permissão: chmod +x mk)

*/



void metodo_0711 ( void )
{
// Dados
int n = 0;
int x = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "Resultado01.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0711: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();


for ( x = 1 ; x <= n ; x = x + 1)
    {
    fprintf (arquivo, "%d\n", 4*x);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0712 ( void )
{
// Dados
int n = 0;
int x = 0;
int n25 = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "Resultado02.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0712: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();


for ( x = 1 ; x <= n ; x = x + 1)
    {
    n25 = 25 + (10 * (x-1));
    fprintf (arquivo, "%d\n", n25);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0713 ( void )
{
// Dados
int n = 0;
int x = 0;
int y = 0;
int p5 = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "Resultado03.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0713: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();


for ( x = 1 ; x <= n ; x = x + 1)
    {
    for ( y = 1, p5 = 1; y < x; y = y + 1)
	{
	p5 = p5 * 5;
	}
    fprintf (arquivo, "%d\n", p5);
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0714 ( void )
{
// Dados
int n = 0;
int x = 0;
int y = 0;
int p5 = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "Resultado04.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0714: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();


for ( x = n ; x >= 1 ; x = x - 1)
    {
    for ( y = 1, p5 = 1; y < x; y = y + 1)
	{
	p5 = p5 * 5;
	}
    if ( p5 == 1 ) 
	{
	fprintf (arquivo, "%d\n", p5);
	}
    else
	{
	fprintf (arquivo, "1/%d\n", p5);
	}
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_0715 ( void )
{
// Dados
int n = 0;
int x = 0;

int y = 0;
int p = 0;
FILE * arquivo = NULL;
arquivo = fopen ( "Resultado05.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0715: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();
printf ("\nx = ");
scanf ( "%d", &x);
getchar ();


for ( y = 1 ; y <= n ; y = y + 1)
    {
    if ( y == 1) 
	{
	p = 1;
   	fprintf (arquivo, "%d\n", p);
	}
    else
	{
	p = pow ( x, (2*y)-1 );
    	fprintf (arquivo, "1/%d\n", p);
	}
    }

fclose (arquivo);

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}





void metodo_0716 ( void )
{
// Dados
int n = 0;
int x = 0;
double valor = 0;
double soma = 0;
FILE * arquivo_input = NULL;
FILE * arquivo_output = NULL;
arquivo_input = fopen ( "Resultado05.txt", "rt" );
arquivo_output = fopen ( "Resultado06.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0716: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();

fprintf (arquivo_output, "\nValores lidos e somados: %d", n);
for ( x = 1 ; x <= n ; x = x + 1)
    {
    if (x == 1) 
	{
	fscanf (arquivo_input, "\n%lf", &valor);
	}
    else
	{ 
    	fscanf (arquivo_input, "\n1/%lf", &valor);
	}
    soma = soma + (1/valor);
    }
fprintf (arquivo_output, " |-| Soma: %lf", soma);

fclose (arquivo_input);
fclose (arquivo_output);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}






void metodo_0717 ( void )
{
// Dados
int n = 0;
int x = 0;
int valor = 0;
int soma = 0;
FILE * arquivo_input = NULL;
FILE * arquivo_output = NULL;
arquivo_input = fopen ( "Resultado04.txt", "rt" );
arquivo_output = fopen ( "Resultado07.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0717: " );
linhasvazias ( );


// Acoes
// Ler valor
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();


fprintf (arquivo_output, "\nValores lidos e somados: %d", n);
for ( x = 1 ; x <= n ; x = x + 1)
    {
    if (valor == 5) 
	{
	fscanf (arquivo_input, "\n%d", &valor);
	}
    else
	{ 
    	fscanf (arquivo_input, "\n1/%d", &valor);
	}
    soma = soma + valor;
    }
fprintf (arquivo_output, " |-| Soma: %d", soma);

fclose (arquivo_input);
fclose (arquivo_output);


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


void metodo_0718 ( void )
{
// Dados
int soma_fibonacci_pares = 0;
int n = 0;
int x = 0;
int valor = 0;
int n_multiplicado = 0;
FILE * arquivo_output = NULL;
arquivo_output = fopen ( "Resultado08.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0718: " );
linhasvazias ( );


// Acoes
printf ("\nn = ");
scanf ( "%d", &n);
getchar ();

// A cada 3 valores na sequência de Fibonacci, o ultimo e' par
n_multiplicado = n * 3;

for ( x = 1 ; x <= n_multiplicado ; x = x + 1)
{
if ( x % 3 == 0 )
    {
    valor = fibonacci_pares_quant ( x );
    fprintf (arquivo_output, "\n%d", valor);
    }
}
fclose (arquivo_output);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo_0719 ( void )
{
// Dados
char stringchar = 'a';
int quant_maiusculas = 0;
FILE * arquivo_input = fopen ( "Dados.txt", "rt" );
FILE * arquivo_output = fopen ( "Resultado09.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0719: " );
linhasvazias ( );


// Acoes
fscanf (arquivo_input, " %c", &stringchar);

while ( ! feof(arquivo_input) )
{
  	if ( stringchar >= 'A' && stringchar <= 'Z' )
		{
		quant_maiusculas = quant_maiusculas + 1;
		}
   	fprintf (arquivo_output, "%c", stringchar);
	// putchar (stringchar); 
	fscanf (arquivo_input, "%c", &stringchar);
}
    	fprintf (arquivo_output, " |-| Quantidade de letras maiusculas: %d\n", quant_maiusculas);

fclose (arquivo_input);
fclose (arquivo_output);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo_0720 ( void )
{
// Dados
char stringchar = 'a';
int quant_maiores5 = 0;
FILE * arquivo_input = fopen ( "Dados.txt", "rt" );
FILE * arquivo_output = fopen ( "Resultado10.txt", "wt" );

// Identificacao do metodo
println ( "Metodo 0720: " );
linhasvazias ( );


// Acoes
fscanf (arquivo_input, " %c", &stringchar);

while ( ! feof(arquivo_input) )
{
  	if ( stringchar >= '5' && stringchar < '9' )
		{
		quant_maiores5 = quant_maiores5 + 1;
		}
   	fprintf (arquivo_output, "%c", stringchar);
	// putchar (stringchar); 
	fscanf (arquivo_input, "%c", &stringchar);
}
    	fprintf (arquivo_output, " |-| Quantidade de digitos maiores ou iguais a 5: %d\n", quant_maiores5);

fclose (arquivo_input);
fclose (arquivo_output);


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
println ( "1 - Metodo 0711" );
println ( "2 - Metodo 0712" );
println ( "3 - Metodo 0713" );
println ( "4 - Metodo 0714" );
println ( "5 - Metodo 0715" );
println ( "6 - Metodo 0716" );
println ( "7 - Metodo 0717" );
println ( "8 - Metodo 0718" );
println ( "9 - Metodo 0719" );
println ( "10 - Metodo 0720" );
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
	metodo_0711 ();
	break;
case 2:
	metodo_0712 ();
	break;
case 3:
	metodo_0713 ();
	break;
case 4:
	metodo_0714 ();
	break;
case 5:
	metodo_0715 ();
	break;
case 6:
	metodo_0716 ();
	break;
case 7:
	metodo_0717 ();
	break;
case 8:
	metodo_0718 ();
	break;
case 9:
	metodo_0719 ();
	break;
case 10:
	metodo_0720 ();
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



