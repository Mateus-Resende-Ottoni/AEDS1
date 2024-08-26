
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>



// Modulos


// Identificacoes do autor
void autor ()
{
    printf ( "\n%s\n", "Matricula: 855842" );
    printf ( "%s\n", "Nome: Mateus Resende Ottoni" );
    printf ( "\n" );
}


// Texto com espacamento de linha ao final
void println ( char *text)
{
    printf ( "%s\n", text);
}


// Texto com espacamento de linha no inicio e no final
void printlns ( char *text)
{
    printf ( "\n%s\n", text);
}


// Uma linha vazia
void linhavazia ( void )
{
    printf ( "\n" );
}


// Tres linhas vazias
void linhasvazias ( void )
{
    printf ( "\n" );
    printf ( "\n" );
    printf ( "\n" );
}



// Texto com linha e getchar
void pauseln ( char *text)
{
    printf ( "%s\n", text);
    getchar ();
}



// Ler valor inteiro
int readint ( char *text )
{
int x = 0;

    printf ( "%s", text);
    scanf ( "%d", &x);
    getchar ();
    return ( x );
}



// Mostrar valor inteiro
void showint ( char *texto, int valor )
{
    printf ( "\n%s%d\n", texto, valor );
}



// Ler valor double
double readdouble ( char *text )
{
double x = 0;

    printf ( "%s", text);
    scanf ( "%lf", &x);
    getchar ();
    return ( x );
}



// Mostrar valor double
void showdouble ( char *texto, double valor )
{
    printf ( "\n%s%lf\n", texto, valor );
}



// Ler valor boolean
bool readbool ( char *text )
{
int x = 0;

    printf ( "%s", text);
    scanf ( "%d", &x);
    getchar ();
    return ( x != 0 );
}



// Mostrar valor boolean
void showbool ( char *texto, int valor )
{
    printf ( "\n%s%d\n", texto, valor );
}



// Ler caracter
char readchar ( char *text )
{
char x = '0';
char y = '0';

    printf ( "%s", text);

    x = getchar ();
    do
    {
        y = getchar ();
    }
    while ( y != '\n' );
    
    return ( x );
}



// Mostrar caracter
void showchar ( char *texto, char caractere )
{
    printf ( "\n%s%c\n", texto, caractere );
}


/*			(É para colocar no programa, não referenciar)
// Ler palavra		(Atualmente desabilitado pois não funciona bem)
char* readpalavra ( char *texto )
{
char palavra [81];
int tamanho = 0;


printf ( "\n%s", "Digite um texto: " );
fgets (palavra, 81, stdin);


tamanho = strlen (palavra) - 1;
palavra [tamanho] = '\0';

return ( palavra );
}
*/
