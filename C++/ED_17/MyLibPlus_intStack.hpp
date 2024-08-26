

#ifndef _MYLIBPLUSINTSTACK_HPP_
#define _MYLIBPLUSINTSTACK_HPP_

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


class intStack
{
  private: 
  int length;
  int *data;


  public:
  // Construtores
  intStack ()
	{
	this->length = 0;
	this->data = null;
	}

  intStack ( int tamanho, int *array )
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


}; // end class intStack


typedef intStack* ref_intStack;




  // Funções
  void intStack_show ( ref_intStack pilha )
	{
	for ( int x = 0; x < pilha->get_length(); x = x + 1 )
	  {
	  std::cout << x+1 << "_ " << pilha->get_datavalue (x) << std::endl;
	  }
	}

  ref_intStack intStack_starter ()
	{
	// Dados
	int tamanho = 5;
	int* dados = (int*) malloc ( sizeof(int) );
	for (int x = 0; x < tamanho; x = x + 1)
	  {
	  dados[x] = x+1;
	  }

	ref_intStack pilha = new intStack ( tamanho, dados );


	return ( pilha );
	}

  ref_intStack intStack_push ( ref_intStack pilha, int valor )
	{
	// Dado temporário para mudança do apontador
	int* temp = null;
	temp = (int*) malloc ( sizeof(int) );


	// Inserir dados no novo apontador
	temp [0] = valor;
	for ( int x = 0; x < pilha->get_length(); x = x + 1 )
	  {
	  temp [x+1] = pilha->get_datavalue (x);
	  }


	// Mudar apontador da pilha e seu tamanho
	pilha->set_data ( temp );
	pilha->set_length ( pilha->get_length() + 1 ); 

	// Liberar dado temporário
	temp = null;
	free ( temp );
	
	return ( pilha );
	}

  ref_intStack intStack_pop ( ref_intStack pilha )
	{
	// Dado temporário
	int* temp = null;

	temp = pilha->get_data();
	pilha->set_data ( pilha->get_data() + 1 );
	pilha->set_length ( pilha->get_length() - 1 );
	
	return ( pilha );
	}

  ref_intStack intStack_dup_top ( ref_intStack pilha )
	{
	// Dado temporário para mudança do apontador
	int* temp = null;
	temp = (int*) malloc ( sizeof(int) );


	// Inserir dados no novo apontador
	temp [0] = pilha->get_datavalue ( 0 );
	for ( int x = 0; x < pilha->get_length(); x = x + 1 )
	  {
	  temp [x+1] = pilha->get_datavalue (x);
	  }


	// Mudar apontador da pilha e seu tamanho
	pilha->set_data ( temp );
	pilha->set_length ( pilha->get_length() + 1 ); 

	// Liberar dado temporário
	temp = null;
	free ( temp );
	
	return ( pilha );
	}

  ref_intStack intStack_swap_top ( ref_intStack pilha )
	{
	// Dado temporário para mudança dos valores
	int temp1, temp2;


	// Inserir dados no valores temporários
	temp1 = pilha->get_datavalue (0);
	pilha = intStack_pop ( pilha );

	temp2 = pilha->get_datavalue (0);
	pilha = intStack_pop ( pilha );


	// Inserir dados armazenados na pilha;
	pilha = intStack_push ( pilha, temp1 );
	pilha = intStack_push ( pilha, temp2 );

	
	return ( pilha );
	}

  ref_intStack intStack_swap ( ref_intStack pilha )
	{
	// Nova pilha para inserção dos valores na ordem nova
	ref_intStack nova_pilha = new intStack ();


	// Inserir dados na nova pilha
	for (int x = 0; x < pilha->get_length(); x = x + 1 )
	  {
	  nova_pilha = intStack_push ( nova_pilha, pilha->get_datavalue (x) );
	  }

	// Liberar a antiga pilha
	free ( pilha );

	
	return ( nova_pilha );
	}


#endif





