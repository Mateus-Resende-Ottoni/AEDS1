/*
 Exemplo0006 - v 0.6 - 24/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0006 Exemplo0006.c

 Para executar (em Windows):
Exemplo0006
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para variaveis logicos
#include <string.h> // Para lidar com caracteres
#include <math.h> // Para operacoes matematicas


//Exemplo 401
int exemplo_401 ()
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS

// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;

 printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" );

 CONTADOR = 1;
// REPETIR ENQUANTO ( CONTADOR <= 3 )
 while ( CONTADOR <= 3 )
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 402
int exemplo_402 ()
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS

// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;

 printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );

 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados

 CONTADOR = 1;
 while ( CONTADOR <= N )
 {
 printf ( "\n%d", CONTADOR );

 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 403
int exemplo_403 ()
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS

// VARIAVEIS :
 int X = 0, N = 0;

 printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );

 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados

// REPETIR ENQUANTO N > 0
 while ( N > 0 )
 {
 printf ( "\n%d", N );

 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 N = N - 1;
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 404
int exemplo_404 ()
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS

// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;

 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );

// PARA CONTADOR EM [1:3]
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 405
int exemplo_405 ()
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS

// VARIAVEIS :
 int X = 0,
 N = 0,
 CONTADOR = 0;

 printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );

 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados

// PARA CONTADOR EM [1:N]
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d", X );
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 406
int exemplo_406 ()
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS

// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;

 printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );

 CONTADOR = 1;

 do // REPETIR ATE' ( CONTADOR > 3 )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );

 CONTADOR = CONTADOR + 1;
 }
 while ( CONTADOR <= 3 );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}


//Exemplo 407
int exemplo_407 ()
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS

// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;

 printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );

 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &CONTADOR );
 getchar( ); // limpar a entrada de dados

 do // REPETIR ATE' ( CONTADOR <= 3 )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );

 CONTADOR = CONTADOR - 1;
 }
 while ( CONTADOR > 0 );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 408
int exemplo_408 ()
{
// PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO

// VARIAVEL :
 int X = 0;

 printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );

 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 while ( X != 0 ) // REPETIR ENQUANTO X DIFERENTE DE ZERO
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );

 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );

}


//Exemplo 409
int exemplo_409 ()
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO

// VARIAVEL :
 int X = 0;

 printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );

 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 while ( X == 0 ) // REPETIR ENQUANTO X IGUAL A ZERO
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } 

 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 410
int exemplo_410 ()
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO

// VARIAVEL :
 int X = 0;

 printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );

 do // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }
 while ( X == 0 ); // ATE' X DIFERENTE DE ZERO

 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );

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
printf ( "\nExemplo0006 - Programa v0.6" );
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
printf ("\n%s", "1 - Exemplo 401");
printf ("\n%s", "2 - Exemplo 402");
printf ("\n%s", "3 - Exemplo 403");
printf ("\n%s", "4 - Exemplo 404");
printf ("\n%s", "5 - Exemplo 405");
printf ("\n%s", "6 - Exemplo 406");
printf ("\n%s", "7 - Exemplo 407");
printf ("\n%s", "8 - Exemplo 408");
printf ("\n%s", "9 - Exemplo 409");
printf ("\n%s", "10 - Exemplo 410");
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

// Opcao eh 1 (executar exemplo 401)
case 1: exemplo_401 ();
break;

// Opcao eh 2 (executar exemplo 402)
case 2: exemplo_402 ();
break;

// Opcao eh 3 (executar exemplo 403)
case 3: exemplo_403 ();
break;

// Opcao eh 4 (executar exemplo 404)
case 4: exemplo_404 ();
break;

// Opcao eh 5 (executar exemplo 405)
case 5: exemplo_405 ();
break;

// Opcao eh 6 (executar exemplo 406)
case 6: exemplo_406 ();
break;

// Opcao eh 7 (executar exemplo 407)
case 7: exemplo_407 ();
break;

// Opcao eh 8 (executar exemplo 408)
case 8: exemplo_408 ();
break;

// Opcao eh 9 (executar exemplo 409)
case 9: exemplo_409 ();
break;

// Opcao eh 10 (executar exemplo 410)
case 10: exemplo_410 ();
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
Versao 0.6 _ Teste 01 (Ok)
*/