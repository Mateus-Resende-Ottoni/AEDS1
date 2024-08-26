

#ifndef _MYLIBPLUSARRAY_HPP_
#define _MYLIBPLUSARRAY_HPP_

// Bibliotecas

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>

#include <iomanip>

#include <string>

#include <fstream>



// Bibliotecas proprias
#include "MyLibPlus.hpp"



class MyString // : public Erro 
{
public:
int string_length;
std::string string_text;


// Construtores
/*
MyString ( std::string string_origin )
{
 this->string_length = string_origin.length();

 this->string_text = string_origin;

 this->string_text = (char*) calloc(this->string_length, sizeof(char));
 for ( int x = 0; x < this->string_length; x = x + 1)
     {
      this->string_text[x] = string_origin[x];
     }
}
*/

MyString ( )
{
   std::string texto;

   // Declarar string
   std::cout << std::endl << "Defina a string: ";
   std::getline(std::cin, texto);

   this->string_length = texto.length();
   this->string_text = texto;

}




/*
     Funcao para obter mensagem 
     relativa ao código de erro. 
     @return mensagem sobre o erro 
    
    std::string getErroMsg ( ) 
    { 
 
       return ( NO_ERROR ); // COMPLETAR A DEFINICAO 
 
    } // end getErroMsg ( )
*/



// Funções gerais


/**  
     Funcao para converter conteudo para valor inteiro, se possivel. 
     @return valor inteiro equivalente, se valido; 
                   (-1), caso contrario 
  */ 
int getInt ( )
	{
	 bool AllNumbers = true;
	 int valor = -1, x = 0;
	 
	 for ( x = 0; x < this->string_length; x = x + 1 )
	   {
	    if ( !( this->string_text[x] >= '0' && this->string_text[x] <= '9' ) )
		{ AllNumbers = false; }
	   }
	 if ( AllNumbers == true )
	   {
	    valor = std::stoi ( this->string_text );
	   }
		
	 return ( valor );
	}

/**  
     Funcao para converter conteudo para valor inteiro, se possivel. 
     @return valor inteiro equivalente, se valido; 
                   (-1), caso contrario 
  */ 
double getDouble ( )
	{
	 bool AllNumbers = true;
	 double valor = 0.0, x = 0;
	 
	 for ( x = 0; x < this->string_length; x = x + 1 )
	   {
	    if ( !(( this->string_text[x] >= '0' && this->string_text[x] <= '9' ) ||
		 ( this->string_text[x] == '.' )) )
		{ AllNumbers = false; }
	   }
	 if ( AllNumbers == true )
	   {
	    valor = std::stod( this->string_text );
	   }
		
	 return ( valor );
	}



/**  
     Funcao para converter conteudo para valor lógico, se possivel. 
     Nota: Considerar válidos: { true, false, T, F, 0, 1 }  
     @return valor logico equivalente, se valido; 
                   false, caso contrario 
  */ 
bool getBoolean ()
{
bool boolean = false;

if ( this->string_text == "T" ||  this->string_text == "1" ||  this->string_text == "true" )
   {
    boolean = true;
   }

if ( this->string_text == "F" || this->string_text == "0" || this->string_text == "false" )
   {
    boolean = false;
   }

 return (boolean);
}



/**  
     Funcao para verificar se o parametro esta’ contido no conteudo. 
     @return true , se contiver (em qualquer posicao); 
                   false, caso contrario 
  */ 
bool contains ( std::string parametro )
{
 bool contain = false;
 int param_size = parametro.length();

  for ( int x = 0; x < (this->string_length - (param_size - 1) ) ; x = x + 1)
    {
    if ( this->string_text.substr (x, param_size) == parametro)
      { contain = true; }
    }

 return ( contain );
}



/**  
     Funcao para converter letras para maiusculas. 
     @return valor equivalente em maiusculas, se houver; 
                   o proprio valor, caso contrario 
  */ 
std::string toUpperCase ()
{
 for ( int x = 0; x < this->string_length; x = x + 1)
    {
    if ( this->string_text[x] >= 'a' && this->string_text[x] <= 'z' )
      {
	 if ( this->string_text[x] == 'a' ) { this->string_text[x] = 'A'; }
	 if ( this->string_text[x] == 'b' ) { this->string_text[x] = 'B'; }
	 if ( this->string_text[x] == 'c' ) { this->string_text[x] = 'C'; }
	 if ( this->string_text[x] == 'd' ) { this->string_text[x] = 'D'; }
	 if ( this->string_text[x] == 'e' ) { this->string_text[x] = 'E'; }
	 if ( this->string_text[x] == 'f' ) { this->string_text[x] = 'F'; }
	 if ( this->string_text[x] == 'g' ) { this->string_text[x] = 'G'; }
	 if ( this->string_text[x] == 'h' ) { this->string_text[x] = 'H'; }
	 if ( this->string_text[x] == 'i' ) { this->string_text[x] = 'I'; }
	 if ( this->string_text[x] == 'j' ) { this->string_text[x] = 'J'; }
	 if ( this->string_text[x] == 'k' ) { this->string_text[x] = 'K'; }
	 if ( this->string_text[x] == 'l' ) { this->string_text[x] = 'L'; }
	 if ( this->string_text[x] == 'm' ) { this->string_text[x] = 'M'; }
	 if ( this->string_text[x] == 'n' ) { this->string_text[x] = 'N'; }
	 if ( this->string_text[x] == 'o' ) { this->string_text[x] = 'O'; }
	 if ( this->string_text[x] == 'p' ) { this->string_text[x] = 'P'; }
	 if ( this->string_text[x] == 'q' ) { this->string_text[x] = 'Q'; }
	 if ( this->string_text[x] == 'r' ) { this->string_text[x] = 'R'; }
	 if ( this->string_text[x] == 's' ) { this->string_text[x] = 'S'; }
	 if ( this->string_text[x] == 't' ) { this->string_text[x] = 'T'; }
	 if ( this->string_text[x] == 'u' ) { this->string_text[x] = 'U'; }
	 if ( this->string_text[x] == 'v' ) { this->string_text[x] = 'V'; }
	 if ( this->string_text[x] == 'w' ) { this->string_text[x] = 'W'; }
	 if ( this->string_text[x] == 'x' ) { this->string_text[x] = 'X'; }
	 if ( this->string_text[x] == 'y' ) { this->string_text[x] = 'Y'; }
	 if ( this->string_text[x] == 'z' ) { this->string_text[x] = 'Z'; }
      }
    }

 return ( this->string_text );
}

/**  
     Funcao para converter letras para minusculas. 
     @return valor equivalente em minusculas, se houver; 
                   o proprio valor, caso contrario 
  */ 
std::string toLowerCase ()
{
 for ( int x = 0; x < this->string_length; x = x + 1)
    {
    if ( this->string_text[x] >= 'A' && this->string_text[x] <= 'Z' )
      {
	 if ( this->string_text[x] == 'A' ) { this->string_text[x] = 'a'; }
	 if ( this->string_text[x] == 'B' ) { this->string_text[x] = 'b'; }
	 if ( this->string_text[x] == 'C' ) { this->string_text[x] = 'c'; }
	 if ( this->string_text[x] == 'D' ) { this->string_text[x] = 'd'; }
	 if ( this->string_text[x] == 'E' ) { this->string_text[x] = 'e'; }
	 if ( this->string_text[x] == 'F' ) { this->string_text[x] = 'f'; }
	 if ( this->string_text[x] == 'G' ) { this->string_text[x] = 'g'; }
	 if ( this->string_text[x] == 'H' ) { this->string_text[x] = 'h'; }
	 if ( this->string_text[x] == 'I' ) { this->string_text[x] = 'i'; }
	 if ( this->string_text[x] == 'J' ) { this->string_text[x] = 'j'; }
	 if ( this->string_text[x] == 'K' ) { this->string_text[x] = 'k'; }
	 if ( this->string_text[x] == 'L' ) { this->string_text[x] = 'l'; }
	 if ( this->string_text[x] == 'M' ) { this->string_text[x] = 'm'; }
	 if ( this->string_text[x] == 'N' ) { this->string_text[x] = 'n'; }
	 if ( this->string_text[x] == 'O' ) { this->string_text[x] = 'o'; }
	 if ( this->string_text[x] == 'P' ) { this->string_text[x] = 'p'; }
	 if ( this->string_text[x] == 'Q' ) { this->string_text[x] = 'q'; }
	 if ( this->string_text[x] == 'R' ) { this->string_text[x] = 'r'; }
	 if ( this->string_text[x] == 'S' ) { this->string_text[x] = 's'; }
	 if ( this->string_text[x] == 'T' ) { this->string_text[x] = 't'; }
	 if ( this->string_text[x] == 'U' ) { this->string_text[x] = 'u'; }
	 if ( this->string_text[x] == 'V' ) { this->string_text[x] = 'v'; }
	 if ( this->string_text[x] == 'W' ) { this->string_text[x] = 'w'; }
	 if ( this->string_text[x] == 'X' ) { this->string_text[x] = 'x'; }
	 if ( this->string_text[x] == 'Y' ) { this->string_text[x] = 'y'; }
	 if ( this->string_text[x] == 'Z' ) { this->string_text[x] = 'z'; }
      }
    }

 return ( this->string_text );
}



/**  
     Funcao para trocar todas as ocorrencias de certo caractere por outro novo. 
     @return valor com substituicoes, se houver; 
                   o proprio valor, caso contrario 
  */ 
std::string replace_char ( char original, char novo )
{
 for ( int x = 0; x < this->string_length; x = x + 1)
    {
    if ( this->string_text[x] == original)
      { this->string_text[x] = novo; }
    }

 return ( this->string_text );
}



/**  
     Funcao para codificar o conteudo segundo a cifra de César. 
     @return valor equivalente codificado, se houver; 
                   o proprio valor, caso contrario 
  */ 
std::string encrypt ()
{
 // Dados
int chave = 3;
int valor = 0;

 for ( int x = 0; x < this->string_length; x = x + 1)
     {
     if ( this->string_text[x] >= 'a' && this->string_text[x] <= 'z' )
	{
	// Conversao letra para valor
	 if ( this->string_text[x] == 'a' ) { valor = 1; }
	 if ( this->string_text[x] == 'b' ) { valor = 2; }
	 if ( this->string_text[x] == 'c' ) { valor = 3; }
	 if ( this->string_text[x] == 'd' ) { valor = 4; }
	 if ( this->string_text[x] == 'e' ) { valor = 5; }
	 if ( this->string_text[x] == 'f' ) { valor = 6; }
	 if ( this->string_text[x] == 'g' ) { valor = 7; }
	 if ( this->string_text[x] == 'h' ) { valor = 8; }
	 if ( this->string_text[x] == 'i' ) { valor = 9; }
	 if ( this->string_text[x] == 'j' ) { valor = 10; }
	 if ( this->string_text[x] == 'k' ) { valor = 11; }
	 if ( this->string_text[x] == 'l' ) { valor = 12; }
	 if ( this->string_text[x] == 'm' ) { valor = 13; }
	 if ( this->string_text[x] == 'n' ) { valor = 14; }
	 if ( this->string_text[x] == 'o' ) { valor = 15; }
	 if ( this->string_text[x] == 'p' ) { valor = 16; }
	 if ( this->string_text[x] == 'q' ) { valor = 17; }
	 if ( this->string_text[x] == 'r' ) { valor = 18; }
	 if ( this->string_text[x] == 's' ) { valor = 19; }
	 if ( this->string_text[x] == 't' ) { valor = 20; }
	 if ( this->string_text[x] == 'u' ) { valor = 21; }
	 if ( this->string_text[x] == 'v' ) { valor = 22; }
	 if ( this->string_text[x] == 'w' ) { valor = 23; }
	 if ( this->string_text[x] == 'x' ) { valor = 24; }
	 if ( this->string_text[x] == 'y' ) { valor = 25; }
	 if ( this->string_text[x] == 'z' ) { valor = 26; }
	 
	// Uso da chave
	 valor = valor + chave;
	 if ( valor > 26 ) { valor = valor - 26; }
	
	// Conversao valor para letra
	 if ( valor == 1 ) { this->string_text[x] = 'a'; }
	 if ( valor == 2 ) { this->string_text[x] = 'b'; }
	 if ( valor == 3 ) { this->string_text[x] = 'c'; }
	 if ( valor == 4 ) { this->string_text[x] = 'd'; }
	 if ( valor == 5 ) { this->string_text[x] = 'e'; }
	 if ( valor == 6 ) { this->string_text[x] = 'f'; }
	 if ( valor == 7 ) { this->string_text[x] = 'g'; }
	 if ( valor == 8 ) { this->string_text[x] = 'h'; }
	 if ( valor == 9 ) { this->string_text[x] = 'i'; }
	 if ( valor == 10 ) { this->string_text[x] = 'j'; }
	 if ( valor == 11 ) { this->string_text[x] = 'k'; }
	 if ( valor == 12 ) { this->string_text[x] = 'l'; }
	 if ( valor == 13 ) { this->string_text[x] = 'm'; }
	 if ( valor == 14 ) { this->string_text[x] = 'n'; }
	 if ( valor == 15 ) { this->string_text[x] = 'o'; }
	 if ( valor == 16 ) { this->string_text[x] = 'p'; }
	 if ( valor == 17 ) { this->string_text[x] = 'q'; }
	 if ( valor == 18 ) { this->string_text[x] = 'r'; }
	 if ( valor == 19 ) { this->string_text[x] = 's'; }
	 if ( valor == 20 ) { this->string_text[x] = 't'; }
	 if ( valor == 21 ) { this->string_text[x] = 'u'; }
	 if ( valor == 22 ) { this->string_text[x] = 'v'; }
	 if ( valor == 23 ) { this->string_text[x] = 'w'; }
	 if ( valor == 24 ) { this->string_text[x] = 'x'; }
	 if ( valor == 25 ) { this->string_text[x] = 'y'; }
	 if ( valor == 26 ) { this->string_text[x] = 'z'; }
	}
     if ( this->string_text[x] >= 'A' && this->string_text[x] <= 'Z' )
	{
	// Conversao letra para valor
	 if ( this->string_text[x] == 'A' ) { valor = 1; }
	 if ( this->string_text[x] == 'B' ) { valor = 2; }
	 if ( this->string_text[x] == 'C' ) { valor = 3; }
	 if ( this->string_text[x] == 'D' ) { valor = 4; }
	 if ( this->string_text[x] == 'E' ) { valor = 5; }
	 if ( this->string_text[x] == 'F' ) { valor = 6; }
	 if ( this->string_text[x] == 'G' ) { valor = 7; }
	 if ( this->string_text[x] == 'H' ) { valor = 8; }
	 if ( this->string_text[x] == 'I' ) { valor = 9; }
	 if ( this->string_text[x] == 'J' ) { valor = 10; }
	 if ( this->string_text[x] == 'K' ) { valor = 11; }
	 if ( this->string_text[x] == 'L' ) { valor = 12; }
	 if ( this->string_text[x] == 'M' ) { valor = 13; }
	 if ( this->string_text[x] == 'N' ) { valor = 14; }
	 if ( this->string_text[x] == 'O' ) { valor = 15; }
	 if ( this->string_text[x] == 'P' ) { valor = 16; }
	 if ( this->string_text[x] == 'Q' ) { valor = 17; }
	 if ( this->string_text[x] == 'R' ) { valor = 18; }
	 if ( this->string_text[x] == 'S' ) { valor = 19; }
	 if ( this->string_text[x] == 'T' ) { valor = 20; }
	 if ( this->string_text[x] == 'U' ) { valor = 21; }
	 if ( this->string_text[x] == 'V' ) { valor = 22; }
	 if ( this->string_text[x] == 'W' ) { valor = 23; }
	 if ( this->string_text[x] == 'X' ) { valor = 24; }
	 if ( this->string_text[x] == 'Y' ) { valor = 25; }
	 if ( this->string_text[x] == 'Z' ) { valor = 26; }
	 
	// Uso da chave
	 valor = valor + chave;
	 if ( valor > 26 ) { valor = valor - 26; }
	
	// Conversao valor para letra
	 if ( valor == 1 ) { this->string_text[x] = 'A'; }
	 if ( valor == 2 ) { this->string_text[x] = 'B'; }
	 if ( valor == 3 ) { this->string_text[x] = 'C'; }
	 if ( valor == 4 ) { this->string_text[x] = 'D'; }
	 if ( valor == 5 ) { this->string_text[x] = 'E'; }
	 if ( valor == 6 ) { this->string_text[x] = 'F'; }
	 if ( valor == 7 ) { this->string_text[x] = 'G'; }
	 if ( valor == 8 ) { this->string_text[x] = 'H'; }
	 if ( valor == 9 ) { this->string_text[x] = 'I'; }
	 if ( valor == 10 ) { this->string_text[x] = 'J'; }
	 if ( valor == 11 ) { this->string_text[x] = 'K'; }
	 if ( valor == 12 ) { this->string_text[x] = 'L'; }
	 if ( valor == 13 ) { this->string_text[x] = 'M'; }
	 if ( valor == 14 ) { this->string_text[x] = 'N'; }
	 if ( valor == 15 ) { this->string_text[x] = 'O'; }
	 if ( valor == 16 ) { this->string_text[x] = 'P'; }
	 if ( valor == 17 ) { this->string_text[x] = 'Q'; }
	 if ( valor == 18 ) { this->string_text[x] = 'R'; }
	 if ( valor == 19 ) { this->string_text[x] = 'S'; }
	 if ( valor == 20 ) { this->string_text[x] = 'T'; }
	 if ( valor == 21 ) { this->string_text[x] = 'U'; }
	 if ( valor == 22 ) { this->string_text[x] = 'V'; }
	 if ( valor == 23 ) { this->string_text[x] = 'W'; }
	 if ( valor == 24 ) { this->string_text[x] = 'X'; }
	 if ( valor == 25 ) { this->string_text[x] = 'Y'; }
	 if ( valor == 26 ) { this->string_text[x] = 'Z'; }
	}
     }
return ( this->string_text );
}

/**  
     Funcao para decodificar o conteudo previamente cifrado pela funcao acima. 
     @return valor equivalente decodificado, se houver; 
                   o proprio valor, caso contrario 
  */ 
std::string decrypt ( )
{
 // Dados
int chave = 3;
int valor = 0;

 for ( int x = 0; x < this->string_length; x = x + 1)
    {
     if ( this->string_text[x] >= 'a' && this->string_text[x] <= 'z' )
	{
	// Conversao letra para valor
	 if ( this->string_text[x] == 'a' ) { valor = 1; }
	 if ( this->string_text[x] == 'b' ) { valor = 2; }
	 if ( this->string_text[x] == 'c' ) { valor = 3; }
	 if ( this->string_text[x] == 'd' ) { valor = 4; }
	 if ( this->string_text[x] == 'e' ) { valor = 5; }
	 if ( this->string_text[x] == 'f' ) { valor = 6; }
	 if ( this->string_text[x] == 'g' ) { valor = 7; }
	 if ( this->string_text[x] == 'h' ) { valor = 8; }
	 if ( this->string_text[x] == 'i' ) { valor = 9; }
	 if ( this->string_text[x] == 'j' ) { valor = 10; }
	 if ( this->string_text[x] == 'k' ) { valor = 11; }
	 if ( this->string_text[x] == 'l' ) { valor = 12; }
	 if ( this->string_text[x] == 'm' ) { valor = 13; }
	 if ( this->string_text[x] == 'n' ) { valor = 14; }
	 if ( this->string_text[x] == 'o' ) { valor = 15; }
	 if ( this->string_text[x] == 'p' ) { valor = 16; }
	 if ( this->string_text[x] == 'q' ) { valor = 17; }
	 if ( this->string_text[x] == 'r' ) { valor = 18; }
	 if ( this->string_text[x] == 's' ) { valor = 19; }
	 if ( this->string_text[x] == 't' ) { valor = 20; }
	 if ( this->string_text[x] == 'u' ) { valor = 21; }
	 if ( this->string_text[x] == 'v' ) { valor = 22; }
	 if ( this->string_text[x] == 'w' ) { valor = 23; }
	 if ( this->string_text[x] == 'x' ) { valor = 24; }
	 if ( this->string_text[x] == 'y' ) { valor = 25; }
	 if ( this->string_text[x] == 'z' ) { valor = 26; }
	 
	// Uso da chave
	 valor = valor - chave;
	 if ( valor < 1 ) { valor = valor + 26; }
	
	// Conversao valor para letra
	 if ( valor == 1 ) { this->string_text[x] = 'a'; }
	 if ( valor == 2 ) { this->string_text[x] = 'b'; }
	 if ( valor == 3 ) { this->string_text[x] = 'c'; }
	 if ( valor == 4 ) { this->string_text[x] = 'd'; }
	 if ( valor == 5 ) { this->string_text[x] = 'e'; }
	 if ( valor == 6 ) { this->string_text[x] = 'f'; }
	 if ( valor == 7 ) { this->string_text[x] = 'g'; }
	 if ( valor == 8 ) { this->string_text[x] = 'h'; }
	 if ( valor == 9 ) { this->string_text[x] = 'i'; }
	 if ( valor == 10 ) { this->string_text[x] = 'j'; }
	 if ( valor == 11 ) { this->string_text[x] = 'k'; }
	 if ( valor == 12 ) { this->string_text[x] = 'l'; }
	 if ( valor == 13 ) { this->string_text[x] = 'm'; }
	 if ( valor == 14 ) { this->string_text[x] = 'n'; }
	 if ( valor == 15 ) { this->string_text[x] = 'o'; }
	 if ( valor == 16 ) { this->string_text[x] = 'p'; }
	 if ( valor == 17 ) { this->string_text[x] = 'q'; }
	 if ( valor == 18 ) { this->string_text[x] = 'r'; }
	 if ( valor == 19 ) { this->string_text[x] = 's'; }
	 if ( valor == 20 ) { this->string_text[x] = 't'; }
	 if ( valor == 21 ) { this->string_text[x] = 'u'; }
	 if ( valor == 22 ) { this->string_text[x] = 'v'; }
	 if ( valor == 23 ) { this->string_text[x] = 'w'; }
	 if ( valor == 24 ) { this->string_text[x] = 'x'; }
	 if ( valor == 25 ) { this->string_text[x] = 'y'; }
	 if ( valor == 26 ) { this->string_text[x] = 'z'; }
	}
     if ( this->string_text[x] >= 'A' && this->string_text[x] <= 'Z' )
	{
	// Conversao letra para valor
	 if ( this->string_text[x] == 'A' ) { valor = 1; }
	 if ( this->string_text[x] == 'B' ) { valor = 2; }
	 if ( this->string_text[x] == 'C' ) { valor = 3; }
	 if ( this->string_text[x] == 'D' ) { valor = 4; }
	 if ( this->string_text[x] == 'E' ) { valor = 5; }
	 if ( this->string_text[x] == 'F' ) { valor = 6; }
	 if ( this->string_text[x] == 'G' ) { valor = 7; }
	 if ( this->string_text[x] == 'H' ) { valor = 8; }
	 if ( this->string_text[x] == 'I' ) { valor = 9; }
	 if ( this->string_text[x] == 'J' ) { valor = 10; }
	 if ( this->string_text[x] == 'K' ) { valor = 11; }
	 if ( this->string_text[x] == 'L' ) { valor = 12; }
	 if ( this->string_text[x] == 'M' ) { valor = 13; }
	 if ( this->string_text[x] == 'N' ) { valor = 14; }
	 if ( this->string_text[x] == 'O' ) { valor = 15; }
	 if ( this->string_text[x] == 'P' ) { valor = 16; }
	 if ( this->string_text[x] == 'Q' ) { valor = 17; }
	 if ( this->string_text[x] == 'R' ) { valor = 18; }
	 if ( this->string_text[x] == 'S' ) { valor = 19; }
	 if ( this->string_text[x] == 'T' ) { valor = 20; }
	 if ( this->string_text[x] == 'U' ) { valor = 21; }
	 if ( this->string_text[x] == 'V' ) { valor = 22; }
	 if ( this->string_text[x] == 'W' ) { valor = 23; }
	 if ( this->string_text[x] == 'X' ) { valor = 24; }
	 if ( this->string_text[x] == 'Y' ) { valor = 25; }
	 if ( this->string_text[x] == 'Z' ) { valor = 26; }
	 
	// Uso da chave
	 valor = valor - chave;
	 if ( valor < 1 ) { valor = valor + 26; }
	
	// Conversao valor para letra
	 if ( valor == 1 ) { this->string_text[x] = 'A'; }
	 if ( valor == 2 ) { this->string_text[x] = 'B'; }
	 if ( valor == 3 ) { this->string_text[x] = 'C'; }
	 if ( valor == 4 ) { this->string_text[x] = 'D'; }
	 if ( valor == 5 ) { this->string_text[x] = 'E'; }
	 if ( valor == 6 ) { this->string_text[x] = 'F'; }
	 if ( valor == 7 ) { this->string_text[x] = 'G'; }
	 if ( valor == 8 ) { this->string_text[x] = 'H'; }
	 if ( valor == 9 ) { this->string_text[x] = 'I'; }
	 if ( valor == 10 ) { this->string_text[x] = 'J'; }
	 if ( valor == 11 ) { this->string_text[x] = 'K'; }
	 if ( valor == 12 ) { this->string_text[x] = 'L'; }
	 if ( valor == 13 ) { this->string_text[x] = 'M'; }
	 if ( valor == 14 ) { this->string_text[x] = 'N'; }
	 if ( valor == 15 ) { this->string_text[x] = 'O'; }
	 if ( valor == 16 ) { this->string_text[x] = 'P'; }
	 if ( valor == 17 ) { this->string_text[x] = 'Q'; }
	 if ( valor == 18 ) { this->string_text[x] = 'R'; }
	 if ( valor == 19 ) { this->string_text[x] = 'S'; }
	 if ( valor == 20 ) { this->string_text[x] = 'T'; }
	 if ( valor == 21 ) { this->string_text[x] = 'U'; }
	 if ( valor == 22 ) { this->string_text[x] = 'V'; }
	 if ( valor == 23 ) { this->string_text[x] = 'W'; }
	 if ( valor == 24 ) { this->string_text[x] = 'X'; }
	 if ( valor == 25 ) { this->string_text[x] = 'Y'; }
	 if ( valor == 26 ) { this->string_text[x] = 'Z'; }
	}
     }
return ( this->string_text );
}



/** 
 Funcao para separar todas as sequencias de caracteres separadas por espaços em branco.
 @param sequencia - arranjo para armazenar possiveis cadeias de caracteres identificadas
 @return quantidade de sequencias de caracteres identificadas, se houver;
 zero, caso contrario
 */
 int split ( std::string sequencia [15] )
{
 int quant_blank = 0;
 int point_ini = 0;
 int point_end = 0;
 int x = 0;
 
 while ( x < this->string_length )
   {
   if ( this->string_text[x] == ' '  && x > 0)
      {
       point_end = x - 1;
       sequencia[quant_blank] = this->string_text.substr ( point_ini, (point_end - point_ini + 1) );
       while ( this->string_text[x] == ' ' && x < this->string_length )
             { x = x + 1; }
       if ( (this->string_text[x] >= 'a' && this->string_text[x] <= 'z') ||
	    (this->string_text[x] >= 'A' && this->string_text[x] <= 'Z') ||
	    (this->string_text[x] >= '0' && this->string_text[x] <= '9') )
             { quant_blank = quant_blank + 1; }
       point_ini = x;
      }
    x = x + 1;
   }
 
 return (quant_blank);
}


}; // End class






#endif

