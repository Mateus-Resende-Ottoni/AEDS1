

#ifndef _CONTATO_HPP_
#define _CONTATO_HPP_

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

#define null nullptr



class Contato
{
private:
	std::string nome;
	int n_telefones;
	int telefone [15];


public:

// Construtores
Contato ()
	{
	this->nome = "";
	this->n_telefones = 0;
	this->telefone[0] = 00000000;
	}

Contato (std::string nome_inicial, int n_telefones_inicial, int telefone_inicial)
	{
	this->nome = nome_inicial;
	this->n_telefones = n_telefones_inicial;
	for ( int x = 0 ; x < this->n_telefones ; x = x + 1 )
	    {
	    this->telefone[x] = telefone_inicial;
	    }
	}




void set_nome ( std::string novo_nome )
	{
	this->nome = novo_nome;
	}


std::string get_nome ()
	{
	return ( this->nome );
	}




void set_telefones ( int novo_ntelefones )
	{
	this->n_telefones = novo_ntelefones;
	for ( int x = 0 ; x < novo_ntelefones ; x = x + 1 )
	    {
	    std::cout << std::endl << "Telefone [" << x << "]: ";
	    std::cin >> this->telefone[x];
	    getchar();
	    }
	}


void substitute_telefone ( int n_telefone )
	{
	this->telefone[n_telefone] = readint ("Defina o novo substituto do telefone: ");
	}


void remove_last_telefone ()
	{
	this->telefone [n_telefones-1] = 00000000;
	this->n_telefones = this->n_telefones - 1;
	}


int get_telefone ( int n_telefone )
	{
	return ( this->telefone[n_telefone] );
	}


int get_n_telefones ()
	{
	return ( this->n_telefones );
	}




void print_single ()
	{
	std::cout << std::endl << std::endl;
	std::cout << this->nome;
	std::cout << " _ Numero de telefones: " << this->n_telefones;
	if(this->n_telefones > 0)
	    {
	    for ( int y = 0; y < this->n_telefones ; y = y + 1 )
		{
		std::cout << std::endl << " / " << this->telefone[y] << " / ";
		}
	    }
	std::cout << std::endl << std::endl;
	}


void fprint ( std::string filename )
	{
	std::cout << std::endl;

	std::ofstream arquivo(filename);


	arquivo << this->nome;
	arquivo << std::endl << this->n_telefones;
	for ( int x = 0; x < this->n_telefones ; x = x + 1 )
	    {
	    arquivo << std::endl << this->telefone[x];
	    }
	}


void fscan ( std::string filename )
	{
	std::cout << std::endl;

	std::ifstream arquivo(filename);

	arquivo >> this->nome;
	arquivo >> this->n_telefones;
	for ( int x = 0; x < this->n_telefones ; x = x + 1 )
	    {
	    arquivo >> this->telefone[x];
	    }
	}


}; // Fim da classe




#endif