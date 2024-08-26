

#ifndef _MYLIBPLUS_HPP_
#define _MYLIBPLUS_HPP_

// Bibliotecas

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>


#include <iomanip>

#include <string>

#include <fstream>


#define null nullptr



int readint(std::string texto)
{
   // Dados
   int valor = 0;

   std::cout << texto;
   std::cin >> valor;

   return (valor);
}


void pause(std::string text)
{
   std::string dummy;
   std::cin.clear();
   std::cout << std::endl << text;
   std::cin.ignore();
   std::getline(std::cin, dummy);
   std::cout << std::endl << std::endl;
}


void linhavazia()
{
   std::cout << std::endl;
}


#endif