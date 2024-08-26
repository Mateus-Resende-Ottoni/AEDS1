
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
// Ler string		(Atualmente desabilitado pois não funciona bem)
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




// Mostrar string
void showstring ( char *texto, char *string )
{
    printf ( "\n%s%s\n", texto, string );
}






// Definir quantidade de digitos pares em uma string
int comparacao_pares_quant ( char *texto)
{
// Definicao de dados
    char c;
    int c_digitos = 0;
    int tamanho = 0;
    int contagem = 0;
    int digitos = 0;
    int n_par = 0;


// Analise de cada letra
    n_par = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= '1' && c <= '9' )
            {
            digitos = digitos + 1;
	    c_digitos = (int) c;
	    if ( (c_digitos % 2 == 0) || ( c_digitos == 0 ) )
            	{
                n_par = n_par + 1;
                }
            }
        }

return ( n_par );
}





// Comparação dos caracteres em uma string a um caractere maiusculo
int comparacao_1caracteremaiusculo_quant ( char *texto, char x )
{
// Definicao de dados
    char c;
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    int maiores_x = 0;


// Analise de cada letra
    maiores_x = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c > x)
                {
                maiores_x = maiores_x + 1;
                }
            }
        }


return ( maiores_x );
}





// Comparação dos caracteres em uma string a um caractere maiusculo e um caractere minusculo
int comparacao_2caracteremaiusculominusculo_quant ( char *texto, char maiuscula, char minuscula)
{
// Definicao de dados
    char c;
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    int minusculas = 0;
    int menores_X = 0;
    int menores_y = 0;
    int menores_Xy = 0;


// Analise de cada letra
    menores_X = 0;
    menores_y = 0;
    tamanho = strlen (texto);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c < maiuscula)
                {
                menores_X = menores_X + 1;
                }
            }
        if (c >= 'a' && c <= 'z' )
            {
            minusculas = minusculas + 1;
            if (c < minuscula)
                {
                menores_y = menores_y + 1;
                }
            }
        }

// Somar valores
menores_Xy = menores_X + menores_y;


return ( menores_Xy );
}





// Comparação dos caracteres em uma string a um caractere maiusculo
void comparacao_1caracteremaiusculo_string ( char *texto, char x )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    char c_maiores_x [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_maiores_x [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c > x)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_maiores_x, strcat (c_convertido, espaco));
                }
            }
        }
linhavazia ();
printf ("\nCaracteres maiores que L: %s", c_maiores_x );
}




// Comparação dos caracteres em uma string a um caractere maiusculo e um minusculo
void comparacao_2caracteremaiusculominusculo_string ( char *texto, char maiusculo, char minusculo )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_menores_xy [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_menores_xy [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            if (c < maiusculo)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_menores_xy, strcat (c_convertido, espaco));
                }
            }
        if (c >= 'a' && c <= 'z' )
            {
            if (c < minusculo)
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_menores_xy, strcat (c_convertido, espaco));
                }
            }
        }
linhavazia ();
printf ("\nCaracteres menores que '%c' e '%c': %s", maiusculo, minusculo, c_menores_xy );
}



// Certificar caracteres nao alfanumericos em uma string
void comparacao_naoalfanumerico_string ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_n_alfanumericos [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_n_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if (! ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) ) )
            {
                sprintf (c_convertido, "%c", c);
                strcat (c_n_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres nao alfanumericos: %s", c_n_alfanumericos );
}





// Certificar caracteres alfanumericos em uma string
void comparacao_alfanumerico_string ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_alfanumericos [80];
    char *espaco = " ";


// Analise de cada letra
    tamanho = strlen (texto);
    c_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if  ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) )
            {
                sprintf (c_convertido, "%c", c);
                strcat (c_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres alfanumericos: %s", c_alfanumericos );
}




// Certificar caracteres alfanumericos em uma string
int comparacao_alfanumerico_quantstring ( char *texto )
{
// Definicao de dados
    char c;
    char c_convertido [80];
    int tamanho = 0;
    int contagem = 0;
    char c_alfanumericos [80];
    char *espaco = " ";
    int n_alfanumericos = 0;


// Analise de cada letra
    tamanho = strlen (texto);
    n_alfanumericos = 0;
    c_alfanumericos [0] = '\0';
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = texto [contagem];
        if  ( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ) || (c >= '1' && c <= '9' ) )
            {
		n_alfanumericos = n_alfanumericos + 1;
                sprintf (c_convertido, "%c", c);
                strcat (c_alfanumericos, strcat (c_convertido, espaco));
            }
        }
linhavazia ();
printf ("\nCaracteres alfanumericos: %s", c_alfanumericos );
printf ("\nQuantidade de simbolos alfanumericos: %d\n", n_alfanumericos );

return ( n_alfanumericos );
}


