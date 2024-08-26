// Identificacao geral
/*

Exemplo0109 - v0.9
Data de modificacao da versao: 29/02/2024
Author: Mateus Resende Ottoni
Matricula: 855842

*/


// Comandos para a janela de comandos
/*

Para compilar (Windows):
gcc -o Exemplo0109 Exemplo0109.c

Para executar (Windows):
Exemplo0109

*/


// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>



// Metodo 01 
void metodo_01 (void)
{
// Definir dados
int x = 0;


// Identificacao do metodo
printf ( "%s\n", "Metodo 01" );
printf ( "\n" );


// Mostrar valor inicial
printf ( "%s%d\n", "x = ", x );
printf ( "\n" );


// Determinar valor
// Ler input
printf ( "%s\n", "Digite um valor inteiro:" );
scanf ("%d", &x );
getchar ();

// Mostrar valor escolhido
printf ( "\n%s%d", "Valor escolhido: ", x);
printf ( "\n%s%d", "\nx = ", x );
printf ( "\n" );


// Encerramento do metodo
printf ( "%s\n", "\nAperte ENTER para continuar\n");
getchar ();
}



// Metodo 02
void metodo_02 (void)
{
// Definir dados
double x = 0.0;


// Identificacao do metodo
printf ( "%s\n", "Metodo 02" );


// Mostrar valor inicial
printf ( "\n%s%lf", "x = ", x );


// Determinar valor
// Ler input
printf ( "\n" );
printf ( "%s\n", "Digite um valor real:" );
scanf ("%lf", &x );
getchar ();

// Mostrar valor escolhido
printf ( "\n%s%lf", "Valor escolhido: ", x);
printf ( "\n%s%lf", "\nx = ", x );
printf ( "\n" );


// Encerramento do metodo
printf ( "%s\n", "\nAperte ENTER para continuar\n");
getchar ();
}



