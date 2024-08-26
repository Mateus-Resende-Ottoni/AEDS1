/*
 Exemplo0000 - v 0.0 - 22/02/2024
 Author: Mateus Resende Ottoni - 1525230
*/

/*
 Para compilar (em Windows):
gcc -o Exemplo0000 Exemplo0000.c

 Para executar (em Windows):
Exemplo0000
*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>


//Metodo 01
void method_01 (void)
{
printf ("%s\n", "\nMetodo 01");

printf ("\n     Aperte ENTER para continuar. \n");
getchar ();
}


// Funcao principal
int main ( int argc, char* argv []){
//Definindo dados
int opcao = 0;


// Identificacoes gerais

// Especificacoes do programa
printf ( "\nExemplo0000 - Programa v0.0" );
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
printf ("\n%s", "1 - Metodo 01");
printf ("\n");

//Ler opcao do teclado
printf ("%s\n", "\nDigite o numero de sua opcao");
scanf ("%d", &opcao);
getchar ();

//Mostrar opcao lida
printf ("\n%s%d", "Opcao = ", opcao);

//Acao dependendo da escolha (opcao)
switch (opcao)
  {
// Opcao inserida eh 0 (terminar)
case 0: break;
// Opcao eh 1 (executar metodo 01)
case 1: method_01 ();
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
*/

// Comentarios adicionais
/*
Não sei se isso era o esperado, mas a base desse código foi feita com base no guia 00.
Vou usar esse arquivo como base para agrupar os exemplos de 5 em 5 em arquivos distintos.
*/

// Testes
/*
Versao 0.0 _ Teste 01 (Ok)
*/