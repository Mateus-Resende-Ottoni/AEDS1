

#ifndef _MYLIBPLUS_HPP_
#define _MYLIBPLUS_HPP_

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

template <typename T>
class Array
{
private:
   T optional;
   int length;
   T *data;

public:
   Array(int n, T initial)
   {
      optional = initial;
      length = 0;
      data = nullptr;
      // reservar area
      if (n > 0)
      {
         length = n;
         data = new T[length];
      }
   }

   void free()
   {
      if (data != nullptr)
      {
         delete (data);
         data = nullptr;
      } // end if
   } // end free ( )

   void set(int position, T value)
   {
      if (0 <= position && position < length)
      {
         data[position] = value;
      } // end if
   } // end set ( )

   T get(int position)
   {
      T value = optional;

      if (0 <= position && position < length)
      {
         value = data[position];
      } // end if

      return (value);
   } // end get ( )

   void print()
   {
      cout << endl;
      for (int x = 0; x < length; x = x + 1)
      {
         cout << setw(3) << x << " : "
              << setw(9) << data[x]
              << endl;
      } // end for
      cout << endl;
   } // end print ( )

   void read()
   {
      cout << endl;
      for (int x = 0; x < length; x = x + 1)
      {
         cout << setw(3) << x << " : ";
         cin >> data[x];
      } // end for
      cout << endl;
   } // end read ( )

   void random_read(int limite)
   {
      cout << endl;
      for (int x = 0; x < length; x = x + 1)
      {
         data[x] = rand() % limite + 1;
      } // end for
      cout << endl;
   }

   void fprint(string fileName)
   {
      ofstream afile; // output file

      afile.open(fileName);
      afile << length << endl;
      for (int x = 0; x < length; x = x + 1)
      {
         afile << data[x] << endl;
      } // end for
      afile.close();
   } // end fprint ( )

   void fread(string fileName)
   {
      ifstream afile; // input file
      int n = 0;
      afile.open(fileName);
      afile >> n;
      if (n <= 0)
      {
         cout << "\nERROR: Invalid length.\n"
              << endl;
      }
      else
      {
         // guardar a quantidade de dados
         length = n;
         // reservar area
         data = new T[n];
         // ler dados
         for (int x = 0; x < length; x = x + 1)
         {
            afile >> data[x];
         } // end for
      } // end if
      afile.close();
   } // end fread ( )

   int first_even()
   {
      // Dados
      int valor = 0;
      int x = 0;

      while (x < length && valor % 2 != 0)
      {
         valor = data[x];
         x = x + 1;
      }

      if (x == length)
      {
         cout << "Nenhum numero par encontrado";
         return (1);
      }
      else
      {
         return (valor);
      }
   }

   int biggest_even(int first_even)
   {
      // Dados
      int valor = first_even;
      int x = 0;

      while (x < length)
      {
         if (data[x] > valor && data[x] % 2 == 0)
         {
            valor = data[x];
         }
         x = x + 1;
      }

      return (valor);
   }

   int first_odd()
   {
      // Dados
      int valor = 0;
      int x = 0;

      while (x < length && valor % 2 == 0)
      {
         valor = data[x];
         x = x + 1;
      }

      if (x == length)
      {
         cout << endl
              << "Nenhum numero impar encontrado" << endl;
         return (0);
      }
      else
      {
         return (valor);
      }
   }

   int smallest_odd(int first_odd)
   {
      // Dados
      int valor = first_odd;
      int x = 0;

      while (x < length)
      {
         if (data[x] < valor && data[x] % 2 != 0)
         {
            valor = data[x];
         }
         x = x + 1;
      }

      return (valor);
   }

   int interval_add(int limite_inferior, int limite_superior)
   {
      // Dados
      int x = limite_inferior;
      int soma = 0;

      while (x < limite_superior)
      {
         soma = soma + data[x];
         x = x + 1;
      }

      return (soma);
   }

   double intervalo_average(int limite_inferior, int limite_superior)
   {
      // Dados
      int x = limite_inferior, soma = 0;
      double media = 0;
      int tamanho = limite_superior - limite_inferior;

      while (x < limite_superior)
      {
         soma = soma + data[x];
         x = x + 1;
      }

      media = (soma * 1.0) / tamanho;

      return (media);
   }