// Metodo 03
void metodo_03 (void)
{
// Definir dados
char x = 'A';


// Identificacao do metodo
printf ( "%s\n", "Metodo 03" );


// Mostrar valor inicial dos dados
printf ( "\n%s%c\n", "x = ", x );


// Ler input
printf ( "\n%s\n", "Digite um caractere: " );
scanf ( "%c", &x );
getchar ();


// Mostrar valor lido
printf ("\n%s%c\n", "x = ", x);


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 04
void metodo_04 (void)
{
// Definir dados
bool x = false;
int y = 0;


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 04" );


// Mostrar valor inicial (valor boolean convertido para inteiro)
printf ( "\n%s%d\n", "x = ", x);


// Ler input
printf ( "\n%s\n", "Digite um valor logico: " );
scanf ( "%d", &y );
getchar ();

// Garantir valor logico no intervalo (0: 1)
x = (y!=0);

//Mostrar valor lido
printf ( "\n%s%d\n", "x = ", x );


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 05
void metodo_05 (void)
{
// Definir dados
char x [80] = "abc";
char *px = &x[0];


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 05" );


// Mostrar valor inicial
printf ( "\n%s%s\n", "x = ", x );


// Ler do teclado
printf ( "\n%s\n", "Digite uma cadeia de ate 80 caracteres: " );
scanf ( "%s", x );
getchar ();

// Mostrar valor lido
printf ( "\n%s%s\n", "x = ", x);


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 06
void metodo_06 (void)
{
// Definir dados
int x = 0;
int y = 0;
int z = 0;
int *py = &y;


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 06" );


// Mostrar dados iniciais
printf ( "\n%s%d\n", "x = ", x);
printf ( "\n%s%d\n", "y = ", y);


// Ler input
printf ( "\n%s", "Digite um valor inteiro: " );
scanf ( "\n%d", &x );
getchar ();

// Ler outro input
printf ( "%s", "Digite outro valor inteiro: " );
scanf ( "\n%d", py );
getchar ();


// Operar com os dados (z igual ao produto de x e y)
z = x * y;

// Mostrar valor resultante
printf ( "\n%s(%d)*(%d) = (%d)\n", "z = ", x,y,z );


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 07
void metodo_07 (void)
{
// Definir dados
char x [80] = "abc";
char y [80] = "def";
char z [80];
// Copiar em z a representacao do vazio
strcpy (z, "");


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 07" );


// Mostrar valores iniciais e tamanho das cadeias
printf ( "%s%s (%d)\n", "x = ", x, strlen (x) );
printf ( "%s%s (%d)\n", "y = ", y, strlen (y) );


// Ler do teclado
printf ( "\n%s\n", "Digite ate 80 caracteres: ");
scanf ( "%s", x);
getchar ();

// Ler outro input do teclado
printf ( "\n%s\n", "Digite outros caracteres: ");
scanf ( "%s", y);
getchar ();


// Operar com os dados

// Copiar x para z
strcpy (z, x);
// Juntar valor de y a z
strcat (z, y);

//Mostrar valor resultante
printf ( "\n%s[%s]*[%s]=[%s]\n", "z = ", x, y, z);


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 08
void metodo_08 (void)
{
// Definir dados
double x = 0.0;
double y = 0.0;
double z = 0.0;


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 08" );


// Mostrar dados iniciais
printf ( "%s%lf\n", "x = ", x);
printf ( "%s%lf\n", "y = ", y);


// Ler input
printf  ( "%s\n", "Digite um valor real: ");
scanf ( "%lf", &x);
getchar ();
printf  ( "%s\n", "Digite outro valor real: ");
scanf ( "%lf", &y);
getchar ();


// Operacao 1 (Elevar x por y)
z = pow (x, y);
// Mostrar valor resultante
printf ( "\n%s (%lf) elevado a (%lf) = (%lf)\n", "z = ", x,y,z );

// Operacao 2
z = pow (x, 1/y );
// Mostrar valor resultante
printf ( "\n%s (%lf) elevado a (1/%lf) = (%lf)\n", "z = ", x,y,z );

// Operacao 3 (Raiz quadrada de x)
z = sqrt (x);
// Mostrar valor resultante
printf ( "\n%s raiz(%lf) = (%lf)\n", "z = ", x, z );


// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



// Metodo 09
void metodo_09 (void)
{
// Definir dados singulares
int	x = 0;
double	y = 3.5;
char	z = 'A';
bool	w = false;

// Definir dados com mais de um valor (espaco para armazenamento)
char	s [80] = ""


// Identificacao do metodo
printf ( "\n%s\n", "Metodo 09" );


// Mostrar dados iniciais
printf ( "01. %s%d\n", "x = ", x);
printf ( "01. %s%lf\n", "y = ", y);
printf ( "01. %s%c\n", "z = ", z);

// Conversao para outros tipos de dados
x = (int) z;
printf ( "04. %s%d -> %c\n", "x = ", x, z);
x = (int) y;
printf ( "05. %s%d -> %lf\n", "x = ", x, y);

x = 97;
z = (char) x;
printf ( "06. %s%c -> %d\n", "z = ", z, x);

x = (int) '0';
z = (char) x;
printf ( "07. %s%c -> %d\n", "z = ", z, x);

x = w;
printf ( "08. %s%d -> %d\n", "x = ", x, w);

w = true;
x = w
printf ( "09. %s%d -> %d\n", "x = ", x, w);

x = (w == false);
printf ( "10. %s%d -> %d\n", "x = ", x, w);

x = ! (w == false);
printf ( "11. %s%d -> %d\n", "x = ", x, w);

x = (w != false);
printf ( "12. %s%d -> %d\n", "x = ", x, w);

w = (x == 0);
printf ( "13. %s%d == %d = % d\n", "w = ", x, 0, w);

w = (x != 0);
printf ( "14. %s%d != %d\n", "w = ", x, 0, w);

w = (x < y);
printf ( "15. %s%d < %lf = %d\n", "w = ", x, y, w);

w = (x <= y);
printf ( "16. %s%d <= %lf = %d\n", "w = ", x, y, w);

w = (x > y);
printf ( "17. %s%lf > %d = %d\n", "w = ", y, x, w);

w = (y >= x);
printf ( "18. %s%lf >= %d = %d\n", "w = ", y, x, w);





// Encerramento do metodo
printf ( "\n%s\n", "Aperte ENTER para continuar");
getchar ();
}



int main ()
{
// Definir dados
int opcao = 0;


// Identificacao do autor
printf ( "%s\n", "\nExemplo0109 _ Programa v0.9" );
printf ( "%s\n", "Autor: Mateus Resende Ottoni" );
printf ( "\n" );


// Acoes


// Inicio da repeticao
do
{
// Mostrar opcoes
printf ( "%s\n", "Lista de Opcoes", "\n" );
printf ( "%s\n", "0 - Terminar" );
printf ( "%s\n", "1 - Metodo 01" );
printf ( "%s\n", "2 - Metodo 02" );
printf ( "%s\n", "3 - Metodo 03" );
printf ( "%s\n", "4 - Metodo 04" );
printf ( "%s\n", "5 - Metodo 05" );
printf ( "%s\n", "6 - Metodo 06" );
printf ( "%s\n", "7 - Metodo 07" );
printf ( "%s\n", "8 - Metodo 08" );
printf ( "%s\n", "9 - Metodo 09" );
printf ( "\n" );


// Determinar opcao do usuario
// Ler opcao digitada
printf ( "%s\n", "Digite sua opcao" );
scanf ( "%d", &opcao );
getchar ();

//Mostrar opcao digitada
printf ( "%s%d\n", "\nA opcao escolhida foi ", opcao );
printf ( "\n" );


// Acao dependente da escolha do usuario
switch (opcao)
{
case 0: break;

case 1: metodo_01 ();
	break;

case 2: metodo_02 ();
	break;

case 3: metodo_03 ();
	break;

case 4: metodo_04 ();
	break;

case 5: metodo_05 ();
	break;

case 6: metodo_06 ();
	break;

case 7: metodo_07 ();
	break;

case 8: metodo_08 ();
	break;

case 9: metodo_09 ();
	break;

default: printf ( "Invalida a opcao escolhida\n");
	 printf ( "%s\n", "Aperte ENTER para retornar a lista de opcoes\n" );
	 getchar ();
	 break;
}

}
// Condicao para continuar a repeticao
while (opcao != 0);


// Encerrar o programa
printf ( "%s\n", "Comando de termino escolhido" );
printf ( "%s\n", "\nAperte ENTER para terminar o programa");
getchar ();

return (0);
}


// Historico do programa
/*

_Versoes:
Versao		Data		Modificacao
0.0		27/02		Esboco do programa
0.1		27/02		Metodo 01 funcional
0.2		27/02		Metodo 02 funcional
0.3		28/02		Metodo 03 funcional
0.4		29/02		Metodo 04 funcional
0.5		29/02		Metodo 05 funcional
0.6		29/02		Metodo 06 funcional
0.7		29/02		Metodo 07 funcional
0.8		29/02		Metodo 08 funcional
0.9		29/02		Metodo 09 funcional

_Testes:
Versao		Teste
0.0		00 (Ok)
0.1		00 (Ok)
0.2		00 (Ok)
0.3		00 (Ok)
0.4		00 (Ok)
0.5		00 (Ok)
0.6		00 (Ok)
0.7		00 (Ok)
0.8		00 (Ok)
0.9		00 ( )
*/
