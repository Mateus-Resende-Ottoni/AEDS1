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
#include "MyLibPlus_intArray.hpp"

using namespace std; 

// -----------------------------------------------

// Array inicial (usada para testar os metodos)
int * array_inicial ()
{
 int x = 0;
 int * ref_array = (int*) calloc (10, sizeof(10));
 for (x = 0; x < 10; x = x + 1)
 {
 ref_array[x] = x+3;
 }
 ref_array[x] = -1;

 return ( ref_array );
}



//   Metodo_1610 - Nada

void method_1610()
{
   // Nada
}


//   Metodo_1611

void method_1611()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1611" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Definir novo valor
   std::cout << std::endl << "Defina o valor a ser inserido: ";
   std::cin >> valor;

   ref_array = array_push_back ( ref_array, valor );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1612.

void method_1612()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1612" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Remover valor
   ref_array = array_pop_back ( ref_array );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1613.

void method_1613()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1613" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Definir novo valor
   std::cout << std::endl << "Defina o valor a ser inserido: ";
   std::cin >> valor;

   ref_array = array_push_front ( ref_array, valor );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1614.

void method_1614()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1614" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Remover valor
   ref_array = array_pop_front ( ref_array );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1615.
 
void method_1615()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1615" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Definir novo valor
   std::cout << std::endl << "Defina o valor a ser inserido: ";
   std::cin >> valor;

   ref_array = array_push_mid ( ref_array, valor );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1616.

void method_1616()
{
   // Dados
   int * ref_array;
   int valor;
   
   // Identificacao
   std::cout <<  std::endl << "Method_1614" <<  std::endl;

   // Acoes
   ref_array = array_inicial();

   // Mostrar array inicial
   std::cout << std::endl << "Arranjo inicial: ";
   show_array (ref_array);
   std::cout << std::endl;

   // Remover valor
   ref_array = array_pop_mid ( ref_array );

   // Mostrar array final
   std::cout << std::endl << "Arranjo final: ";
   show_array (ref_array);
   std::cout << std::endl;

   free ( ref_array );

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1617.

void method_1617()
{
  intArray array1;
  array1.set_tamanho (10);
  array1.set_data ( array_inicial() );
  intArray array2;
  array2.set_tamanho (10);
  array2.set_data ( array_inicial() );

  int igualdade = 0;

   
  // Identificacao
  std::cout <<  std::endl << "Method_1617" <<  std::endl;

   // Mostrar arrays
   std::cout << std::endl << "Arranjos: " << std::endl;
   std::cout << "1: ";
   array1.show_data();
   std::cout << std::endl;
   std::cout << "2: ";
   array2.show_data();
   std::cout << std::endl;

  // Acoes
  igualdade = intArray_cmp ( array1, array2 );

  if ( igualdade == 0 )
    {
    std::cout << "Os arranjos sao iguais" << std::endl;
    }
  else if ( igualdade > 0)
    {
    std::cout << "O primeiro arranjo e' maior que o segundo" << std::endl;
    }
  else if ( igualdade < 0)
    {
    std::cout << "O segundo arranjo e' maior que o primeiro" << std::endl;
    }    

  // Encerrar
  pause("Apertar ENTER para continuar");
}



//   Metodo_1618.
 
void method_1618()
{
  intArray array1;
  array1.set_tamanho (10);
  array1.set_data ( array_inicial() );
  intArray array2;
  array2.set_tamanho (10);
  array2.set_data ( array_inicial() );
  intArray arraycat;

  int igualdade = 0;

   
  // Identificacao
  std::cout <<  std::endl << "Method_1618" <<  std::endl;

  // Mostrar arrays
  std::cout << std::endl << "Arranjos: " << std::endl;
  std::cout << "1: ";
  array1.show_data();
  std::cout << std::endl;
  std::cout << "2: ";
  array2.show_data();
  std::cout << std::endl;

  // Acoes
  arraycat = intArray_cat ( array1, array2 );  

  std::cout << std::endl << "Arranjo final: ";
  arraycat.show_data(); 

  // Encerrar
  pause("Apertar ENTER para continuar");
}



//   Metodo_1619.
 
void method_1619()
{
  intArray array;
  array.set_tamanho (10);
  array.set_data ( array_inicial() );
  int valor = 0;

   
  // Identificacao
  std::cout <<  std::endl << "Method_1619" <<  std::endl;

  // Mostrar array
  std::cout << std::endl << "Arranjo: ";
  array.show_data();
  std::cout << std::endl;

  // Definir valor a ser procurado
  std::cout << "Defina o valor a ser procurado: ";
  std::cin >> valor;
  std::cout << std::endl;

  // Acoes
  array = intArray_seek ( array, valor );  

  std::cout << std::endl << "Arranjo final: ";
  array.show_data();
  std::cout << std::endl;

  // Encerrar
  pause("Apertar ENTER para continuar");
}


//   Metodo_1620.
 
void method_1620()
{
  intArray array;
  array.set_tamanho (10);
  array.set_data ( array_inicial() );
  int inicio = 0, tamanho = 0;

   
  // Identificacao
  std::cout <<  std::endl << "Method_1620" <<  std::endl;

  // Mostrar array
  std::cout << std::endl << "Arranjo: ";
  array.show_data();
  std::cout << std::endl;

  // Definir inicio e tamanho
  do {
  std::cout << "Defina o inicio: ";
  std::cin >> inicio;
  std::cout << std::endl; }
  while ( inicio <= -1 || inicio > array.get_tamanho() );
  do {
  std::cout << "Defina o tamanho: ";
  std::cin >> tamanho;
  std::cout << std::endl; }
  while ( tamanho < 0 );

  // Acoes
  array = intArray_sub ( array, inicio, tamanho );

  std::cout << std::endl << "Arranjo subdividido: ";
  array.show_data();
  std::cout << std::endl;

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
      std::cout << "C++ - Exercicio Int Array" << std::endl;

      // mostrar opcoes
      std::cout << "Opcoes" << std::endl;
      std::cout << "  0 - parar" << std::endl;
      std::cout << "  1 - inserir valor no final do arranjo" << std::endl;
      std::cout << "  2 - remover valor no final do arranjo" << std::endl;
      std::cout << "  3 - inserir valor no inicio do arranjo" << std::endl;
      std::cout << "  4 - remover valor no inicio do arranjo" << std::endl;
      std::cout << "  5 - inserir valor no meio do arranjo" << std::endl;
      std::cout << "  6 - remover valor no meio do arranjo" << std::endl;
      std::cout << "  7 - comparar dois arranjos de inteiros" << std::endl;
      std::cout << "  8 - concatenar dois arranjos de inteiros" << std::endl;
      std::cout << "  9 - encontrar primeira ocorrencia de valor em arranjo" << std::endl;
      std::cout << " 10 - separar parte de um arranjo" << std::endl;

      // ler do teclado
      std::cout << std::endl << "Digite uma opcao: ";
      std::cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_1610();
         break;
      case 1:
         method_1611();
         break;
      case 2:
         method_1612();
         break;
      case 3:
         method_1613();
         break;
      case 4:
         method_1614();
         break;
      case 5:
         method_1615();
         break;
      case 6:
         method_1616();
         break;
      case 7:
         method_1617();
         break;
      case 8:
         method_1618();
         break;
      case 9:
         method_1619();
         break;
      case 10:
         method_1620();
         break;
      default:
         std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )