/*
   C++ Treino - v0.0. - 18 / 05 / 2024
   Autor: Mateus Resende Ottoni

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

using namespace std;

// ----------------------------------------------- metodos

/**
   Method_1110 - nao faz nada.
 */
void method_1110()
{
   // nao faz nada
}

/**
   Method_1111
 */
void method_1111()
{
   // Dados
   int tamanho = 0;

   // identificar
   cout << endl
        << "Method_1111" << endl;

   // ler dados
   tamanho = readint("Digite o tamanho do array: ");

   // Definir array
   Array<int> array(tamanho, 0);
   array.random_read(100);

   // mostrar dados
   array.fprint("Resultados01.txt");

   // reciclar espaco
   array.free();

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1112.
 */
void method_1112()
{
   // definir dados
   Array<int> array(5, 0);
   int par = 0;

   // identificar
   cout << endl
        << "Method_1112" << endl;

   // ler dados
   array.fread("Dados02.txt");
   array.print();

   // Menor par
   par = array.first_even();

   if (par != 1)
   {
      par = array.biggest_even(par);
      cout << endl
           << "Maior numero par encontrado: " << par;
   }
   else
   {
      cout << endl
           << "Nao ha numeros pares no array";
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1113.
 */
void method_1113()
{
   // definir dados
   Array<int> array(5, 0);
   int impar = 0;

   // identificar
   cout << endl
        << "Method_1113" << endl;

   // ler dados
   array.fread("Dados03.txt");
   array.print();

   // Menor par
   impar = array.first_odd();

   if (impar != 1)
   {
      impar = array.smallest_odd(impar);
      cout << endl
           << "Menor numero impar encontrado: " << impar;
   }
   else
   {
      cout << endl
           << "Nao ha numeros impares no array";
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1114.
 */
void method_1114()
{
   // Dados
   int soma = 0, tamanho = 0, limite_superior = 0, limite_inferior = 0;
   Array<int> array(5, 0);

   // identificar
   cout << endl
        << "Method_1114" << endl;

   // ler dados
   array.fread("Dados04.txt");
   tamanho = array.getLength();

   do
   {
      limite_superior = readint("Determine o limite maior da soma: ");
   } while (limite_superior > tamanho || limite_superior < 1);

   do
   {
      limite_inferior = readint("Determine o limite menor da soma: ");
   } while (limite_inferior >= limite_superior || limite_inferior < 0);

   // Realizar soma
   soma = array.interval_add(limite_inferior, limite_superior);

   // Mostrar soma
   cout << endl
        << "Soma total: " << soma;

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1115.
 */
void method_1115()
{
   // Dados
   int tamanho = 0, limite_superior = 0, limite_inferior = 0;
   double media = 0;
   Array<int> array(5, 0);

   // identificar
   cout << endl
        << "Method_1115" << endl;

   // ler dados
   array.fread("Dados05.txt");
   tamanho = array.getLength();

   do
   {
      limite_superior = readint("Determine o limite maior da soma: ");
   } while (limite_superior > tamanho || limite_superior < 1);

   do
   {
      limite_inferior = readint("Determine o limite menor da soma: ");
   } while (limite_inferior >= limite_superior || limite_inferior < 0);

   // Realizar soma
   media = array.intervalo_average(limite_inferior, limite_superior);

   // Mostrar soma
   cout << endl
        << "Media: " << media;

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1116.
 */
void method_1116()
{
   // Dados
   Array<int> array(5, 0);
   bool all_negative = false;

   // identificar
   cout << endl
        << "Method_1116" << endl;

   // Ler do arquivo
   array.fread("Dados06.txt");

   // Acoes
   all_negative = array.all_negative ();

   // Mostrar resultado
   
   if (all_negative == true)
   {
      cout << endl << "Todos os valores do array sao negativos";
   }
   else {
      cout << endl << "Nem todos os valores sao negativos";
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1117.
 */
void method_1117()
{
   // Dados
   Array<int> array(5, 0);
   bool ordem_crescente = false;

   // identificar
   cout << endl
        << "Method_1117" << endl;

   // Ler do arquivo
   array.fread("Dados07.txt");

   // Acoes
   ordem_crescente = array.ordem_crescente ();

   // Mostrar resultado
   
   if (ordem_crescente == true)
   {
      cout << endl << "O Array esta em ordem crescente";
   }
   else {
      cout << endl << "O Array nao esta em ordem crescente";
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1118.
 */
void method_1118()
{
   // Dados
   int tamanho = 0, limite_superior = 0, limite_inferior = 0;
   int valor = 0;
   bool valor_presente = 0;
   Array<int> array(2, 0);

   // identificar
   cout << endl
        << "Method_1118" << endl;

   // ler dados
   array.fread("Dados08.txt");
   tamanho = array.getLength();
   valor = readint("Digite o valor a ser encontrado: ");

   do
   {
      limite_superior = readint("Determine o limite maior do intervalo: ");
   } while (limite_superior > tamanho || limite_superior < 1);

   do
   {
      limite_inferior = readint("Determine o limite menor do intervalo: ");
   } while (limite_inferior >= limite_superior || limite_inferior < 0);

   // Realizar soma
   valor_presente = array.intervalo_valor_presente(limite_inferior, limite_superior, valor);


   if (valor_presente == true)
   {
      cout << endl << "O intervalo do array possui " << valor;
   }
   else {
      cout << endl << "O intervalo do array nao possui " << valor;
   }

   // encerrar
   pause("Apertar ENTER para continuar");
}


/**
   Method_1119.
 */
void method_1119()
{
   // Dados
   int tamanho = 0, limite_superior = 0, limite_inferior = 0;
   int constante = 0;
   Array<int> array(2, 0);

   // identificar
   cout << endl
        << "Method_1119" << endl;

   // ler dados
   array.fread("Dados09.txt");
   tamanho = array.getLength();
   constante = readint("Digite a constante a ser aplicada no intervalo: ");

   do
   {
      limite_superior = readint("Determine o limite maior do intervalo: ");
   } while (limite_superior > tamanho || limite_superior < 1);

   do
   {
      limite_inferior = readint("Determine o limite menor do intervalo: ");
   } while (limite_inferior >= limite_superior || limite_inferior < 0);

   // Realizar escalar
   array.intervalo_escalar(limite_inferior, limite_superior, constante);

   // Mostrar array com valores alterados
   array.print();

   // encerrar
   pause("Apertar ENTER para continuar");
}

/**
   Method_1120.
 */
void method_1120()
{
   // Dados
   Array<int> array(2, 0);

   // identificar
   cout << endl
        << "Method_1120" << endl;

   // ler dados
   array.fread("Dados10.txt");

   // Organizar
   array.organize_decrescente();

   // Mostrar
   array.print();

   // encerrar
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
      cout << "C++ Treino - Programa - v0.0\n    " << endl;

      // mostrar opcoes
      cout << "Opcoes" << endl;
      cout << " 0 - parar" << endl;
      cout << " 1 - gerar valores aleatorios para arranjo e gravar em arquivo" << endl;
      cout << " 2 - encontrar maior numero par no array" << endl;
      cout << " 3 - encontrar menor numero impar no array" << endl;
      cout << " 4 - somar intervalo de um array" << endl;
      cout << " 5 - obter media de um array" << endl;
      cout << " 6 - determinar se todos valores sao negativos" << endl;
      cout << " 7 - determinar se o array esta em ordem crescente" << endl;
      cout << " 8 - determinar se um valor esta no array" << endl;
      cout << " 9 - escalar a uma constante um intervalo no array" << endl;
      cout << "10 - organizar array em ordem decrescente" << endl;

      // ler do teclado
      cout << endl
           << "Entrar com uma opcao: ";
      cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_1110();
         break;
      case 1:
         method_1111();
         break;
      case 2:
         method_1112();
         break;
      case 3:
         method_1113();
         break;
      case 4:
         method_1114();
         break;
      case 5:
         method_1115();
         break;
      case 6:
         method_1116();
         break;
      case 7:
         method_1117();
         break;
      case 8:
         method_1118();
         break;
      case 9:
         method_1119();
         break;
      case 10:
         method_1120();
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