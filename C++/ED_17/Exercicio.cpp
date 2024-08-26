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
#include "MyLibPlus_intStack.hpp"
#include "MyLibPlus_intQueue.hpp"


using namespace std; 

// -----------------------------------------------



//   Metodo_1710 - Nada

void method_1710()
{
   // Nada
}


//   Metodo_1711

void method_1711()
{
   // Dados
   int new_value = 0;
   ref_intStack pilha = intStack_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1711" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Determinar novo valor
   std::cout << "Determine o valor a ser inserido: ";
   std::cin >> new_value;


   // Aplicar função
   pilha = intStack_push ( pilha, new_value );


   // Mostrar array final
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Limpar array
   free ( pilha );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1712.

void method_1712()
{
   // Dados
   ref_intStack pilha = intStack_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1712" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Aplicar função
   pilha = intStack_pop ( pilha );


   // Mostrar array final
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Limpar array
   free ( pilha );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1713.

void method_1713()
{
   // Dados
   ref_intStack pilha = intStack_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1713" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Aplicar função
   pilha = intStack_dup_top ( pilha );


   // Mostrar array final
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Limpar array
   free ( pilha );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1714.

void method_1714()
{
   // Dados
   ref_intStack pilha = intStack_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1714" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Aplicar função
   pilha = intStack_swap_top ( pilha );


   // Mostrar array final
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Limpar array
   free ( pilha );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1715.
 
void method_1715()
{
   // Dados
   ref_intStack pilha = intStack_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1714" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Aplicar função
   pilha = intStack_swap ( pilha );


   // Mostrar array final
   linhavazia();
   intStack_show ( pilha );
   linhavazia_double();


   // Limpar array
   free ( pilha );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1716.

void method_1716()
{
   // Dados
   int new_value = 0;
   ref_intQueue fila = intQueue_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1716" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intQueue_show ( fila );
   linhavazia_double();


   // Determinar novo valor
   std::cout << "Determine o valor a ser inserido: ";
   std::cin >> new_value;


   // Aplicar função
   fila = intQueue_push ( fila, new_value );


   // Mostrar array final
   linhavazia();
   intQueue_show ( fila );
   linhavazia_double();


   // Limpar array
   free ( fila );

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1717.

void method_1717()
{
   // Dados
   ref_intQueue fila = intQueue_starter();

   
   // Identificacao
   std::cout <<  std::endl << "Method_1717" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intQueue_show ( fila );
   linhavazia_double();


   // Aplicar função
   fila = intQueue_pop ( fila );


   // Mostrar array final
   linhavazia();
   intQueue_show ( fila );
   linhavazia_double();


   // Limpar array
   free ( fila );

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1718.
 
void method_1718()
{
   // Dados
   ref_intQueue fila1 = intQueue_starter();
   fila1 = intQueue_push ( fila1, 10 );
   ref_intQueue fila2 = intQueue_starter();
   fila2 = intQueue_push ( fila2, 3 );
   int comparacao = 0;

   
   // Identificacao
   std::cout <<  std::endl << "Method_1718" <<  std::endl;

   // Mostrar arrays iniciais
   linhavazia();
   std::cout << "1_ ";
   intQueue_show ( fila1 );
   linhavazia();
   std::cout << "2_ ";
   intQueue_show ( fila2 );
   linhavazia_double();


   // Aplicar função
   comparacao = intQueue_compare ( fila1, fila2 );


   // Mostrar resultado da comparacao
   linhavazia();
   if ( comparacao == 0 )
     {
     std::cout << "As filas comparadas sao iguais";
     }
   else
     {
     if ( comparacao > 0 )
	{
	std::cout << "A primeira fila e' maior e/ou possui maiores valores";
	}
     else
	{
	std::cout << "A segunda fila e' maior e/ou possui maiores valores";
	}
     }
   linhavazia();


   // Limpar arrays
   free ( fila1 );
   free ( fila2 );

   // Encerrar
   pause("Apertar ENTER para continuar");
}



//   Metodo_1719.
 
void method_1719()
{
   // Dados
   ref_intQueue fila1 = intQueue_starter();
   fila1 = intQueue_push ( fila1, 37 );
   ref_intQueue fila2 = intQueue_starter();
   fila2 = intQueue_pop ( fila2 );
   fila2 = intQueue_push ( fila2, 100 );
   int comparacao = 0;

   
   // Identificacao
   std::cout <<  std::endl << "Method_1719" <<  std::endl;

   // Mostrar arrays iniciais
   linhavazia();
   std::cout << "1_ ";
   intQueue_show ( fila1 );
   linhavazia();
   std::cout << "2_ ";
   intQueue_show ( fila2 );
   linhavazia_double();


   // Aplicar função
   ref_intQueue nova_fila = intQueue_join ( fila1, fila2 );


   // Mostrar resultado da junção
   linhavazia();
   intQueue_show ( nova_fila );
   linhavazia_double();


   // Limpar array
   free ( nova_fila );

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1720.
 
void method_1720()
{
   // Dados
   ref_intQueue fila = intQueue_starter();
   fila = intQueue_push ( fila, 10 );
   fila = intQueue_push ( fila, 25 );
   fila = intQueue_push ( fila, 13 );
   int achado = 0, valor = 0;

   
   // Identificacao
   std::cout <<  std::endl << "Method_1720" <<  std::endl;

   // Mostrar array inicial
   linhavazia();
   intQueue_show ( fila );
   linhavazia_double();


   // Determinar novo valor
   std::cout << "Determine o valor a ser procurado: ";
   std::cin >> valor;


   // Aplicar função
   achado = intQueue_search ( fila, valor );


   // Mostrar resultado da busca
   linhavazia();
   if ( achado == 0 )
     {
     std::cout << "O valor nao foi encontrado.";
     }
   else if ( achado == 1 )
     {
     std::cout << "O valor foi encontrado.";
     }
   linhavazia();


   // Limpar arrays
   free ( fila );

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
      std::cout << "  1 - LIFO_ acrescentar valor no topo de uma pilha" << std::endl;
      std::cout << "  2 - LIFO_ remover valor no topo de uma pilha" << std::endl;
      std::cout << "  3 - LIFO_ duplicar valor no topo de uma pilha" << std::endl;
      std::cout << "  4 - LIFO_ trocar valor no topo de uma pilha" << std::endl;
      std::cout << "  5 - LIFO_ trocar ordem dos valores em uma pilha" << std::endl;
      std::cout << "  6 - FIFO_ acrescentar valor no final de uma fila" << std::endl;
      std::cout << "  7 - FIFO_ remover valor no inicio de uma fila" << std::endl;
      std::cout << "  8 - FIFO_ comparar valores de duas filas" << std::endl;
      std::cout << "  9 - FIFO_ juntar duas filas" << std::endl;
      std::cout << " 10 - FIFO_ procurar valor em fila" << std::endl;

      // ler do teclado
      std::cout << std::endl << "Digite uma opcao: ";
      std::cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_1710();
         break;
      case 1:
         method_1711();
         break;
      case 2:
         method_1712();
         break;
      case 3:
         method_1713();
         break;
      case 4:
         method_1714();
         break;
      case 5:
         method_1715();
         break;
      case 6:
         method_1716();
         break;
      case 7:
         method_1717();
         break;
      case 8:
         method_1718();
         break;
      case 9:
         method_1719();
         break;
      case 10:
         method_1720();
         break;
      default:
         std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )