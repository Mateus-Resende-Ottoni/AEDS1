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

Uso de mk:
./mk Exercicio [arquivo de input] [arquivo de output]
(Para dar permissão: chmod +x mk)


*/


void array_positivospares ( int array [], int tamanho)
{
// Dados
int x = 0, y = 0;


// Ler valores
for (x = 0; x < tamanho ; x = x + 1)
    {
    do
	{
    	printf ( "[%d] = ", x );
    	scanf ( "%d", &y );
	array [x] = y;
	}
    while ( y < 0 || y % 2 == 1 );
    }
}

void metodo_0811 ( void )
{
//Dados
int tamanho = 0;

// Identificacao do metodo
println ( "Metodo 0811: " );
linhasvazias ( );

do
    {
    tamanho = readint ("Digite o tamanho do arranjo: ");
    }
while ( tamanho <= 0);

int array [tamanho];


array_positivospares ( array, tamanho );


//show_int_array ( array, tamanho );


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int read_array_positivospares_file ( char filename [ ], int array [ ], int maximo )
{
 // Dados
int n_pares = 0, x = 0, y = 0;
 // Abrir arquivo para ler texto
FILE *arquivo = fopen ( filename, "rt" );

fscanf ( arquivo, "%d", &y );
while ( x < maximo && ! feof (arquivo))
    {
    // Incluir valor no array se par e positivo
    if ( y > 0 && y % 2 == 0)
	{
    	array [n_pares] = y;
	// Aumentar n_pares
	n_pares = n_pares + 1;
	}
    // Ler valor do arquivo
    fscanf ( arquivo, "%d", &y );
    // Mudar x para progredir
    x = x + 1;
    }
    
 // fechar arquivo 
    fclose ( arquivo );
 // retornar a quantidade lida de pares
    return ( n_pares );
}

void metodo_0812 ( void )
{
// Dados
int n_pares = 0, maximo = 0;

// Identificacao do metodo
println ( "Metodo 0812: " );
linhasvazias ( );


do {
maximo = readint ("Numero maximo a ser lido = ");
   } while ( maximo <= 0);

int array [maximo];

n_pares = read_array_positivospares_file ( "Dados02.txt", array, maximo );
getchar ();

fprint_column_int_array ( "Resultado02.txt", array, n_pares);
// show_int_array ( array, n_pares );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int valoraleatorio ( int limite_menor, int limite_maior)
{
// Dados
int valor = 0;

do
    {
    valor = rand () % limite_maior;
    }
while ( valor < limite_menor);
return (valor);
}


void metodo_0813 ( void )
{
// Dados
int tamanho = 0, x = 0, limite_maior = 0, limite_menor = 0;
FILE *arquivo_resultado = NULL;


// Identificacao do metodo
println ( "Metodo 0813: " );
linhasvazias ( );


// Acoes

// Ler tamanho do arranjo
do {
tamanho = readint ("Determine o tamanho do arranjo: "); }
while ( tamanho <= 0 );
int array [tamanho];


// Ler limites do arranjo (Para teste)
/*
limite_menor = readint ("Determine o menor valor para os elementos do arranjo: ");
do {
limite_maior = readint ("Determine o maior valor para os elementos do arranjo: ");}
while ( limite_maior < limite_maior );
*/
// Determinar limites do arranjo
limite_menor = rand () % 25 + 1;
do {
limite_maior = rand () % 175;}
while ( limite_maior < limite_maior );

arquivo_resultado = fopen ("Resultado03.txt", "wt");
fprintf (arquivo_resultado, "Numero de elementos no arranjo: %d. Limites (%d,%d)", tamanho, limite_menor, limite_maior);
// Determinar valores do arranjo
for ( x = 0; x < tamanho; x = x + 1)
    {
    array [x] = valoraleatorio ( limite_menor, limite_maior);
    fprintf (arquivo_resultado, "\n[%d]: %d", x, array [x]);
    }


fclose (arquivo_resultado);
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int array_menorimpar ( int array [], int tamanho )
{
int x = 0, y = 0, n = 0;

// Ler ate achar valor impar
    while (y % 2 == 0)
    {
    // Ler valor do array
    y = array [x];
    
    x = x + 1;
    n = n + 1;
    }


for (x = n; x < tamanho ; x = x + 1)
    {
    // Ler valor do array se menor que o atual
    if ( array [x] < y && array [x] % 2 == 1)
	{
    	y = array [x];
	}
    }

// Retornar valor
return ( y );
}


void metodo_0814 ( void )
{
// Dados
int maximo = 0, menor_impar = 0, tamanho = 0;;

// Identificacao do metodo
println ( "Metodo 0814: " );
linhasvazias ( );

// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);


// Definir arquivo com tamanho maximo
int array [maximo];


// Ler do arquivo
tamanho = n_fscan_int_array ( "Dados04.txt", array, maximo );

// Achar menor par
menor_impar = array_menorimpar ( array, tamanho );

// Mostrar menor par
showint ("Menor impar do conjunto = ", menor_impar);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int array_maiorimpar ( int array [], int tamanho )
{
int x = 0, y = 0, n = 0;

// Ler ate achar valor impar
    while (y % 2 == 0)
    {
    // Ler valor do array
    y = array [x];
    
    x = x + 1;
    n = n + 1;
    }


for (x = n; x < tamanho ; x = x + 1)
    {
    // Ler valor do array se maior que o atual
    if ( array [x] > y && array [x] % 2 == 1)
	{
    	y = array [x];
	}
    }

// Retornar valor
return ( y );
}


void metodo_0815 ( void )
{
// Dados
int maximo = 0, maior_impar = 0, tamanho = 0;

// Identificacao do metodo
println ( "Metodo 0815: " );
linhasvazias ( );

// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);


// Definir arquivo com tamanho maximo
int array [maximo];


// Ler do arquivo
tamanho = n_fscan_int_array ( "Dados05.txt", array, maximo );

// Achar menor par
maior_impar = array_maiorimpar ( array, tamanho );

// Mostrar menor par
showint ("Maior impar do conjunto = ", maior_impar);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



double array_media ( int array [], int tamanho)
{
// Dados
    int x = 0, y = 0, soma = 0;
    double media = 0;

for (x = 0; x <= tamanho-1 ; x = x + 1)
    {
    y = array [x];
    soma = soma + y;
    }

// Calcular media
media = (soma * 1.0) / (tamanho * 1.0);

return ( media );
}


void metodo_0816 ( void )
{
// Dados
int maximo = 0, tamanho = 0, x = 0, x1 = 0, x2 = 0, y = 0;
double media = 0;
FILE * arquivo_maiormedia = NULL;
FILE * arquivo_menorigualmedia = NULL;

// Identificacao do metodo
println ( "Metodo 0816: " );
linhasvazias ( );


// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);

// Definir arquivo com tamanho maximo
int array [maximo];


// Ler do arquivo
tamanho = n_fscan_int_array ( "Dados06.txt", array, maximo );


// Achar media
media = array_media ( array, tamanho );

// Mostrar media
showdouble ("Media do conjunto = ", media);


// Separar valores entre arquivos
// Abrir arquivos para gravar texto
    arquivo_maiormedia = fopen ( "Resultado06_Maiores.txt", "wt" );
    arquivo_menorigualmedia = fopen ( "Resultado06_Menores.txt", "wt" );

// Texto inicial
    fprintf (arquivo_maiormedia, "Numeros maiores que %lf", media);
    fprintf (arquivo_menorigualmedia, "Numeros menores ou iguais a %lf", media);

for (x = 0; x < tamanho ; x = x + 1)
    {
    // Ler valor do array
    y = array [x];
    // Testar valor lido para determinar para qual arquivo deve ir
    if ( y <= media )
	{
    	fprintf (arquivo_menorigualmedia, "\n[%d] _ %d: %d", x, x1, y);
	x1 = x1 + 1;
	}
    else
	{
    	fprintf (arquivo_maiormedia, "\n[%d] _ %d: %d", x, x2, y);
	x2 = x2 + 1;
	}
    }
    
// Fechas arquivos
    fclose ( arquivo_maiormedia );
    fclose ( arquivo_menorigualmedia );


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int array_decrescente ( int array [ ], int tamanho )
{
// Dados
    int decrescente = 0, x = 1, y = 0;
    
y = array [0];

while ( x <= tamanho-1 )
    {
    if ( y < array [x])
	{
	decrescente = 1;
	}
    y = array [x];
    x = x + 1;
    }

return ( decrescente );
}


void metodo_0817 ( void )
{
// Dados
int decrescente = 0;


// Identificacao do metodo
println ( "Metodo 0817: " );
linhasvazias ( );


// Determinacao do array
//int array [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//int array [10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int array [10] = {10, 9, 8, 7, 5, 6, 4, 3, 2, 1};
int tamanho = 10;


// Acoes 
decrescente = array_decrescente (array, tamanho);

//
if ( decrescente == 1 )
    {
    println ("O arranjo nao esta ordenado em ordem decrescente");
    }
else
    {
    println ("O arranjo esta ordenado em ordem decrescente");
    }

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int valueinarray ( int value, int array [], int posicao_inicial, int tamanho)
{
// Dados
int procura = 0, x = 0;


for ( x = posicao_inicial; x < tamanho; x = x + 1 )
{
    if ( array [x] == value )
	{
	procura = 1;
	}
}

return ( procura );
}


void metodo_0818 ( void )
{
// Dados
int tamanho = 0, maximo = 0, valor = 0, posicao = 0, procura = 0;

// Identificacao do metodo
println ( "Metodo 0818: " );
linhasvazias ( );


// Acoes

// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);

int array [maximo];

tamanho = n_fscan_int_array ( "Dados08.txt", array, maximo );

valor = readint ("Digite o valor a ser procurado no arranjo: ");
posicao = readint ("Digite a partir de qual posicao deve ser iniciada a busca: ");

procura = valueinarray ( valor, array, posicao, tamanho );

linhavazia ();
if (procura == 1)
    {
    println ("O valor pode ser encontrado no arranjo");
    }
else
    {
    println ("O valor nao pode ser encontrado no arranjo");
    }


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void valueinarray_position ( int value, int array [], int posicao_valor [], int posicao_inicial, int tamanho)
{
// Dados
int x = 0, n = 0;

posicao_valor [0] = -1;
for ( x = posicao_inicial; x < tamanho; x = x + 1 )
{
    if ( array [x] == value )
	{
	posicao_valor [n] = x;
	n = n + 1;
	}
}
posicao_valor [n] = 0;

}


void metodo_0819 ( void )
{
// Dados
int tamanho = 0, maximo = 0, valor = 0, posicao = 0, x = 0;

// Identificacao do metodo
println ( "Metodo 0819: " );
linhasvazias ( );


// Acoes

// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);
int array [maximo];


tamanho = n_fscan_int_array ( "Dados09.txt", array, maximo );
int posicao_valor [tamanho];


valor = readint ("Digite o valor a ser procurado no arranjo: ");
posicao = readint ("Digite a partir de qual posicao deve ser iniciada a busca: ");


valueinarray_position ( valor, array, posicao_valor, posicao, tamanho );

linhavazia ();
if (posicao_valor [0] == -1)
    {
    println ("O valor pode ser encontrado no arranjo");
    }
else
    {
    println ("Posicoes nas quais pode se encontrar o valor: ");
    printf ("[%d]", posicao_valor [x]);
    x = 1;
    while ( posicao_valor [x] != 0 )
	{
	printf (", [%d]", posicao_valor [x]);
        x = x + 1;
	}
    }


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




int valueinarray_quant ( int value, int array [], int posicao_inicial, int tamanho)
{
// Dados
int quantidade = 0, x = 0;


for ( x = posicao_inicial; x < tamanho; x = x + 1 )
{
    if ( array [x] == value )
	{
	quantidade = quantidade + 1;
	}
}

return ( quantidade );
}

void metodo_0820 ( void )
{
// Dados
int tamanho = 0, maximo = 0, valor = 0, posicao = 0, quantidade = 0;

// Identificacao do metodo
println ( "Metodo 0820: " );
linhasvazias ( );


// Acoes

// Ler valor maximo para o arranjo
do {
maximo = readint ("Numero maximo de elementos a serem lidos do arquivo = ");
   } while ( maximo <= 0);

int array [maximo];

tamanho = n_fscan_int_array ( "Dados10.txt", array, maximo );

valor = readint ("Digite o valor a ser procurado no arranjo: ");
posicao = readint ("Digite a partir de qual posicao deve ser iniciada a busca: ");

quantidade = valueinarray_quant ( valor, array, posicao, tamanho );

linhavazia ();
printf ("O valor pode ser encontrado %d vez(es)", quantidade);


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
println ( "1 - Metodo 0811" );
println ( "2 - Metodo 0812" );
println ( "3 - Metodo 0813" );
println ( "4 - Metodo 0814" );
println ( "5 - Metodo 0815" );
println ( "6 - Metodo 0816" );
println ( "7 - Metodo 0817" );
println ( "8 - Metodo 0818" );
println ( "9 - Metodo 0819" );
println ( "10 - Metodo 0820" );
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
	metodo_0811 ();
	break;
case 2:
	metodo_0812 ();
	break;
case 3:
	metodo_0813 ();
	break;
case 4:
	metodo_0814 ();
	break;
case 5:
	metodo_0815 ();
	break;
case 6:
	metodo_0816 ();
	break;
case 7:
	metodo_0817 ();
	break;
case 8:
	metodo_0818 ();
	break;
case 9:
	metodo_0819 ();
	break;
case 10:
	metodo_0820 ();
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



