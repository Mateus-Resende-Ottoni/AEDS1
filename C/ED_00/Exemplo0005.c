/*
 Exemplo0005 - v 0.5 - 24/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0005 Exemplo0005.c

 Para executar (em Windows):
Exemplo0005
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para variaveis logicos
#include <string.h> // Para lidar com caracteres
#include <math.h> // Para operacoes matematicas


//Exemplo 305
int exemplo_305 ()
{
// PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS

// VARIAVEIS:
 int X=0, Y=0;

 printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
 printf ( "\n" );


 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados

 if( X == Y )
 printf ( "\nDOIS VALORES IGUAIS" );

 else
 {
 printf ( "\n%d", X );
 printf ( " DIFERENTE DE " );
 printf ( "%d", Y );
 }

 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 306
int exemplo_306 ()
{
// PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS

// VARIAVEIS:
 double X=0.0, Y=0.0;

 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( ); // limpar a entrada de dados

// if VALORES DIFERENTES
 if( ! (X == Y) )
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }

 else
 {
 printf ( "VALORES IGUAIS" );
 }

 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 307
int exemplo_307 ()
{
// PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS

// VARIAVEIS:
 int X=0, Y=0;
 bool Z=false;

 printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 printf ( "\n" );

 Z = (X == Y);

 if( Z )
 printf ( "VALORES IGUAIS" );

 else
 printf ( "VALORES DIFERENTES" );

 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 308
int exemplo_308 ()
{
// PROGRAMA PARA LER E TESTAR UMA LETRA

// VARIAVEL:
 char X = '0';

 printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
 printf ( "\n" );

 printf ( "\nFORNECER UMA LETRA QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\n" );

 if( X >= 'A' && X <= 'Z' )
 printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );

 else
 if( X >= 'a' && X <= 'z' )
 printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );

 else
 printf ( "NAO FOI DIGITADA UMA LETRA" );

 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 309
int exemplo_309 ()
{
// PROGRAMA PARA COMPARAR CARACTERES < , = , >

// VARIAVEL:
 char X = '0';

 printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
 printf ( "\n" );

 printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\n" );

// COMPARACAO DE X COM < , = , >
 switch( X )
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
 break;

 case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
 break;

 case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
 break;

 default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 }
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 310
int exemplo_310 ()
{
// PROGRAMA PARA IDENTIFICAR CARACTERES

// VARIAVEL
 char X = '0';

 printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
 printf ( "\n" );

 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\n" );

// IDENTIFICACAO DE UM CARACTERE
 switch ( X )
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break;

 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
 printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
 break;

 default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 }
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


// Funcao principal
int main ( int argc, char* argv []){
//Definindo dados
int opcao = 0;


// Identificacoes gerais

// Especificacoes do programa
printf ( "\nExemplo0005 - Programa v0.5" );
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
printf ("\n%s", "1 - Exemplo 305");
printf ("\n%s", "2 - Exemplo 306");
printf ("\n%s", "3 - Exemplo 307");
printf ("\n%s", "4 - Exemplo 308");
printf ("\n%s", "5 - Exemplo 309");
printf ("\n%s", "6 - Exemplo 310");
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
// Opcao inserida eh 0 (terminar)
case 0: break;
// Opcao eh 1 (executar exemplo 305)
case 1: exemplo_305 ();
break;
// Opcao eh 2 (executar exemplo 306)
case 2: exemplo_306 ();
break;
// Opcao eh 3 (executar exemplo 307)
case 3: exemplo_307 ();
break;
// Opcao eh 4 (executar exemplo 308)
case 4: exemplo_308 ();
break;
// Opcao eh 5 (executar exemplo 309)
case 5: exemplo_309 ();
break;
// Opcao eh 6 (executar exemplo 310)
case 6: exemplo_310 ();
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
*/

// Comentarios adicionais
/*
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
*/