

#ifndef _MYLIBPLUSINTQUEUE_HPP_
#define _MYLIBPLUSINTQUEUE_HPP_

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


class intQueue
{
  private: 
  int length;
  int *data;


  public:
  // Construtores
  intQueue ()
	{
	this->length = 0;
	this->data = null;
	}

  intQueue ( int tamanho, int *array )
	{
	this->length = tamanho;
	this->data = array;
	}


  // Obtenção e mudança dos dados privados
  int get_length ()
	{
	return ( this->length );
	}

  void set_length ( int tamanho )
	{
	this->length = tamanho;
	}

  int* get_data ()
	{
	return ( this->data );
	}

  void set_data ( int* array )
	{
	this->data = array;
	}

  int get_datavalue ( int x )
	{
	return ( this->data[x] );
	}

  void set_datavalue ( int valor, int x )
	{
	this->data[x] = valor;
	}


}; // end class intQueue


typedef intQueue* ref_intQueue;




  // Funções
  void intQueue_show ( ref_intQueue fila )
	{
	for ( int x = 0; x < fila->get_length(); x = x + 1 )
	  {
	  std::cout << " " << fila->get_datavalue (x);
	  }
	}

  ref_intQueue intQueue_starter ()
	{
	// Dados
	int tamanho = 5;
	int* dados = (int*) malloc ( sizeof(int) );
	for (int x = 0; x < tamanho; x = x + 1)
	  {
	  dados[x] = x+1;
	  }

	ref_intQueue fila = new intQueue ( tamanho, dados );


	return ( fila );
	}

  ref_intQueue intQueue_push ( ref_intQueue fila, int valor )
	{
	// Dado temporário para reservar espaço
	int temp = valor;

	// Inserir dado temporário
	fila->set_datavalue ( temp, fila->get_length() );
	fila->set_length ( fila->get_length() + 1 );
	
	return ( fila );
	}

  ref_intQueue intQueue_pop ( ref_intQueue fila )
	{
	// Dado temporário
	int* temp = null;

	temp = fila->get_data();
	fila->set_data ( fila->get_data() + 1 );
	fila->set_length ( fila->get_length() - 1 );
	
	return ( fila );
	}

  int intQueue_compare ( ref_intQueue fila1, ref_intQueue fila2 )
	{
	// Dados
	int comparacao = 0, x = 0;
	
	comparacao = fila1->get_length() - fila2->get_length();

	if ( comparacao == 0 )
	  {
	  while ( x < fila1->get_length() )
	     {
	     comparacao = comparacao + fila1->get_datavalue(x) - fila2->get_datavalue(x);
	     x = x + 1;
	     }
	  }
	
	return ( comparacao );
	}

  ref_intQueue intQueue_join ( ref_intQueue fila1, ref_intQueue fila2 )
	{
	// Dados
	int x = 0, y = 0;

	// Definir novo tamanho
	int tamanho = fila1->get_length() + fila2->get_length();

	// Novo int* com os dois dados
	int* dados = (int*) calloc ( tamanho, sizeof(int) );
	for ( x = 0; x < fila1->get_length(); x = x + 1)
	  {
	  dados[x] = fila1->get_datavalue(x);
	  }
	for ( y = 0; y < fila2->get_length(); y = y + 1)
	  {
	  dados[x+y] = fila2->get_datavalue(y);
	  }

	// Novo ref_intQueue com os dados
	ref_intQueue nova_fila = new intQueue ( tamanho, dados );

	free ( fila1 );
	free ( fila2 ); 
	
	return ( nova_fila );
	}

  int intQueue_search ( ref_intQueue fila, int valor )
	{
	// Dados
	int x = 0, achado = 0;


	// Procurar valor
	while ( ( x < fila->get_length() ) && ( achado == 0 ) )
	  {
	  if ( fila->get_datavalue(x) == valor )
	     {
	     achado = 1;
	     }
	  x = x + 1;
	  }

	return ( achado );
	}



#endif





