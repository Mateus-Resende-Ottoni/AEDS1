/*
 Exemplo0006 - v 0.7 - 24/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0007 Exemplo0007.c

 Para executar (em Windows):
Exemplo0007
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para variaveis logicos
#include <string.h> // Para lidar com caracteres
#include <math.h> // Para operacoes matematicas

#include "my_lib.h" // Para funcoes proprias
#include "my_def.h" // Para definicoes globais, constantes ...


//Exemplo 501

void P1 ( void )
{
 printf ( "\n" );
 printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
 printf ( "\n" );
}

int exemplo_501 ()
{
// PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS

 printf ( "EXEMPLO 501 - CHAMADA A UM PROCEDIMENTO", "\n" );

// Chamada ao procedimento
 P1 ( );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 

 return ( EXIT_SUCCESS );
}


//Exemplo 502

int X = 0; // VARIAVEL EM CONTEXTO GLOBAL

void P2 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P2 %d VEZ(ES)", X );
printf ( "\n" );
}

int exemplo_502 ()
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS

 printf ( "EXEMPLO 502 - CHAMADA COM VARIAVEL GLOBAL\n" );

 for ( X = 1; X <= 5; X = X + 1 )
 P2 ( ); // chamar 5 vezes
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 503

int C = 0; // VARIAVEL EM CONTEXTO GLOBAL

void P3 ( void )
{
 C = C + 1; // AVANCAR O CONTEXTO

 printf ( "\nCHAMADO O PROCEDIMENTO P3 %d VEZ(ES)", C );
 printf ( "\n" );

 if ( C < 5 )
 P3 ( ); // CHAMAR O PROCEDIMENTO RECURSIVAMENTE
 printf ( "\nRETORNANDO AO PROCEDIMENTO P3 PARA A CHAMADA %d", C );

 C = C - 1; // RETORNAR AO CONTEXTO ANTERIOR

 getchar ( ); // para esperar
}

int exemplo_503 ()
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS

 printf ( "EXEMPLO 503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );

 C = 0;

 P3 ( ); // OBSERVAR A RECURSIVIDADE !
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 504

void P4 ( int X )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P4 %d VEZ(ES)\n", X );

 if ( X < 5 )
 P4( X + 1 ); // chamar recursivamente com parametro

 printf ( "\nRETORNANDO AO PROCEDIMENTO P4 PARA A CHAMADA %d", X );

 getchar ( );
}

int exemplo_504 ()
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS

 printf ( "EXEMPLO 504 - CHAMADA/RETORNO COM PARAMETRO\n" );

 P4 ( 1 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 505

void P5 ( int X )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P5 %d VEZ(ES)\n", X );

 if ( X > 1 )
 P5 ( X - 1 );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P5 PARA A CHAMADA %d", X );

 getchar ( );
}

int exemplo_505 ()
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
 printf ( "EXEMPLO 505 - CHAMADA/RETORNO COM PARAMETRO\n" );

 P5 ( 5 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 506

void P602 (int X); // PROTOTIPO DE PROCEDIMENTO

void P601 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P601 COM X = %d\n", X );
 if ( X < 5 )
 P602 ( X );
 printf ( "RETORNANDO AO PROCEDIMENTO P601 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
}

void P602 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P602 COM X = %d\n", X );
 X = X+1;
 printf ( "RETORNANDO AO PROCEDIMENTO P602 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
 P601 ( X );
}

int exemplo_506 ()
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS

 printf ( "EXEMPLO 506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );

 P601 ( 1 ); // OBSERVAR RECURSIVIDADE INDIRETA !
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 507

void P7 ( int* X )
{
// AVANCAR O CONTEXTO NA REFERENCIA
 *X = *X + 1;

 printf ( "\nCHAMADO O PROCEDIMENTO P7 %d VEZ(ES)\n", *X );

 if ( *X < 5 )
 P7 ( X );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P7 PARA A CHAMADA %d", *X );

// RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
 *X = *X - 1;

 getchar ( );
}

int exemplo_507 ()
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA

// VARIAVEL LOCAL
 int X;

 printf ( "EXEMPLO 507 - CHAMADA/RETORNO COM REFERENCIA\n" );

 X = 0;
 P7 ( &X ); // OBSERVAR REPETICAO FINITA !
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 508

void P802 ( int X ); // PROTOTIPO DE PROCEDIMENTO
void P801 ( int X )
{
 X = X + 1;
 printf ( "CHAMADO O PROCEDIMENTO P801 COM X = %d\n", X );
 if ( X < 4 )
 {
 P801 ( X );
 P802 ( X );
 }
 printf ( "\nRETORNANDO AO PROCEDIMENTO P801 PARA A CHAMADA COM X = %d\n", X );

 getchar ( ) ;
}

void P802 ( int X )
{
 printf ( "CHAMADO O PROCEDIMENTO P802 COM X = %d\n", X );

 if ( X > 1 )
 P802 ( X - 1 );

 printf ( "RETORNANDO AO PROCEDIMENTO P802 PARA A CHAMADA COM X = %d", X );
 getchar ( );
}

int exemplo_508 ()
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS

 printf ( "EXEMPLO 508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
 P801 ( 1 );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 509
int exemplo_509 ()
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS

 println ( "EXEMPLO 509 - USO DE MODULOS" );
 pause ( "PRESSIONAR <Enter> PARA TERMINAR." );

 return ( EXIT_SUCCESS );
}


//Exemplo 510
int exemplo_510 ()
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS

// VARIAVEIS :
 chars text = "MUDAR DE LINHA";

 println ( "EXEMPLO0509 - USO DE MODULOS" );

 printf ( "%c", EOL );
 printf ( "%s%c", text, EOL );

 pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
 return ( EXIT_SUCCESS );
}


// Funcao principal
int main ( int argc, char* argv []){
//Definindo dados
int opcao = 0;


// Identificacoes gerais

// Especificacoes do programa
printf ( "\nExemplo0007 - Programa v0.7" );
// Identificacao do autor
printf ( "\nAutor:Mateus Resende Ottoni" );
// Mudanca de linha
printf ( "\n");


// Acoes

//Para repetir ate o usuario digitar 0 (terminar)
do
{
//Mostrar opcoes
printf ("\n%s", "Opcoes:");
printf ("\n%s", "0 - Terminar");
printf ("\n%s", "1 - Exemplo 501");
printf ("\n%s", "2 - Exemplo 502");
printf ("\n%s", "3 - Exemplo 503");
printf ("\n%s", "4 - Exemplo 504");
printf ("\n%s", "5 - Exemplo 505");
printf ("\n%s", "6 - Exemplo 506");
printf ("\n%s", "7 - Exemplo 507");
printf ("\n%s", "8 - Exemplo 508");
printf ("\n%s", "9 - Exemplo 509");
printf ("\n%s", "10 - Exemplo 510");
printf ("\n");

//Ler opcao do teclado
printf ("%s\n", "\nDigite o numero de sua opcao");
scanf ("%d", &opcao);
getchar ();

//Mostrar opcao lida
printf ("\n%s%d", "Opcao = ", opcao);
printf ("\n\n");

//Acao dependendo da escolha (opcao)
switch (opcao)
  {
// Opcao inserida e' 0 (terminar)
case 0: break;

// Opcao e' 1 (executar exemplo 501)
case 1: exemplo_501 ();
break;

// Opcao e' 2 (executar exemplo 502)
case 2: exemplo_502 ();
break;

// Opcao e' 3 (executar exemplo 503)
case 3: exemplo_503 ();
break;

// Opcao e' 4 (executar exemplo 504)
case 4: exemplo_504 ();
break;

// Opcao e' 5 (executar exemplo 505)
case 5: exemplo_505 ();
break;

// Opcao e' 6 (executar exemplo 506)
case 6: exemplo_506 ();
break;

// Opcao e' 7 (executar exemplo 507)
case 7: exemplo_507 ();
break;

// Opcao e' 8 (executar exemplo 508)
case 8: exemplo_508 ();
break;

// Opcao e' 9 (executar exemplo 509)
case 9: exemplo_509 ();
break;

// Opcao e' 10 (executar exemplo 510)
case 10: exemplo_510 ();
break;

// Nao corresponde a nenhuma opcao
default: printf ("\n  ERRO:Opcao invalida. \n");
break;
  }
//Fim do comando de repeticao
}
while (opcao !=0);


// Finalizacao

printf ( "\n\n     Aperte ENTER para terminar o programa" );
// Para aguardar o input do usuario
getchar ( );
return ( 0 );
}

//Historico
/*
Versao     Data       Modificacoes
0.0        22/02      Codigo criado
0.1        23/02      Removido Metodo 01
                      Inserido Exemplos 101 a 106
0.2        23/02      Removidos Exemplos 101 a 106
                      Inserido Exemplos 107 a 110 e 201 a 202
0.3        24/02      Removidos Exemplos 107 a 110 e 201 a 202
                      Inseridos Exemplos 203 a 208
0.4        24/02      Removidos Exemplos 203 a 208
                      Inseridos Exemplos 209 a 210 e 301 a 304
0.5        24/02      Removidos Exemplos 209 a 210 e 301 a 304
                      Inseridos Exemplos 305 a 310
0.6        24/02      Removidos Exemplos 305 a 310
                      Inseridos Exemplos 401 a 410
0.7        24/02      Removidos Exemplos 401 a 410
                      Inseridos Exemplos 501 a 510
*/

// Comentarios adicionais
/*
Apesar que as instruçoes foram de copiar os exemplos, devido a minha intencao de ter varios no mesmo arquivo, eu tive de alterar algumas das nomenclaturas devido a alguns conflitos de nomes.
A base desse código foi feita com base no guia 00.
Como lembrete ao avisado no Exemplo0000, cada exemplo ira conter um determinado numero de exemplos (para ser mais facil ler, ao inves de todos estarem no mesmo), mas para ser mais facil a localizacao dos exemplos, os exemplos serao tratados em ordem sucessiva como se fossem versoes diferentes do mesmo programa, apesar das diferentes funcionalidades.
*/

// Testes
/*
Versao 0.0 _ Teste 01 (Ok)
Versao 0.1 _ Teste 01 (Ok)
Versao 0.2 _ Teste 01 (Ok)
Versao 0.3 _ Teste 01 (Ok)
Versao 0.4 _ Teste 01 (Ok)
Versao 0.5 _ Teste 01 (Ok)
Versao 0.6 _ Teste 01 (Ok)
Versao 0.7 _ Teste 01 (Ok)
*/