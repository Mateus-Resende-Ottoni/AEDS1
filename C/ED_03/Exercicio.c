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



void metodo0311 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;


// Identificacao do metodo
println ( "Metodo 0311: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite letras: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

printf ( "\nLetras maiusculas: ");
for ( x = 0; x <= tamanho; x = x +1) 
{
if (palavra [x] >= 'A' && palavra [x] <= 'Z')
	{
	printf ( "%c ", palavra [x] );
	}
}
linhavazia ();


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




void metodo0312 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;
int quant_maiusculas = 0;


// Identificacao do metodo
println ( "Metodo 0312: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite letras: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

printf ( "\nLetras maiusculas: ");
for ( x = 0; x <= tamanho; x = x +1) 
{
if (palavra [x] >= 'A' && palavra [x] <= 'Z')
	{
	printf ( "%c ", palavra [x] );
	quant_maiusculas = quant_maiusculas + 1;
	}
}


// Mostrar quantas maiusculsa sao
printf ( "\n%s%d\n", "Quantidade de letras maiusculas obtidas = ", quant_maiusculas );


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




void metodo0313 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;
int quant_maiusculas = 0;


// Identificacao do metodo
println ( "Metodo 0313: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite letras: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

printf ( "\nLetras maiusculas: ");
for ( x = tamanho; x >= 0 ; x = x - 1) 
{
if (palavra [x] >= 'A' && palavra [x] <= 'Z')
	{
	printf ( "%c ", palavra [x] );
	quant_maiusculas = quant_maiusculas + 1;
	}
}


// Mostrar quantas maiusculsa sao
printf ( "\n%s%d\n", "Quantidade de letras maiusculas obtidas = ", quant_maiusculas );


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




void metodo0314 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;
int quant_letras = 0;


// Identificacao do metodo
println ( "Metodo 0314: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite caracteres: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

printf ( "\nLetras: ");
for ( x = 0; x <= tamanho; x = x +1) 
{
if ( (palavra [x] >= 'A' && palavra [x] <= 'Z') ||
     (palavra [x] >= 'a' && palavra [x] <= 'z'))
	{
	printf ( "%c ", palavra [x] );
	quant_letras = quant_letras + 1;
	}
}


// Mostrar quantas maiusculsa sao
printf ( "\n%s%d\n", "Quantidade de letras obtidas = ", quant_letras );


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}



void metodo0315 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;
int quant_digitos = 0;


// Identificacao do metodo
println ( "Metodo 0315: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite uma combinacao de caracteres: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

// Contagem e mostra dos digitos
printf ( "\nDigitos: ");
for ( x = tamanho; x >= 0 ; x = x - 1) 
{
if (palavra [x] >= '0' && palavra [x] <= '9')
	{
	printf ( "%c ", palavra [x] );
	quant_digitos = quant_digitos + 1;
	}
}


// Mostrar quantos digitos sao
printf ( "\n%s%d\n", "Quantidade de digitos obtidos = ", quant_digitos );


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();

}





void metodo0316 ( void )
{
// Dados
char palavra [81];
int tamanho = 0;
int x = 0;
int quant_simbolos = 0;


// Identificacao do metodo
println ( "Metodo 0316: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite uma combinacao de caracteres: " );
fgets (palavra, 81, stdin);

// Formatar palavra
tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';


//Contar tudo nem letra nem numero
printf ( "\nLetras: ");
for ( x = 0; x <= tamanho; x = x +1) 
{
if ( ! ( (palavra [x] >= 'A' && palavra [x] <= 'Z') ||
	 (palavra [x] >= 'a' && palavra [x] <= 'z') ||
	 (palavra [x] >= '0' && palavra [x] <= '9') ) )
	{
	printf ( "%c ", palavra [x] );
	quant_simbolos = quant_simbolos + 1;
	}
}
// Nao sei se é o \n ou o \0, mas algum deles ta aumentando a quantidade de simbolos, entao isso aqui é para corrigir isso
quant_simbolos = quant_simbolos - 1;


// Mostrar quantas simbolos sao
printf ( "\n%s%d\n", "Quantidade de simbolos obtidas = ", quant_simbolos );


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}






void metodo0317 ( void )
{
int limit_menor = 0;
int limit_maior = 0;
int valores = 0;
int test = 0;
int divp6 = 0;
char lista_validos [80];
char convertido [80];
char *vazio = " ";
int n_validos = 0;
int x = 0;



// Identificacao do metodo
println ( "Metodo 0317: " );
linhasvazias ( );


// Ler delimitadores
limit_menor = readint ( "Defina o menor valor do intervalo: " );
limit_maior = readint ( "Defina o maior valor do intervalo: " );
valores = readint ( "Defina o numero de valores a serem testados: " );


// Ler valores
for ( x = 0; x < valores ; x = x +1)
{
  printf ( "Valor %d: ", x+1 );
  scanf ( "%d", &test);
  getchar ();

	// Testar validade
	divp6 = test % 6;
	if (  ( test >= limit_menor && test <= limit_maior ) &&
		divp6 == 0 )
		{
		// Adicionar a lista
		sprintf ( convertido, "%d", test);
		strcat (lista_validos, strcat (strdup (vazio), convertido));
		n_validos = n_validos + 1;
		}
}

// Mostrar validos
printf ( "\nValores validos:%s", lista_validos );
printf ( "\nQuantidade de valores validos: %d", n_validos );
linhavazia ();


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




void metodo0318 ( void )
{
int limit_menor = 0;
int limit_maior = 0;
int valores = 0;
int test = 0;
int divp4 = 0;
int divp5 = 0;
char lista_validos [80];
char convertido [80];
char *vazio = " ";
int n_validos = 0;
int x = 0;



// Identificacao do metodo
println ( "Metodo 0318: " );
linhasvazias ( );


// Ler delimitadores
limit_menor = readint ( "Defina o menor valor do intervalo: " );
limit_maior = readint ( "Defina o maior valor do intervalo: " );
valores = readint ( "Defina o numero de valores a serem testados: " );


// Ler valores
for ( x = 0; x < valores ; x = x +1)
{
  printf ( "Valor %d: ", x+1 );
  scanf ( "%d", &test);
  getchar ();

	// Testar validade
	divp4 = test % 4;
	divp5 = test % 5;
	if (  ( test >= limit_menor && test <= limit_maior ) &&
		( divp4 == 0 && ( ! ( divp5 == 0 ) ) ) )
		{
		// Adicionar a lista
		sprintf ( convertido, "%d", test);
		strcat (lista_validos, strcat (strdup (vazio), convertido));
		n_validos = n_validos + 1;
		}
}

// Mostrar validos
printf ( "\nValores validos:%s", lista_validos );
printf ( "\nQuantidade de valores validos: %d", n_validos );
linhavazia ();


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}



void metodo0319 ( void )
{
// Dados
double limit_menor = 0;
double limit_maior = 0;
int valores = 0;
double test = 0;
int divp2 = 0;
char lista_validos [80];
char convertido [80];
char *vazio = " ";
int n_validos = 0;
int x = 0;


// Identificacao do metodo
println ( "Metodo 0319: " );
linhasvazias ( );


// Ler delimitadores
limit_menor = readdouble ( "Defina o menor valor do intervalo: " );

// Garantir segundo valor como maior que o primeiro
do {
limit_maior = readdouble ( "Defina o maior valor do intervalo: " );
}
while ( ! (limit_maior > limit_menor));

valores = readint ( "Defina o numero de valores a serem testados: " );


// Ler valores
for ( x = 0; x < valores ; x = x +1)
{
  printf ( "Valor %d: ", x+1 );
  scanf ( "%lf", &test);
  getchar ();

	// Testar validade
	divp2 = (int) test % 2;
	if (  ( test > limit_menor && test < limit_maior ) &&
		 divp2 == 0  )
		{
		// Adicionar a lista
		sprintf ( convertido, "%lf", test);
		strcat (lista_validos, strcat (strdup (vazio), convertido));
		n_validos = n_validos + 1;
		}
}

// Mostrar validos
printf ( "\nValores validos:%s", lista_validos );
printf ( "\nQuantidade de valores validos: %d", n_validos );
linhavazia ();


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
getchar ();
}




void metodo0320 ( void )
{
// Dados
double limit1 = 0;
double limit2 = 0;
int valores = 0;
double test = 0;
double parte_fracionaria = 0;
char lista_validos [80];
char convertido [80];
char *vazio = " ";
int n_validos = 0;
int x = 0;


// Identificacao do metodo
println ( "Metodo 0320: " );
linhasvazias ( );


// Ler delimitadores
// Garantir primeiro valor entre 0 e 1
do {
limit1 = readdouble ( "Defina um limite do intervalo: " );
}
while ( limit1 < 0.0 || limit1 > 1.0 );

// Garantir segundo valor como maior que o primeiro e entre 0 e 1
do {
limit2 = readdouble ( "Defina outro limite do intervalo: " );
}
while ( limit2 < 0.0 || limit2 > 1.0 );

valores = readint ( "Defina o numero de valores a serem testados: " );


// Ler valores
for ( x = 0; x < valores ; x = x +1)
{
  printf ( "Valor %d: ", x+1 );
  scanf ( "%lf", &test);
  getchar ();

	// Testar validade
	parte_fracionaria = test - (int) test;
	if  ( ( parte_fracionaria < limit1 || parte_fracionaria < limit2 ) &&
		( parte_fracionaria > limit2 || parte_fracionaria > limit1) )
		{
		// Adicionar a lista
		sprintf ( convertido, "%lf", test);
		strcat (lista_validos, strcat (strdup (vazio), convertido));
		n_validos = n_validos + 1;
		}
}

// Mostrar validos
printf ( "\nValores validos:%s", lista_validos );
printf ( "\nQuantidade de valores validos: %d", n_validos );
linhavazia ();


// Encerramento do programa
printlns ( "Aperte ENTER para retornar a lista de opcoes");
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
println ( "1 - Metodo 0311" );
println ( "2 - Metodo 0312" );
println ( "3 - Metodo 0313" );
println ( "4 - Metodo 0314" );
println ( "5 - Metodo 0315" );
println ( "6 - Metodo 0316" );
println ( "7 - Metodo 0317" );
println ( "8 - Metodo 0318" );
println ( "9 - Metodo 0319" );
println ( "10 - Metodo 0320" );
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
	metodo0311 ();
	break;
case 2:
	metodo0312 ();
	break;
case 3:
	metodo0313 ();
	break;
case 4:
	metodo0314 ();
	break;
case 5:
	metodo0315 ();
	break;
case 6:
	metodo0316 ();
	break;
case 7:
	metodo0317 ();
	break;
case 8:
	metodo0318 ();
	break;
case 9:
	metodo0319 ();
	break;
case 10:
	metodo0320 ();
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