   bool all_negative()
   {
      // Dados
      bool all_negative = false;
      int x = 0;

      while (x < length && data[x] < 0)
      {
         x = x + 1;
      }

      if (x == length)
      {
         all_negative = true;
      }

      return (all_negative);
   }

   bool ordem_crescente()
   {
      // Dados
      bool ordem_crescente = false;
      int x = 0;

      while (x < (length - 1) && data[x] <= data[x + 1])
      {
         x = x + 1;
      }

      if (x == length - 1)
      {
         ordem_crescente = true;
      }

      return (ordem_crescente);
   }

   bool intervalo_valor_presente(int limite_inferior, int limite_superior, int valor)
   {
      bool valor_presente = false;
      int x = limite_inferior;

      while (x < limite_superior && data[x] != valor)
      {
         x = x + 1;
      }

      if (x < limite_superior)
      {
         valor_presente = true;
      }

      return (valor_presente);
   }

   void intervalo_escalar(int limite_inferior, int limite_superior, int constante)
   {
      for (int x = limite_inferior; x < limite_superior; x++)
      {
         data[x] = data[x] * constante;
      }
   }

   void organize_decrescente()
   {
      int valor = 0, x = 0;
      bool desorganizado = true;

      while (desorganizado == true)
      {
         desorganizado = false;
         for (x = 0; x < (length - 1); x++)
         {
            if (data[x] < data[x + 1])
            {
               valor = data[x];
               data[x] = data[x + 1];
               data[x + 1] = valor;
               desorganizado = true;
            }
         }
      }
   }

   Array() // construtor padrao
   {
      // definir valores iniciais
      length = 0;
      // reservar area
      data = nullptr;
   } // end constructor

   // contrutor baseado em copia
   Array(int length, int other[])
   {
      if (length <= 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         // criar copia
         this->length = length;
         // reservar area
         data = new T[this->length];
         // ler dados
         for (int x = 0; x < this->length; x = x + 1)
         {
            data[x] = other[x];
         } // end for
      } // end if
   } // end constructor ( )

   Array(const Array &other)
   {
      if (other.length <= 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         // criar copia
         length = other.length;
         // reservar area
         data = new T[other.length];
         // ler dados
         for (int x = 0; x < length; x = x + 1)
         {
            data[x] = other.data[x];
         } // end for
      } // end if
   } // end constructor ( )

   Array &operator=(const Array<T> other)
   {
      if (other.length <= 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         this->length = other.length;
         this->data = new T[other.length];
         for (int x = 0; x < this->length; x = x + 1)
         {
            data[x] = other.data[x];
         } // end for
      } // end if
      return (*this);
   } // end operator= ( )

   bool operator==(const Array<T> other)
   {
      bool result = false;
      int x = 0;

      if (other.length == 0 || length != other.length)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         x = 0;
         result = true;
         while (x < this->length && result)
         {
            result = result && (data[x] == other.data[x]);
            x = x + 1;
         } // end while
      } // end if
      return (result);
   } // end operator== ( )

   Array &operator+(const Array<T> other)
   {
      static Array<T> result(other);

      if (other.length <= 0)
      {
         cout << "\nERROR: Missing data.\n"
              << endl;
      }
      else
      {
         for (int x = 0; x < this->length; x = x + 1)
         {
            result.data[x] = result.data[x] + this->data[x];
         } // end for
      } // end if
      return (result);
   } // end operator+ ( )

   const int getLength()
   {
      return (length);
   } // end getLength ( )

   T &operator[](const int position)
   {
      static T value = optional;

      if (position < 0 || length <= position)
      {
         cout << endl
              << "\nERROR: Invalid position.\n"
              << endl;
      }
      else
      {
         value = data[position];
      } // end if
      return (value);
   } // end operator [ ]
};
#endif

/*
   General functions
*/

int readint(string texto)
{
   // Dados
   int valor = 0;

   cout << texto;
   cin >> valor;

   return (valor);
}
