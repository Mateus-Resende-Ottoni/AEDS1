/*
   Exercicio
   Author: Mateus Resende Ottoni

 */
// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits>   // std::numeric_limits
#include <string>   // para cadeias de caracteres

#include <cstdio>
#include <cstdlib>
#include <cstring>

// ----------------------------------------------- definicoes globais

void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl
             << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl
             << std::endl;
} // end pause ( )

// ----------------------------------------------- classes / pacotes

#include "MyLibPlus.hpp"
#include "MyLibPlus_Matrix.hpp"

using namespace std;

// ----------------------------------------------- metodos

/**
   Method_1210 - nao faz nada.
 */
void method_1210()
{
   // nao faz nada
}

/**
   Method_1211
 */
void method_1211()
{
   // Dados
   int linhas = 0, colunas = 0;
   int_Matrix *thismatrix = null;

   // identificar
   std::cout <<  std::endl << "Method_1211" <<  std::endl;

   // ler dados
   linhas = readint("Digite a quantidade de linhas da matriz: ");
   colunas = readint("Digite a quantidade de colunas da matriz: ");

   // Definir array
   thismatrix = new int_Matrix ( linhas, colunas, 1 );
//thismatrix->print();

   // Definir valores aleatorios
   thismatrix->random_read(100);
//thismatrix->print();

   // Salvar em arquivo e mostrar
   thismatrix->fprint_matrix ("Resultado01.txt");
//fread_matrix("Resultado01.txt");


   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1212.
 */
void method_1212()
{
   // definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados02.txt");
   int constante = 0;

   // identificar
   std::cout <<  std::endl << "Method_1212" << std::endl;

   // ler dados
   thismatrix->fscan_matrix ("Dados02.txt");

   // Ler constante
   constante = readint ("Defina a constante a ser usada: ");

   // Escalar matriz
   thismatrix->scalar ( constante );
   
   // Mostrar matriz
   thismatrix->print();

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1213.
 */
void method_1213()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados03.txt");
   int constante = 0, linhas = 0, colunas = 0;
   bool identidade = false;

   // Identificar metodo
   std::cout << std::endl << "Method_1213" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados03.txt");

   linhas = thismatrix->matrix_rows();
   colunas = thismatrix->matrix_columns();

   if ( linhas == colunas )
   {
     // Definir se e' identidade a matriz
     identidade = thismatrix->bool_identidade();

     if (identidade == true) {
      std::cout <<  std::endl << "A matriz e' identidade"; }
     else {
      std::cout <<  std::endl << "A matriz nao e' identidade"; }
   }
   else
   {
     std::cout <<  std::endl << "A matriz nao e' quadrada";
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1214.
 */
void method_1214()
{
   // Definir dados
   int_Matrix *thismatrix1 = fscan_line1 ("Dados04_1.txt");
   int_Matrix *thismatrix2 = fscan_line1 ("Dados04_2.txt");
   bool igualdade = false;

   // Identificar metodo
   std::cout << std::endl << "Method_1214" << std::endl;

   // Ler dados
   thismatrix1->fscan_matrix ("Dados04_1.txt");

   thismatrix2->fscan_matrix ("Dados04_2.txt");

   igualdade = bool_matrix_igualdade (thismatrix1, thismatrix2);

   if (igualdade == true) {
      std::cout <<  std::endl << "As matrizes sao iguais" <<  std::endl; }
   else {
      std::cout <<  std::endl << "As matrizes nao sao iguais" <<  std::endl; }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1215.
 */
void method_1215()
{
   // Definir dados
   int_Matrix *thismatrix1 = fscan_line1 ("Dados05_1.txt");
   int_Matrix *thismatrix2 = fscan_line1 ("Dados05_2.txt");

   // Identificar metodo
   std::cout << std::endl << "Method_1215" << std::endl;

   // Ler dados
   thismatrix1->fscan_matrix ("Dados05_1.txt");
   thismatrix2->fscan_matrix ("Dados05_2.txt");

   thismatrix1->sum_matrix (thismatrix2);

   thismatrix1->print();

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1216.
 */
void method_1216()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados06.txt");
   int linha1 = 0, linha2 = 0;

   // Identificar metodo
   std::cout << std::endl << "Method_1216" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados06.txt");

   do
   { linha1 = readint("Defina a primeira linha: "); }
   while ( linha1 >= thismatrix->matrix_rows() );

   do
   { linha2 = readint("Defina a segunda linha: ");}
   while ( linha1 == linha2 || linha2 >= thismatrix->matrix_rows() );

   int constante = readint("Defina a constante da soma: ");

   // Somar
   thismatrix->sum_rows ( linha1, linha2, constante);

   thismatrix->print();

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1217.
 */
void method_1217()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados07.txt");
   int linha1 = 0, linha2 = 0;

   // Identificar metodo
   std::cout << std::endl << "Method_1217" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados07.txt");

   do
   { linha1 = readint("Defina a primeira linha: "); }
   while ( linha1 >= thismatrix->matrix_rows() );

   do
   { linha2 = readint("Defina a segunda linha: ");}
   while ( linha1 == linha2 || linha2 >= thismatrix->matrix_rows() );

   int constante = readint("Defina a constante da soma: ");

   // Subtrair
   thismatrix->subtract_rows ( linha1, linha2, constante);

   thismatrix->print();

   // Encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1218.
 */
void method_1218()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados08.txt");
   int procurado = 0, valor = 0;

   // Identificar metodo
   std::cout << std::endl << "Method_1218" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados08.txt");


   valor = readint("Defina o numero procurado: ");

   // Achar valor
   procurado = thismatrix->search_rows ( valor );

   if (procurado == -1)
   { std::cout << std::endl << "O valor nao foi encontrado"; }
   else
   { std::cout << std::endl << "Encontrado valor na linha: " << procurado; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}


/**
   Method_1219.
 */
void method_1219()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados09.txt");
   int procurado = 0, valor = 0;

   // Identificar metodo
   std::cout << std::endl << "Method_1219" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados09.txt");


   valor = readint("Defina o numero procurado: ");

   // Achar valor
   procurado = thismatrix->search_columns ( valor );

   if (procurado == -1)
   { std::cout << std::endl << "O valor nao foi encontrado"; }
   else
   { std::cout << std::endl << "Encontrado valor na coluna: " << procurado; }

   // Encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1220.
 */
void method_1220()
{
   // Definir dados
   int_Matrix *thismatrix = fscan_line1 ("Dados10.txt");

   // Identificar metodo
   std::cout << std::endl << "Method_1220" << std::endl;

   // Ler dados
   thismatrix->fscan_matrix ("Dados10.txt");
   thismatrix->print();

   // Somar
   thismatrix->transposta ( );

   thismatrix->print();

   // Encerrar
   pause("Apertar ENTER para continuar");
}

// ----------------------------------------------- acao principal

/*
  Funcao principal.
  @return codigo de encerramento
*/
int main(int argc, char **argv)
{
   // definir dado
   int x = 0; // definir variavel com valor inicial

   // repetir até desejar parar
   do
   {
      // identificar
      cout << "C++ - Exercicio" << endl;

      // mostrar opcoes
      cout << "Opcoes" << endl;
      cout << " 0 - parar" << endl;
      cout << " 1 - gerar valores aleatorios para matriz e gravar em arquivo" << endl;
      cout << " 2 - escalar valores de uma matriz a uma constante" << endl;
      cout << " 3 - determinar se a matriz e' identidade" << endl;
      cout << " 4 - determinar igualdade entre matrizes" << endl;
      cout << " 5 - somar duas matrizes" << endl;
      cout << " 6 - somar duas linhas de uma matriz" << endl;
      cout << " 7 - subtrair duas linhas de uma matriz" << endl;
      cout << " 8 - encontrar valor em uma linha" << endl;
      cout << " 9 - encontrar valor em uma coluna" << endl;
      cout << "10 - transpor dados em uma matriz" << endl;

      // ler do teclado
      cout << endl
           << "Entrar com uma opcao: ";
      cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_1210();
         break;
      case 1:
         method_1211();
         break;
      case 2:
         method_1212();
         break;
      case 3:
         method_1213();
         break;
      case 4:
         method_1214();
         break;
      case 5:
         method_1215();
         break;
      case 6:
         method_1216();
         break;
      case 7:
         method_1217();
         break;
      case 8:
         method_1218();
         break;
      case 9:
         method_1219();
         break;
      case 10:
         method_1220();
         break;
      default:
         cout << endl
              << "ERRO: Valor invalido." << endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )