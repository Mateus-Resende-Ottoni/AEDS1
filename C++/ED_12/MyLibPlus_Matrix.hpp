

#ifndef _MYLIBPLUSMATRIX_HPP_
#define _MYLIBPLUSMATRIX_HPP_

// Bibliotecas

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;


// Bibliotecas proprias
#include "MyLibPlus.hpp"


class int_Matrix
{
  private:
    int   rows    = 0;
    int   columns = 0;
    int **data    = null;
  public:

/*
  Construtor de matriz.
  @param rows    - quantidade de linhas
  @param columns - quantidade de colunas
  @param value   - valor inicial a ser guardado
*/
  int_Matrix ( int rows, int columns, int value )
  {
     if ( rows > 0 && columns > 0 )
     {   
        data = (int**) new int [rows];
        for ( int x=0; x<rows; x=x+1 )
        {   data [x] = (int*) new int [columns];
            for ( int y=0; y<columns; y=y+1 )
               {   data [x][y] = value;  }
        }
        this->rows    = rows;
        this->columns = columns;
     }
} // end constructor ( )

/*
  Metodo para guardar valor inicial em posicoes de matriz.
  @param value  - valor a ser guardado
*/
  int_Matrix* init ( int value )
  {
     return ( this );
} // end init ( )

/*
  Metodo para mostrar valores em matriz.
*/
  void print ( )
  {
    // Dados
      int x = 0, y = 0;

      std::cout << std::endl;
      for (x = 0; x < rows; x++)
          {
            for (y = 0; y < columns; y++)
                {
                std::cout << data[x][y] << "\t";
                }
            std::cout << std::endl;
          }
  } // end print( )

/*
  Funcao para ler valores para matriz.
*/
  void scan ( )
  {
       // Dados
      int x = 0, y = 0;

      std::cout << std::endl;
      for (x = 0; x < rows; x++)
          {
            for (y = 0; y < columns; y++)
                {
                std::cout << "data[" << x << "][" << y << "]: ";
                std::cin >> data[x][y];
                std::cout << std::endl;
                }
          }
  } // end scan_int_matrix( )

/*
  Metodo para gravar em arquivo valores em matriz.
  @param filename - nome do arquivo
*/
  void fprint_matrix ( std::string filename )
 {
    // Dados
    int x = 0, y = 0;

    std::cout << std::endl;

    std::ofstream arquivo(filename); // output file

    
    arquivo << rows << " " << columns;
    for (x = 0; x < rows; x++)
        {
        for (y = 0; y < columns; y++)
            {
            arquivo << std::endl << data[x][y];
            }
        }
 } // end fprint( )

/*
  Metodo para ler de arquivo valores para matriz.
  @param filename - nome do arquivo
*/
  void fscan_matrix ( std::string filename )
  {
    // Dados
    int x = 0, y = 0;
    int linhas = 0, colunas = 0;

    std::cout << std::endl;

    std::ifstream arquivo(filename); // input file
    
    arquivo >> linhas;
    arquivo >> colunas;
    
    for (x = 0; x < rows; x++)
        {
        for (y = 0; y < columns; y++)
            {
            arquivo >> data[x][y];
            }
        }
  } // end fscan( )

// Definir valores aleaoriamente
void random_read(int limite)
   {
	std::cout << endl;
	for (int x = 0; x < rows; x = x + 1)
      {
	for (int y = 0; y < columns; y = y + 1)
	    {
	    data[x][y] = rand() % limite + 1;
	    }
      }
	std::cout << endl;
   }

// Escalar valores da matriz a uma constante
void scalar ( int constante )
    {
    std::cout << endl;
    for (int x = 0; x < rows; x = x + 1)
      {
	for (int y = 0; y < columns; y = y + 1)
	    {
	    data[x][y] = data[x][y] * constante;
	    }
      }
    }

// Determinar se a matriz e' identidade ou nao
bool bool_identidade ()
  {
  bool identidade = true;
  int x = 0, y = 0;

  while ( x < rows && identidade == true )
     {
     while ( y < columns && identidade == true )
	{
	if ( x == y )
	{ if (data[x][y] != 1) { identidade = false; } }
	else
	{ if (data[x][y] != 0) { identidade = false; } }
	y = y + 1;
	}
     x = x + 1;
     }

  return ( identidade );
  }

// Somar com outra matriz
void sum_matrix ( int_Matrix *matrixsomada )
{
  for (int x = 0; x < rows; x = x + 1 )
    {
    for (int y = 0; y < columns; y = y + 1 )
	{
	data[x][y] = data[x][y] + matrixsomada->matrix_data( x, y);
	}
    }
}

// Somar linhas de uma matriz
void sum_rows (int linha1, int linha2, int constante)
{
  for (int y = 0; y < columns; y = y + 1)
     {
     data[linha1][y] = data[linha1][y] + (data[linha2][y] * constante);     
     }
}

// Subtrair linhas de uma matriz
void subtract_rows (int linha1, int linha2, int constante)
{
  for (int y = 0; y < columns; y = y + 1)
     {
     data[linha1][y] = data[linha1][y] - (data[linha2][y] * constante);     
     }
}

// Transformar matriz em sua transposta
void transposta ()
{
  // Determinar variavel para armazenar temporariamente valores em movimento
  int valor = 0;
  // Variável para evitar a transposicao das mesmas posicoes duas vezes
  int movimento = 0;

  for (int x = 0; x < rows; x = x + 1 )
    {
    for (int y = movimento; y < columns; y = y + 1 )
	{
//std::cout << data[x][y] << " " << data[y][x];
	valor = data[x][y];

	data[x][y] = data[y][x];

	data[y][x] = valor;
//std::cout << " _ " << data[x][y] << " " << data[y][x] << std::endl;
	}
    movimento = movimento + 1;
//this->print();
    }
}

// a definir
  int		matrix_rows		( );
  int		matrix_columns		( );
  int		matrix_data		(int x, int y);
  int		largest_int_matrix	( );
  int		smallest_int_matrix	( );
  int		sum_int_matrix		( );
  double	average_int_matrix	( );
  int		search_rows		(int valor);
  int		search_columns		(int valor);
  int_Matrix* copy			( );

} ; // end class int_Matrix






