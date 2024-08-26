/*
   Exercicio
   Autor: Mateus Resende Ottoni
 */

// Dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

#include <cstdio>
#include <cstdlib>
#include <cstring>

// -----------------------------------------------

// Bibliotecas
#include "MyLibPlus.hpp"
#include "MyLibPlus_String.hpp"

using namespace std; 

// -----------------------------------------------


//   Metodo_1410 - nao faz nada.

void method_1410()
{
   // nao faz nada
}


//   Metodo_1411

void method_1411()
{
   // Dados
   int valor;

   // Identificacao
   std::cout <<  std::endl << "Method_1411" <<  std::endl;

   // Declarar string
   MyString MString;

   // Obter correspondente inteiro
   valor = MString.getInt();

   // Resultado
   if ( valor == -1) 
	{ std::cout << std::endl << "A string nao pode ser convertida" << std::endl; }
   else
	{ std::cout << std::endl << "A conversao da string equivale a " << valor << std::endl; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1412.

void method_1412()
{
  // Dados
   double valor;

   // Identificacao
   std::cout <<  std::endl << "Method_1412" <<  std::endl;

   // Declarar string
   MyString MString;

   // Obter correspondente double
   valor = MString.getDouble();

   // Resultado
   if ( valor == 0.0) 
	{ std::cout << std::endl << "A string nao pode ser convertida" << std::endl; }
   else
	{ std::cout << std::endl << "A conversao da string equivale a " << valor << std::endl; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1413.

void method_1413()
{
  // Dados
   bool valor;

   // Identificacao
   std::cout <<  std::endl << "Method_1413" <<  std::endl;

   // Declarar string
   MyString MString;

   // Obter correspondente bool
   valor = MString.getBoolean();

   // Resultado
   if ( valor ) 
	{ std::cout << std::endl << "String verdadeira" << std::endl; }
   else
	{ std::cout << std::endl << "String falsa" << std::endl; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1414.

void method_1414()
{
  // Dados
   bool tem_valor;
   std::string texto;

   // Identificacao
   std::cout <<  std::endl << "Method_1414" <<  std::endl;

   // Declarar string
   MyString MString;

   // Definir parametro
   std::cout << std::endl << "Defina o parametro a ser procurado: ";
   std::cin >> texto;
   //getchar();

   // Buscar parametro
   tem_valor = MString.contains(texto);

   // Resultado
   if ( tem_valor ) 
	{ std::cout << std::endl << "A string possui o valor" << std::endl; }
   else
	{ std::cout << std::endl << "A string nao possui o valor" << std::endl; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1415.
 
void method_1415()
{
  // Dados
   std::string texto;

   // Identificacao
   std::cout <<  std::endl << "Method_1415" <<  std::endl;

   // Declarar string
   MyString MString;

   // Converter caracteres
   texto = MString.toUpperCase();

   // Resultado
   std::cout << std::endl << texto << std::endl;

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1416.

void method_1416()
{
  // Dados
   std::string texto;

   // Identificacao
   std::cout <<  std::endl << "Method_1416" <<  std::endl;

   // Declarar string
   MyString MString;

   // Converter caracteres
   texto = MString.toLowerCase();

   // Resultado
   std::cout << std::endl << texto << std::endl;

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1417.

void method_1417()
{
  // Dados
   char original, novo;
   std::string texto;

   // Identificacao
   std::cout << std::endl << "Method_1417" <<  std::endl;

   // Declarar string
   MyString MString;

   // Declarar caracteres
   std::cout << std::endl << "Determine o caracter a ser substituido: ";
   std::cin >> original;
   //getchar();
   std::cout << std::endl << "Determine o caracter que substituira: ";
   std::cin >> novo;
   //getchar();

   // Converter caracteres
   texto = MString.replace_char ( original, novo );

   // Resultado
   std::cout << std::endl << texto << std::endl;

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1418.
 
void method_1418()
{
   // Dados
   std::string texto;

   // Identificacao
   std::cout << std::endl << "Method_1418" <<  std::endl;

   // Declarar string
   MyString MString;

   // Codificar
   texto = MString.encrypt();

   // Resultado
   std::cout << std::endl << texto << std::endl;

   // Identificacao
   pause("Apertar ENTER para continuar");
}



//   Metodo_1419.
 
void method_1419()
{
   // Dados
   std::string texto;

   // Identificacao
   std::cout << std::endl << "Method_1419" <<  std::endl;

   // Declarar string
   MyString MString;

   // Decodificar
   texto = MString.decrypt();

   // Resultado
   std::cout << std::endl << texto << std::endl;

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1420.
 
void method_1420()
{
   // Dados
   int quant_blanks;
   std::string texto [10];

   // Identificacao
   std::cout << std::endl << "Method_1420" <<  std::endl;

   // Declarar string
   MyString MString;

   // Decodificar
   quant_blanks = MString.split( texto );

   // Resultado
   std::cout << std::endl << quant_blanks << std::endl;

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
      std::cout << "C++ - Exercicio Strings" << std::endl;

      // mostrar opcoes
      std::cout << "Opcoes" << std::endl;
      std::cout << "  0 - parar" << std::endl;
      std::cout << "  1 - obter valor inteiro equivalente" << std::endl;
      std::cout << "  2 - obter valor double equivalente" << std::endl;
      std::cout << "  3 - obter valor bool equivalente" << std::endl;
      std::cout << "  4 - determinar se ha parametro" << std::endl;
      std::cout << "  5 - converter para letra maiuscula" << std::endl;
      std::cout << "  6 - converter para letra minuscula" << std::endl;
      std::cout << "  7 - substituir determinado parametro" << std::endl;
      std::cout << "  8 - codificar em cifra de Cesar" << std::endl;
      std::cout << "  9 - decodificar cifra de Cesar" << std::endl;
      std::cout << " 10 - obter quantidade de espacos em branco" << std::endl;

      // ler do teclado
      std::cout << std::endl << "Entrar com uma opcao: ";
      std::cin >> x;
      getchar();

      // escolher acao
      switch (x)
      {
      case 0:
         method_1410();
         break;
      case 1:
         method_1411();
         break;
      case 2:
         method_1412();
         break;
      case 3:
         method_1413();
         break;
      case 4:
         method_1414();
         break;
      case 5:
         method_1415();
         break;
      case 6:
         method_1416();
         break;
      case 7:
         method_1417();
         break;
      case 8:
         method_1418();
         break;
      case 9:
         method_1419();
         break;
      case 10:
         method_1420();
         break;
      default:
         std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )