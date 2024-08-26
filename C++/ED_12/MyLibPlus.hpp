

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

#endif