int int_Matrix::matrix_rows ()
{
 int linhas = 0;

 linhas = rows;

 return ( linhas );
}

int int_Matrix::matrix_columns ()
{
 int colunas = 0;

 colunas = columns;

 return ( colunas );
}

int int_Matrix::matrix_data (int x, int y)
{
 int valor = 0;

 valor = data[x][y];

 return ( valor );
}

int int_Matrix::search_rows (int valor)
{
 int linha = -1;
 int x = 0, y = 0;

  while (x < rows && linha == -1)
    {
    y = 0;
    while (y < columns && linha == -1)
	{
	if ( data[x][y] == valor )
	   { linha = y; }
	y = y + 1;
	}
    x = x + 1;
    }

 return ( linha );
}

int int_Matrix::search_columns (int valor)
{
 int coluna = -1;
 int x = 0, y = 0;

  while (x < rows && coluna == -1)
    {
    y = 0;
    while (y < columns && coluna == -1)
	{
	if ( data[x][y] == valor )
	   { coluna = x; }
	y = y + 1;
	}
    x = x + 1;
    }

 return ( coluna );
}

int_Matrix *fscan_line1 ( std::string filename )
  {
    // Dados
    int rows = 0, columns = 0;

    std::cout << std::endl;

    std::ifstream arquivo(filename); // input file
    
    arquivo >> rows;
    arquivo >> columns;

    int_Matrix *a = new int_Matrix (rows, columns, 1);

    return (a);
  } // end fscan_line1( )

/*
  Funcao para achar o maior valor em matriz.
  @return maior valor
  @param matrix - matriz onde guardar
*/
  int int_Matrix::largest_int_matrix ( )
  {
  // Dados
    int maior = 0, y = 0, x = 0;
      
  // Ler primeiro valor
    maior = data[0][0];

    for (y = 0; y < rows; y++)
        {
        for (x = 0; x < columns; x++)
            {
            if (data[x][y] > maior)
                {
                maior = data[x][y];
                }
            }
        }

    // Retornar o maior valor
    return (maior);
  }

/*
  Funcao para achar o menor valor em matriz.
  @return menor valor
*/
  int int_Matrix::smallest_int_matrix ( )
  {
  // Dados
    int menor = 0, y = 0, x = 0;
      
  // Ler primeiro valor
    menor = data[0][0];

    for (y = 0; y < rows; y++)
        {
        for (x = 0; x < columns; x++)
            {
            if (data[x][y] < menor)
                {
                menor = data[x][y];
                }
            }
        }

    // Retornar o menor valor
    return (menor);
  } // end smallest_int_matrix ( )

/*
  Funcao para somar valores em matriz.
  @return soma de todos os valores
*/
  int int_Matrix::sum_int_matrix ( )
  {
   // definir dados locais
      int soma = 0;
   // retornar a soma de todos os dados
      return ( soma );
  } // end sum_int_matrix ( )

/*
  Funcao para calcular a media dos valores em matriz.
  @return media dos valores
*/
  double int_Matrix::average_int_matrix ( )
  {
   // definir dados locais
      double media = 0.0;
   // retornar a media de todos os dados
      return ( media );
  } // end average_int_matrix ( )

/*
  Metodo para copiar valores em matriz.
  @return referencia para copia da matriz
*/
  int_Matrix* int_Matrix::copy ( )
  {
   // definir dados locais
   // copiar dados de um arranjo para outro
      return ( null );
  } // end copy( )


// Metodo para mostrar matriz em arquivo
  void fread_matrix ( std::string filename )
  {
    // Dados
    int x = 0, y = 0, valor = 0;
    int linhas = 0, colunas = 0;

    std::cout << std::endl;

    std::ifstream arquivo(filename);
    
    arquivo >> linhas >> colunas;
    
    for (y = 0; y < linhas; y++)
        {
        for (x = 0; x < colunas; x++)
            {
	    arquivo >> valor;
            std::cout << valor << "\t";
            }
	std::cout << std::endl;
        }
  } // end fread( )

// Determinar se duas matrizes sao iguais
bool bool_matrix_igualdade (int_Matrix *matrix1, int_Matrix *matrix2)
  {
  bool igualdade = true;
  int x = 0, y = 0;
  int linhas1 = 0, linhas2 = 0, colunas1 = 0, colunas2 = 0;

  linhas1 = matrix1->matrix_rows();
  linhas2 = matrix2->matrix_rows();
  colunas1 = matrix1->matrix_columns();
  colunas2 = matrix2->matrix_columns();


if ( linhas1 == linhas2 && colunas1== colunas2 )
  {
  while ( x < linhas1 && igualdade == true )
     {
     while ( y < colunas1 && igualdade == true )
	{
	if ( matrix1->matrix_data(x, y) != matrix2->matrix_data(x, y) )
	{ igualdade = false; }
	y = y + 1;
	}
     x = x + 1;
     }
  }
else
  { igualdade = false; }

  return ( igualdade );
  }

#endif

