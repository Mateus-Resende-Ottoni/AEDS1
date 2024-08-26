

#ifndef _MYLIBPLUSINTARRAY_HPP_
#define _MYLIBPLUSINTARRAY_HPP_

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




class intArray
{ 
  private: 
  int length;
  int *data;
 
  public:
  intArray ()
	{
	this->length = 0;
	this->data = null;
	}

  intArray ( int tamanho, int *array)
	{
	this->length = tamanho;
	this->data = (int*) calloc (this->length, sizeof(int));
	this->data = array;
	}

  int get_tamanho (  )
	{
	return ( this->length );
	}

  void set_tamanho ( int tamanho )
	{
	this->length = tamanho;
	}

  int * get_data ()
	{
	return ( this->data );
	}

  void set_data ( int* array )
	{
	 this->data = (int*) calloc (this->length, sizeof(int));
	 this->data = array;
	}

  int get_data_value (int n)
	{
	return ( this->data[n] );
	}

  void set_data_value (int valor, int n)
	{
	this->data[n] = valor;
	}

  void show_data ()
	{
	int tamanho = this->get_tamanho();

	for (int x = 0;x < tamanho;x = x + 1)
	  {
	  std::cout << get_data_value (x) << " ";
	  }
	}


 
}; // end class intArray

  typedef intArray* ref_intArray; 


// Comparar arranjos e retornar valor bool
  bool intArray_compare ( intArray array1, intArray array2 )
	{
	int tamanho1 = array1.get_tamanho ();
	int* data1 = array1.get_data ();
	int tamanho2 = array2.get_tamanho ();
	int* data2 = array2.get_data ();
        bool iguais = true;

	if ( tamanho1 == tamanho2 )
	{
	for (int x = 0; x < tamanho1; x = x + 1 )
	   {
	   if ( data1[x] != data2[x] )
	     { iguais = false; }
	   }
	}
	else
	{ iguais = false; }

	return ( iguais );
	}

// Comparar arranjos e retornar valor inteiro
  int intArray_cmp ( intArray array1, intArray array2 )
	{
	int tamanho1 = array1.get_tamanho ();
	int* data1 = array1.get_data ();
	int tamanho2 = array2.get_tamanho ();
	int* data2 = array2.get_data ();
        int igualdade = 0, x = 0;
	
	while ( x < tamanho1 && x < tamanho2 && igualdade == 0 )
	{
	igualdade = data1[x] - data2[x];
	x = x + 1;
	}

	return ( igualdade );
	}

// Juntar dois arranjos
  intArray intArray_cat ( intArray array1, intArray array2 )
	{
	int tamanho1 = array1.get_tamanho ();
	int tamanho2 = array2.get_tamanho ();
        int x = 0, y = 0;

	intArray array_cat;
	array_cat.set_tamanho ( tamanho1 + tamanho2 );
	
	int * data = (int*) calloc (( tamanho1 + tamanho2 ), sizeof(int));
	for (x = 0; x < tamanho1; x = x + 1)
	  {
	  data[x] = array1.get_data_value (x);
	  }

	for (y = 0; y < tamanho2; y = y + 1)
	  {
	  data[y+x] = array2.get_data_value (y);
	  }

	array_cat.set_data ( data );

	return (array_cat);
	}

// Achar primeira ocorrencia de um valor em arranjo
  intArray intArray_seek ( intArray array, int valor )
	{
	int tamanho = array.get_tamanho ();
	int x = 0;	

	while ( x < tamanho && array.get_data_value(x) != valor )
	  {
	  x = x + 1;
	  }
	if ( x == tamanho )
	  {
	  intArray resultado;
	  return ( resultado );
	  }
	else
	  {
	  int* data = array.get_data();
	  intArray resultado ( ( tamanho - x ), &data[x] );
	  return ( resultado );
	  }
	}

// Separar parte do arranjo
  intArray intArray_sub ( intArray array, int start, int length )
	{
	int tamanho = array.get_tamanho();
	int x = 0;
	int * data = (int*) calloc (length, sizeof(int));
	
	while ( x < length && (x + start) < tamanho )
	  {
	  data[x] = array.get_data_value( (x + start) );
	  x = x + 1;
	  }
	if (x == length)
	  {
	  intArray separacao ( length, data );
	  return ( separacao );
	  }
	else
	  {
	  intArray separacao ( (x + 1), data );
	  return ( separacao );
	  }
	}

#endif





