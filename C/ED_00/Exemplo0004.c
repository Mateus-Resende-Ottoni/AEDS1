/*
 Exemplo0004 - v 0.4 - 24/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0004 Exemplo0004.c

 Para executar (em Windows):
Exemplo0004
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para valores logicos
#include <string.h> // Para lidar com caracteres
#include <math.h> // Para operacoes matematicas


//Exemplo 209
int exemplo_209 ()
{
// PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA

// CONSTANTE:
 const char SENHA[5] = "XXXX";

// VARIAVEL:
 char S [10];

 printf ( "EXEMPLO 209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\n" );

 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
// OBS.: NAO usar o (&) para scan de caracteres
 scanf ( "%s", S );
 getchar( ); // limpar a entrada de dados

 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
// strcmp(S1,S2) compara S1 com S2
// igual a 0: S1 = S2 => 1 ( verdadeiro )
// diferente: S1 <> S2 => 0 ( falso )
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( ( EXIT_SUCCESS ) );
}


//Exemplo 210
int exemplo_210 ()
{
// PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO

// CONSTANTE:
 const double PI = 3.14;

// VARIAVEIS:
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;

 printf ( "EXEMPLO 210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\n" );

 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); // limpar a entrada de dados

 COSSENO = sqrt( 1.0 - pow(SENO,2) );
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE );
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
} 


//Exemplo 301
int exemplo_301 ()
{
// PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO

// VARIAVEL:
 int X = 0;

 printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 if ( X == 0 )
 printf ( "\nO VALOR DIGITADO FOI ZERO" );

 else
 printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );

 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 

 return ( EXIT_SUCCESS );
}


//Exemplo 302
int exemplo_302 ()
{
// PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO

// VARIAVEL:
 float X = 0.0;

 printf ( "EXEMPLO 302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados

 if( X != 0.0 )
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 303
int exemplo_303 ()
{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO

// VARIAVEL:
 char X = '0';

 printf ( "EXEMPLO 303 - LER E TESTAR UM CARACTERE" );
 printf ( "\n" );

 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

// Deteccao (if) se eh algarismo
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 }
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}

//Exemplo 304
int exemplo_304 ()
{
// PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO

// VARIAVEL:
 char X = '0';

 printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
 printf ( "\n" );

 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

// Deteccao (if) se nao eh algarismo
 if( !( X >= '0' && X <= '9') )
 {
 printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
 printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
 }
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar

 return ( EXIT_SUCCESS );
}


// Funcao principal
int main ( int argc, char* argv []){
//Definindo dados
int opcao = 0;


// Identificacoes gerais

// Especificacoes do programa
printf ( "\nExemplo0004 - Programa v0.4" );
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
printf ("\n%s", "1 - Exemplo 209");
printf ("\n%s", "2 - Exemplo 210");
printf ("\n%s", "3 - Exemplo 301");
printf ("\n%s", "4 - Exemplo 302");
printf ("\n%s", "5 - Exemplo 303");
printf ("\n%s", "6 - Exemplo 304");
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
// Opcao eh 1 (executar exemplo 209)
case 1: exemplo_209 ();
break;
// Opcao eh 2 (executar exemplo 210)
case 2: exemplo_210 ();
break;
// Opcao eh 3 (executar exemplo 301)
case 3: exemplo_301 ();
break;
// Opcao eh 4 (executar exemplo 302)
case 4: exemplo_302 ();
break;
// Opcao eh 5 (executar exemplo 303)
case 5: exemplo_303 ();
break;
// Opcao eh 6 (executar exemplo 304)
case 6: exemplo_304 ();
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
*/