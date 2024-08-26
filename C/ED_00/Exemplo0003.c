/*
 Exemplo0003 - v 0.3 - 24/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0003 Exemplo0003.c

 Para executar (em Windows):
Exemplo0003
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para valores logicos


//Exemplo 203
int exemplo_203 ()
{
// PROGRAMA PARA LER E IMPRIMIR UM CARACTERE

// VARIAVEL:
 char X = '0';

 printf ( "EXEMPLO 203 - LER E IMPRIMIR UM CARACTERE" );
 printf ( "\n" );

 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nO VALOR DIGITADO FOI: %c", X );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 204
int exemplo_204 ()
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES

// VARIAVEL:
 char X [10];

 printf ( "EXEMPLO 204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\n" );

 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados

 printf ( "\nFOI DIGITADO: %s", X );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
} 


//Exemplo 205
int exemplo_205 ()
{
// PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS

// VARIAVEIS:
 int X=0, Y=0, Z=0;

 printf ( "EXEMPLO 205 - LER E SOMAR DOIS VALORES INTEIROS" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados

 Z = X + Y;
 printf ( "\nA SOMA DOS DOIS = %d", Z );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );

 return ( EXIT_SUCCESS );
}


//Exemplo 206
int exemplo_206 ()
{
// PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS

// VARIAVEIS:
 float X=0.0, Y=0.0, Z=0.0;

 printf ( "EXEMPLO 206 - LER E SUBTRAIR DOIS VALORES REAIS" );
 printf ( "\n" );

 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%f", &Y );
 getchar( ); // limpar a entrada de dados

 Z = X - Y;
 printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 207
int exemplo_207 ()
{
// PROGRAMA PARA OPERAR VALORES LOGICOS

// VARIAVEIS:
 bool X=false, Y=false, Z=false;

 printf ( "EXEMPLO 207 - OPERAR VALORES LOGICOS" );
 printf ( "\n" );

 X = true;
 Y = false;
 Z = X || Y; // X ou Y
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\n" );

 Z = X && Y; // X e Y
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\n" );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );

 return ( EXIT_SUCCESS );
}

//Exemplo 208
int exemplo_208 ()
{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO

// VARIAVEIS:
 double D = 0.0, // Distancia
 T = 0.0, // Tempo
 V = 0.0; // Velocidade

 printf ( "EXEMPLO 208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\n" );

 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D );
 getchar( ); // limpar a entrada de dados

 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados

 V = D / T;
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
 printf ( "\n" );

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
printf ( "\nExemplo0003 - Programa v0.3" );
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
printf ("\n%s", "1 - Exemplo 203");
printf ("\n%s", "2 - Exemplo 204");
printf ("\n%s", "3 - Exemplo 205");
printf ("\n%s", "4 - Exemplo 206");
printf ("\n%s", "5 - Exemplo 207");
printf ("\n%s", "6 - Exemplo 208");
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
// Opcao eh 1 (executar exemplo 203)
case 1: exemplo_203 ();
break;
// Opcao eh 2 (executar exemplo 204)
case 2: exemplo_204 ();
break;
// Opcao eh 3 (executar exemplo 205)
case 3: exemplo_205 ();
break;
// Opcao eh 4 (executar exemplo 206)
case 4: exemplo_206 ();
break;
// Opcao eh 5 (executar exemplo 207)
case 5: exemplo_207 ();
break;
// Opcao eh 6 (executar exemplo 208)
case 6: exemplo_208 ();
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
Versao 0.3 _ Teste 01 (Ok)
*/