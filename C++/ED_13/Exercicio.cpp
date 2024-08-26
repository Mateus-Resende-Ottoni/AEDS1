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
#include "MyLibPlus_Contato.hpp"

using namespace std;

// -----------------------------------------------


//   Metodo_1310 - nao faz nada.

void method_1310()
{
   // nao faz nada
}


//   Metodo_1311

void method_1311()
{
   // Dados
   Contato pessoa1 ("Ana", 1, 12345678);
   std::string novo_nome;

   // Identificacao
   std::cout <<  std::endl << "Method_1311" <<  std::endl;

   // Digitar novo nome
   std::cout << std::endl << "Digite o novo nome: ";
   std::cin >> novo_nome;

   // Substituicao do nome
   pessoa1.set_nome (novo_nome);

   // Mostrar contato
   pessoa1.print_single();

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1312.

void method_1312()
{
   // Dados
   Contato pessoa1 ("Ana", 1, 12345678);
   int novo_n_telefones;

   // Identificacao
   std::cout <<  std::endl << "Method_1312" <<  std::endl;

   // Digitar nova quantidade de telefones
   std::cout << std::endl << "Digite a quantidade de telefones: ";
   std::cin >> novo_n_telefones;

   // Definir novos telefones
   pessoa1.set_telefones( novo_n_telefones );

   // Mostrar contato
   pessoa1.print_single();

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1313.

void method_1313()
{
   // Dados
   Contato pessoa1 ("Ana", 1, 12345678);
   int novo_n_telefones, substituicao_telefone;

   // Identificacao
   std::cout <<  std::endl << "Method_1313" <<  std::endl;

   // Digitar novo nome
   std::cout << std::endl << "Digite a quantidade de telefones: ";
   std::cin >> novo_n_telefones;

   // Definir novos telefones
   pessoa1.set_telefones( novo_n_telefones );

   // Testar substituicao de telefone
   linhavazia();
   do
	{
	substituicao_telefone = readint ("Defina o telefone a ser substituido: ");
	}
   while (substituicao_telefone >= novo_n_telefones);
   pessoa1.substitute_telefone(substituicao_telefone);

   // Mostrar contato
   pessoa1.print_single();

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1314.

void method_1314()
{
   // Definir dados
   std::string file = "Pessoa1.txt";
   Contato pessoa1;

   // Identificacao
   std::cout << std::endl << "Method_1314" << std::endl;

   // Obter do arquivo
   pessoa1.fscan(file);

   // Mostrar dados lidos
   pessoa1.print_single();

   // Identificacao
   pause("Apertar ENTER para continuar");
}


//   Metodo_1315.
 
void method_1315()
{
   // Definir dados
   std::string file = "Pessoa1.txt";
   Contato pessoa1 ("", 0, 00000000);
   int novo_n_telefones;
   std::string pessoa;

   // Identificacao
   std::cout << std::endl << "Method_1315" << std::endl;


   // Definir o novo nome
   std::cout << std::endl << "Digite o nome: ";
   std::cin >> pessoa;
   pessoa1.set_nome(pessoa);
   getchar();

   // Digitar nova quantidade de telefones
   std::cout << std::endl << "Digite a quantidade de telefones: ";
   std::cin >> novo_n_telefones;
   getchar();

   // Definir novos telefones
   pessoa1.set_telefones( novo_n_telefones );


   // Inserir no arquivo
   pessoa1.fprint(file);

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1316.

void method_1316()
{
   // Definir dados
   std::string file = "Pessoa2.txt";
   Contato pessoa2;
   int novo_n_telefones;

   // Identificacao
   std::cout << std::endl << "Method_1316" << std::endl;

   // Obter do arquivo
   pessoa2.fscan(file);

   // Digitar nova quantidade de telefones
   std::cout << std::endl << "Digite a quantidade de telefones: ";
   std::cin >> novo_n_telefones;
   getchar();

   // Definir novos telefones
   pessoa2.set_telefones( novo_n_telefones );

   // Mostrar dados lidos
   pessoa2.print_single();

   // Identificacao
   pause("Apertar ENTER para continuar");
}


//   Metodo_1317.

void method_1317()
{
   // Definir dados
   std::string file = "Pessoa2.txt";
   Contato pessoa2;
   int quant_telefones;

   // Identificacao
   std::cout << std::endl << "Method_1317" << std::endl;

   // Obter do arquivo
   pessoa2.fscan(file);

   // Obter quantidade de telefones
   quant_telefones = pessoa2.get_n_telefones();

   // Mostrar quantidade de telefones
   std::cout << "O contato do arquivo possui " << quant_telefones << " telefones.";
   linhavazia();

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1318.
 
void method_1318()
{
   // Definir dados
   std::string file = "Pessoa2.txt";
   Contato pessoa2;
   int novo_telefone;

   // Identificacao
   std::cout << std::endl << "Method_1316" << std::endl;

   // Obter do arquivo
   pessoa2.fscan(file);

   // Obter quantidade de telefones
   int quant_telefones = pessoa2.get_n_telefones();

   // Mostrar quantidade de telefones
   std::cout << "O contato do arquivo possui " << quant_telefones << " telefones.";
   linhavazia();

   // Digitar nova quantidade de telefones
   do {
      std::cout << std::endl << "Digite o telefone do contato a ser alterado: ";
      std::cin >> novo_telefone;
      getchar();
      }
   while (novo_telefone >= pessoa2.get_n_telefones());

   // Definir novos telefones
   pessoa2.substitute_telefone( novo_telefone );

   // Mostrar dados lidos
   pessoa2.print_single();

   // Identificacao
   pause("Apertar ENTER para continuar");
}



//   Metodo_1319.
 
void method_1319()
{
   // Definir dados
   Contato pessoa3 ("", 0, 00000000);
   int novo_n_telefones, novo_telefone;
   std::string pessoa;

   // Identificacao
   std::cout << std::endl << "Method_1319" << std::endl;


   // Definir o novo nome
   std::cout << std::endl << "Digite o nome: ";
   std::cin >> pessoa;
   pessoa3.set_nome(pessoa);
   getchar();

   // Digitar nova quantidade de telefones
   std::cout << std::endl << "Digite a quantidade de telefones: ";
   std::cin >> novo_n_telefones;
   getchar();

   // Definir novos telefones
   pessoa3.set_telefones( novo_n_telefones );

   // Mostrar telefones
   pessoa3.print_single();

   // Digitar nova quantidade de telefones
   linhavazia();
   do {
      std::cout << std::endl << "Digite o telefone do contato a ser alterado: ";
      std::cin >> novo_telefone;
      getchar();
      }
   while (novo_telefone >= pessoa3.get_n_telefones());

   // Substituir telefone
   pessoa3.substitute_telefone( novo_telefone );
   
   // Mostrar telefones
   pessoa3.print_single();

   // Encerrar
   pause("Apertar ENTER para continuar");
}


//   Metodo_1320.
 
void method_1320()
{
   // Definir dados
   std::string file = "Pessoa3.txt";
   Contato pessoa3;

   // Identificacao
   std::cout << std::endl << "Method_1320" << std::endl;

   // Obter do arquivo
   pessoa3.fscan(file);

   // Mostrar dados lidos
   pessoa3.print_single();

   // Remover o ultimo telefone
   pessoa3.remove_last_telefone();

   // Mostrar dados
   pessoa3.print_single();

   // Identificacao
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
      std::cout << "C++ - Exercicio" << std::endl;

      // mostrar opcoes
      std::cout << "Opcoes" << std::endl;
      std::cout << " 0 - parar" << std::endl;
      std::cout << " 1 - testar substituicao de nome" << std::endl;
      std::cout << " 2 - testar insercao de telefones" << std::endl;
      std::cout << " 3 - testar substituicao de telefones" << std::endl;
      std::cout << " 4 - ler dados de contato para arquivo" << std::endl;
      std::cout << " 5 - salvar dados de contato em arquivo" << std::endl;
      std::cout << " 6 - demonstrar multiplos telefones" << std::endl;
      std::cout << " 7 - obter quantidade de telefones em um contato" << std::endl;
      std::cout << " 8 - testar substituicao de telefone em um contato" << std::endl;
      std::cout << " 9 - definir um contato e substituir telefone nele" << std::endl;
      std::cout << "10 - remover ultimo telefone de contato" << std::endl;

      // ler do teclado
      std::cout << std::endl << "Entrar com uma opcao: ";
      std::cin >> x;

      // escolher acao
      switch (x)
      {
      case 0:
         method_1310();
         break;
      case 1:
         method_1311();
         break;
      case 2:
         method_1312();
         break;
      case 3:
         method_1313();
         break;
      case 4:
         method_1314();
         break;
      case 5:
         method_1315();
         break;
      case 6:
         method_1316();
         break;
      case 7:
         method_1317();
         break;
      case 8:
         method_1318();
         break;
      case 9:
         method_1319();
         break;
      case 10:
         method_1320();
         break;
      default:
         std::cout << std::endl << "ERRO: Valor invalido." << std::endl;
      } // end switch
   } while (x != 0);

   // encerrar
   pause("Apertar ENTER para terminar");
   return (0);
} // end main ( )