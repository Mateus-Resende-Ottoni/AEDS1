/*
 Exemplo0001 - v 0.1 - 23/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0001 Exemplo0001.c

 Para executar (em Windows):
Exemplo0001
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>


//Exemplo101
void exemplo_101 (void)
{
printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );

// para esperar
 getchar ( );
}


//Exemplo102
int exemplo_102 ()
{
// (Windows) para limpar a tela
system ( "cls" );

 printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );

// para esperar
getchar ( );

 return ( EXIT_SUCCESS );
}


//Exemplo 103
//Funcao para limpar a tela
void clrscr ( ) { system ( "cls" ); }

int exemplo_103 ()
{
 clrscr ( );
 printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" );
 printf ( "MATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} 


//Exemplo 104
int exemplo_104 ()
{
 printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" );
 printf ( "MATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );
 printf ( "\n" );
 printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( );
 return ( EXIT_SUCCESS );
}


//Exemplo 105
int exemplo_105 ()
{
 printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );

 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", 3.1415 ); // valor com parte fracionaria

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( );
 return ( EXIT_SUCCESS );
}


//Exemplo 106
// definicao de macro (nome para substituir valor)
#define PI (3.1415)

int exemplo_106 ()
{
 printf ( "EXEMPLO106 - PRIMEIRO EXEMPLO EM C " );
 printf ( "\nMATRICULA: 855842 ALUNO : Mateus Resende Ottoni" );

 printf ( "\nEXEMPLOS DE VALORES : " );
// Letra ou simbolo
 printf ( "\nCARACTERE : %c", 'A' );
// Valor sem parte fracionaria
 printf ( "\nINTEIRO : %d", 10 );
// Emprego de macro
 printf ( "\nREAL : %f", PI );

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
printf ( "\nExemplo0001 - Programa v0.1" );
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
printf ("\n%s", "1 - Exemplo 101");
printf ("\n%s", "2 - Exemplo 102");
printf ("\n%s", "3 - Exemplo 103");
printf ("\n%s", "4 - Exemplo 104");
printf ("\n%s", "5 - Exemplo 105");
printf ("\n%s", "6 - Exemplo 106");
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
// Opcao eh 1 (executar exemplo 101)
case 1: exemplo_101 ();
break;
// Opcao eh 2 (executar exemplo 102)
case 2: exemplo_102 ();
break;
// Opcao eh 3 (executar exemplo 103)
case 3: exemplo_103 ();
break;
// Opcao eh 4 (executar exemplo 104)
case 4: exemplo_104 ();
break;
// Opcao eh 5 (executar exemplo 105)
case 5: exemplo_105 ();
break;
// Opcao eh 6 (executar exemplo 106)
case 6: exemplo_106 ();
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
0.1        22/02      Removido Metodo 01
                      Inserido Exemplos 101 a 106
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
*/