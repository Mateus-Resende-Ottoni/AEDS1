

#ifndef _MYLIBPLUS_HPP_
#define _MYLIBPLUS_HPP_

// Bibliotecas

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>

#include <iomanip>

#include <string>

#include <fstream>


#define null nullptr


void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl << std::endl;
}


void linhavazia()
{
   std::cout << std::endl;
}



/* Int - inicio */

int readint(std::string texto)
{
   // Dados
   int valor = 0;

   std::cout << texto;
   std::cin >> valor;

   return (valor);
}

/* Int - fim */



/* Char - inicio */

// Inserir caractere ao final
char* char_push_back ( char *s, char c )
{
 // Criar apontador para o caractere a ser inserido
 char * apontador = (char*) calloc (1, sizeof(char));
 apontador[0] = c;

 int x = 0;
 while ( s[x] )
    {
    x = x  + 1;
    }
 s[x] = *apontador;
 
 
 return ( s );
}

// Retirar caractere ao final
char* char_pop_back ( char *s )
{

 int x = 0;
 while ( s[x] )
    {
    x = x  + 1;
    }
 s[x - 1] = '\0';
 
 
 return ( s );
}

// Inserir caracter ao inicio
char* char_push_front ( char *s, char c )
{
char storage = 0;
int x = 0;

 while ( s[x] )
    {
    x = x  + 1;
    }
 
while ( x > 0 )
   {
   s[x] = s[x - 1];
   x = x - 1;
   }

s[0] = c;
 
 return ( s );
}

// Retirar caractere ao inicial
char* char_pop_front ( char *s )
{

 int x = 0;
 while ( s[x] )
    {
    s[x] = s[x + 1];
    x = x  + 1;
    }
 s[x - 1] = '\0';
 
 
 return ( s );
}

// Inserir caracter ao inicio
char* char_push_mid ( char *s, char c )
{
char storage = 0;
int x = 0, y = 0;

 while ( s[x] )
    {
    x = x  + 1;
    }
y = x / 2;
 
while ( x > y )
   {
   s[x] = s[x - 1];
   x = x - 1;
   }

s[y] = c;
 

 return ( s );
}

// Retirar caractere ao inicial
char* char_pop_mid ( char *s )
{
int x = 0, y = 0;

 while ( s[x] )
    {
    x = x  + 1;
    }
y = x / 2;

x = y;
 while ( s[x] )
    {
    s[x] = s[x + 1];
    x = x  + 1;
    }
 s[x - 1] = '\0';
 
 
 return ( s );
}

// Inserir caracter em posicao especifica
char* char_insert ( char *s, char c, int index)
{
char storage = 0;
int x = 0;

 while ( s[x] )
    {
    x = x  + 1;
    }
 
while ( x > index )
   {
   s[x] = s[x - 1];
   x = x - 1;
   }

s[index] = c;
 

 return ( s );
}

// Retirar caractere em posicao especifica
char* char_remove ( char *s, int index )
{
int x = index;

 while ( s[x] )
    {
    s[x] = s[x + 1];
    x = x  + 1;
    }
 s[x - 1] = '\0';
 
 
 return ( s );
}

// Procurar primeira ocorrencia de um simbolo
char* char_find ( char *s, char c )
{
bool found = false;
int x = 0, y = 0, z = 0;

 while ( s[y] )
    {
    if ( s[y] == c) { found = true; }
    else if ( found == false ) { x = x + 1; }
    y = y  + 1;
    }

if ( found == true )
    {
    while ( z < x )
	{
	s = char_pop_front ( s );
	z = z + 1;
	}
    return ( s );
    }
else
    {
    return ( null );
    }

}

// Separar caracteres ate achar determinado delimitador
char* char_separate ( char *s, char delimitador )
{
bool found = false;
int x = 0, y = 0, z = 0;

 while ( s[y] )
    {
    if ( s[y] == delimitador) { found = true; }
    else if ( found == false ) { x = x + 1; }
    y = y  + 1;
    }

if ( found == true )
    {
    while ( z < (x * 2) )
	{
	s = char_insert ( s, ' ', z + 1 );
	z = z + 2;
	}
    return ( s );
    }
else
    {
    return ( null );
    }

}


/* Char - fim */

#endif





