/*
 Exemplo0002 - v 0.2 - 23/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0002 Exemplo0002.c

 Para executar (em Windows):
Exemplo0002
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>


//Exemplo 107
int exemplo_107 ()
{
// definicao de constante com nome e tipo (melhor)
 const float PI = 3.14;

 printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\n" );

 printf ( "\nEXEMPLOS DE VALORES : " );
// Letra ou simbolo
 printf ( "\nCARACTERE : %c", 'A' );
// Valor sem parte fracionaria
 printf ( "\nINTEIRO : %d", 10 );
// Constante real
 printf ( "\nREAL : %f" , PI ); 

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 108
int exemplo_108 ()
{
// definicao de constante com nome e tipo (melhor)
 const float PI = 3.14;
// definicao de variavel real com atribuicao de valor inicial
 float X = 10.01;

 printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\n" );

 printf ( "\nEXEMPLOS DE VALORES : " );
// Letra ou simbolo
 printf ( "\nCARACTERE : %c", 'A' );
// Valor sem parte fracionaria
 printf ( "\nINTEIRO : %d", 10 );
// Constante real
 printf ( "\nREAL : %f", PI );
// Variavel real
 printf ( "\nREAL : %f", X );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
} 


//Exemplo 109
int exemplo_109 ()
{
// definicao de constante com nome e tipo (melhor)
 const float PI = 3.14;
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;

 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\n" );

 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I );
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 110
int exemplo_110 ()
{
// definicao de constante com nome e tipo (melhor)
 const double PI = 3.14;
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
// definicao de variavel caractere
 char N = '\n'; // Mudar de linha

 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\n" );

 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I );
 printf ( "%c%s%f" , N, "REAL : " , X );
 printf ( "%c%s%lf", N, "REAL : " , PI );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 201
int exemplo_201 ()
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO

// VARIAVEL:
 int X = 0;

 printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI: %d", X );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}

//Exemplo 202
int exemplo_202 ()
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL

// VARIAVEL:
 double X = 0.0;

 printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI: %lf", X );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
}


// Funcao principal
int main ( int argc, char* argv []){
//Definindo dados
int opcao = 0;


// Identificacoes gerais

// Especificacoes do programa
printf ( "\nExemplo0002 - Programa v0.2" );
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
printf ("\n%s", "1 - Exemplo 107");
printf ("\n%s", "2 - Exemplo 108");
printf ("\n%s", "3 - Exemplo 109");
printf ("\n%s", "4 - Exemplo 110");
printf ("\n%s", "5 - Exemplo 201");
printf ("\n%s", "6 - Exemplo 202");
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
// Opcao eh 1 (executar exemplo 107)
case 1: exemplo_107 ();
break;
// Opcao eh 2 (executar exemplo 108)
case 2: exemplo_108 ();
break;
// Opcao eh 3 (executar exemplo 109)
case 3: exemplo_109 ();
break;
// Opcao eh 4 (executar exemplo 110)
case 4: exemplo_110 ();
break;
// Opcao eh 5 (executar exemplo 201)
case 5: exemplo_201 ();
break;
// Opcao eh 6 (executar exemplo 202)
case 6: exemplo_202 ();
break;
// Nao corresponde a nenhuma opcao
default: printf ("\n  ERRO:Opcao invalida. \n");
break;
  }
//Fim do comando de repeticao
}
while (opcao !=0);


// Finalizacao

printf ( "\n\n     Aperte ENTER para terminar" );
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
*/

// Comentarios adicionais
/*
Não sei se isso era o esperado, mas a base desse código foi feita com base no guia 00.
Como lembrete ao avisado no Exemplo0000, cada exemplo ira conter um determinado numero de exemplos (para ser mais facil ler, ao inves de todos estarem no mesmo), mas para ser mais facil a localizacao dos exemplos, os exemplos serao tratados em ordem sucessiva como se fossem versoes diferentes do mesmo programa.
*/

// Testes
/*
Versao 0.0 _ Teste 01 (Ok)
Versao 0.1 _ Teste 01 (Ok)
Versao 0.2 _ Teste 01 (Ok)
*/