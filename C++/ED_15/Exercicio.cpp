/*
   Exercicio
   Autor: Mateus Resende Ottoni
 */

// Dependencias
#include <iostream> 
#include <limits>   
#include <string>   

#include <cstdio>
#include <cstdlib>
#include <cstring>

// -----------------------------------------------

// Bibliotecas
#include "MyLibPlus.hpp"

using namespace std; 

// -----------------------------------------------

// Cadeia inicial (usada para testar os metodos)
char* cadeia_inicial ()
{
   char * caracteres;
   int n = 10;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1511" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = (char*) calloc (n, sizeof(char));
   caracteres [0] = 'C';
   caracteres [1] = 'D';
   caracteres [2] = 'E';
   caracteres [3] = 'F';
   caracteres [4] = 'G';
   caracteres [5] = 'H';
   caracteres [6] = 'I';
   caracteres [7] = 'J';
   caracteres [8] = 'K';
   caracteres [9] = 'L';


   return ( caracteres );
}


//   Metodo_1510 - Nada

void method_1510()
{
   // Nada
}


//   Metodo_1511

void method_1511()
{
   // Dados
   char * caracteres;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1511" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial ();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter: ";
   std::cin >> caracter;

   // Funcao
   caracteres = char_push_back ( caracteres, caracter );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;



   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1512.

void method_1512()
{
   // Dados
   char * caracteres;   
   // Identificacao
   std::cout <<  std::endl << "Method_1512" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();
   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Funcao
   caracteres = char_pop_back ( caracteres );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;


   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1513.

void method_1513()
{
   // Dados
   char * caracteres;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1513" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();
   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter: ";
   std::cin >> caracter;

   // Funcao
   caracteres = char_push_front ( caracteres, caracter );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;



   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1514.

void method_1514()
{
   // Dados
   char * caracteres;

   // Identificacao
   std::cout <<  std::endl << "Method_1514" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();
   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Funcao
   caracteres = char_pop_front ( caracteres );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;


   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1515.
 
void method_1515()
{
   // Dados
   char * caracteres;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1515" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter: ";
   std::cin >> caracter;

   // Funcao
   caracteres = char_push_mid ( caracteres, caracter );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;



   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1516.

void method_1516()
{
   // Dados
   char * caracteres;

   
   // Identificacao
   std::cout <<  std::endl << "Method_1516" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Funcao
   caracteres = char_pop_mid ( caracteres );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;


   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1517.

void method_1517()
{
   // Dados
   char * caracteres;
   int index = 0;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1517" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter: ";
   std::cin >> caracter;

   // Definir posicao
   std::cout << std::endl << "Defina a posicao de insercao: ";
   std::cin >> index;

   // Funcao
   caracteres = char_insert ( caracteres, caracter, index );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;



   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1518.
 
void method_1518()
{
   // Dados
   char * caracteres;
   int index = 0;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1518" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir posicao
   std::cout << std::endl << "Defina a posicao de remocao: ";
   std::cin >> index;

   // Funcao
   caracteres = char_remove ( caracteres, index );

  // Mostrar cadeia final
  std::cout << std::endl << "Cadeia final: " << caracteres << std::endl;


   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1519.
 
void method_1519()
{
   // Dados
   char * caracteres;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1519" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter a ser encontrado: ";
   std::cin >> caracter;

   // Funcao
   caracteres = char_find ( caracteres, caracter );

  // Mostrar cadeia final
  if ( caracteres == null )
  { std::cout << std::endl << "Cadeia nao possui o valor procurado" << std::endl; }
  else
  { std::cout << std::endl << "Cadeia final: " << caracteres << std::endl; }



   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1520.
 
void method_1520()
{
   // Dados
   char * caracteres;
   char caracter;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1520" <<  std::endl;

   // Acoes

   // Definir cadeia inicial
   caracteres = cadeia_inicial();

   std::cout << std::endl << "Cadeia inicial: " << caracteres << std::endl;

   // Definir caracter
   std::cout << std::endl << "Defina o caracter separador: ";
   std::cin >> caracter;

   // Funcao
   caracteres = char_separate ( caracteres, caracter );

  // Mostrar cadeia final
  if ( caracteres == null )
  { std::cout << std::endl << "Cadeia nao possui o valor procurado" << std::endl; }
  else
  { std::cout << std::endl << "Cadeia final: " << caracteres << std::endl; }



   // Encerrar
   pause("Apertar ENTER para continuar");
}

// -----------------------------------------------


//  Funcao principal.

int main (int argc, char **argv)
{
   // Dados
   int x = 0; // Definir variavel com valor inicial

   // Repeticao
   do
   {
      // identificar
      std::cout << "C++ - Exercicio Char Array" << std::endl;

      // mostrar opcoes
      std::cout << "Opcoes" << std::endl;
      std::cout << "  0 - parar" << std::endl;
      std::cout << "  1 - inserir caracter no final da cadeia" << std::endl;
      std::cout << "  2 - remover caracter no final da cadeia" << std::endl;
      std::cout << "  3 - inserir caracter no inicio da cadeia" << std::endl;
      std::cout << "  4 - remover caracter no inicio da cadeia" << std::endl;
      std::cout << "  5 - inserir caracter no meio da cadeia" << std::endl;
      std::cout << "  6 - remover caracter no meio da cadeia" << std::endl;
      std::cout << "  7 - inserir caracter em posicao especifica" << std::endl;
      std::cout << "  8 - remover caracter e posicao especifica" << std::endl;
      std::cout << "  9 - remover ate achar um caracter especifico" << std::endl;
      std::cout << " 10 - separar todos caracteres que precedem um separador" << std::endl;

      // ler do teclado
      std::cout << std::endl << "Entrar com uma opcao: ";
      std::cin >> x;
      getchar();

      // escolher acao
      switch (x)
      {
      case 0:
         method_1510();
         break;
      case 1:
         method_1511();
         break;
      case 2:
         method_1512();
         break;
      case 3:
         method_1513();
         break;
      case 4:
         method_1514();
         break;
      case 5:
         method_1515();
         break;
      case 6:
         method_1516();
         break;
      case 7:
         method_1517();
         break;
      case 8:
         method_1518();
         break;
      case 9:
         method_1519();
         break;
      case 10:
         method_1520();
         break;
      default:
         std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )