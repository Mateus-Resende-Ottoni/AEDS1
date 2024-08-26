/* Identificações gerais
855842_AED1

Codigo de aluno: 1525230
Matricula: 855842
Nome: Mateus Resende Ottoni
Exercicio
*/



// Bibliotecas
#include "MyLib.h"




/*  Comandos para terminal

Compilar:
gcc -o Exercicio Exercicio.c

Executar:
./Exercicio
Exercicio

*/



void metodo0411 ( void )
{
// Definir dados
    double limit_maior = 0;
    double limit_menor = 0;
    int n_valores = 0;
    int contagem = 0;
    double verificacao = 0;
    int intervalo = 0;
    int not_intervalo = 0;

    
// Identificacao do metodo
println ( "Metodo 0411: " );
linhasvazias ( );

    
// Ler e definir limites
    limit_maior = readdouble ( "Defina o limite maior para o intervalo: " );
    do
        {
        limit_menor = readdouble ( "Defina o limite menor para o intervalo: " );
        }
    while (limit_maior < limit_menor);

    
// Definir quantidade de valores a serem lidos
    n_valores = readint ( "Defina a quantidade de valores a serem lidos: ");

    
// Ler valores e verificar validade no intervalo
    intervalo = 0;
    not_intervalo = 0;
    for (contagem = 0; contagem < n_valores; contagem = contagem + 1)
        {
        verificacao = readdouble ( "Digite um valor: " );
        if (verificacao <= limit_maior && verificacao >= limit_menor)
            {
            intervalo = intervalo + 1;
            }
        else
            {
            not_intervalo = not_intervalo + 1;
            }
        }

// Mostrar dados obtidos
    printf ( "\n Dos %d valores digitados, %d pertencem ao intervalo, e %d nao", n_valores, intervalo, not_intervalo );


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();

}




void metodo0412 ( void )
{
// Definicao de dados
    char caracteres [80];
    char c;
    char *c_convertido;
    int tamanho = 0;
    int contagem = 0;
    int maiusculas = 0;
    int maiores_L = 0;
    char c_maiores_L [80];
    char *espaco = " ";
    

// Identificacao do metodo
println ( "Metodo 0412: " );
linhasvazias ( );


// Ler string
println ( "Digite a sequencia de caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


// Analise de cada letra
    c_maiores_L [0] = '\0';
    maiores_L = 0;
    tamanho = strlen (caracteres);
    for ( contagem = 0; contagem < tamanho; contagem = contagem + 1)
        {
        c = caracteres [contagem];
        if (c >= 'A' && c <= 'Z' )
            {
            maiusculas = maiusculas + 1;
            if (c > 'L')
                {
                sprintf (c_convertido, "%c", c);
                strcat (c_maiores_L, strcat (c_convertido, espaco));
                maiores_L = maiores_L + 1;
                }
            }
        }


// Mostrar resultados
printf ( "Dos %d caracteres mostrados, %d sao letras maiusculas, e dessas, %d sao maiores que L", tamanho, maiusculas, maiores_L );
if (maiores_L > 0)
    {
    printf ( "\nCaracteres maiores que L: %s", c_maiores_L );
    }
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();

}




void metodo0413 ( void )
{
// Definir dados
char caracteres [80];
char c;
int tamanho = 0;
int maiores_c = 0;
    

// Identificacao do metodo
println ( "Metodo 0413: " );
linhasvazias ( );


// Leitura da cadeia de caracteres
printf ( "\n%s", "Digite um texto: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


// Funcao
c = 'L';
maiores_c = comparacao_1caracteremaiusculo_quant ( caracteres, c);


// Mostrar resultado
linhavazia ();
printf ( "\nDos %d caracteres, %d sao maiores que %c", tamanho, maiores_c, c );
    
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0414 ( void )
{
// Definir dados
char caracteres [80];
char c;
int tamanho = 0;
    

// Identificacao do metodo
println ( "Metodo 0414: " );
linhasvazias ( );


// Leitura da cadeia de caracteres
printf ( "\n%s", "Digite um texto: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


// Funcao
c = 'L';
comparacao_1caracteremaiusculo_string ( caracteres, c);
    
    
// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo0415 ( void )
{
// Definir dados
int menores_Ll = 0;
char caracteres [80];
int tamanho = 0;
char minuscula;
char maiuscula;


// Identificacao do metodo
println ( "Metodo 0415: " );
linhasvazias ( );



// Ler palavra
printf ( "\n%s", "Digite os caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';

minuscula = 'l';
maiuscula = 'L';
menores_Ll = comparacao_2caracteremaiusculominusculo_quant ( caracteres, maiuscula, minuscula );



// Mostrar resultado
printf ( "\nA quantidade de letras menores que L e l sao %d", menores_Ll );


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}





void metodo0416 ( void )
{
// Definir dados
char caracteres [80];
int tamanho = 0;
char minuscula;
char maiuscula;



// Identificacao do metodo
println ( "Metodo 0416: " );
linhasvazias ( );



// Ler palavra
printf ( "\n%s", "Digite os caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';



maiuscula = 'L';
minuscula = 'k';
comparacao_2caracteremaiusculominusculo_string (caracteres, maiuscula, minuscula);


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}






void metodo0417 ( void )
{
// Definir dados
int n_pares = 0;
char caracteres [80];
int tamanho = 0;



// Identificacao do metodo
println ( "Metodo 0417: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite os caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


// Funcao
n_pares = comparacao_pares_quant (caracteres);


// Mostrar valor
printf ( "\nO numero de digitos pares dentre os caracteres e' igual a %d", n_pares );


// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0418 ( void )
{
// Definir dados
int tamanho = 0;
char caracteres [80];


// Identificacao do metodo
println ( "Metodo 0418: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite os caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


comparacao_naoalfanumerico_string (caracteres);



// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



void metodo0419 ( void )
{
// Definir dados
int tamanho = 0;
char caracteres [80];


// Identificacao do metodo
println ( "Metodo 0419: " );
linhasvazias ( );


// Ler palavra
printf ( "\n%s", "Digite os caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


comparacao_alfanumerico_string (caracteres);



// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}




void metodo0420 ( void )
{
// Definir dados
int tamanho = 0;
char caracteres [80];
int ler_vezes = 0;
int contagem = 0;
int n_alfanumericos = 0;
int n_alfanumericos_totais = 0;


// Identificacao do metodo
println ( "Metodo 0420: " );
linhasvazias ( );



// Definir numero de vezes a ler
ler_vezes = readint ("Digite o numero de palavras a serem lidas: ");

n_alfanumericos = 0;
n_alfanumericos_totais = 0;


for (contagem = 1; contagem <= ler_vezes; contagem = contagem +1 )
{
// Ler palavra 
printf ( "\n%s", "Digite caracteres: " );
fgets (caracteres, 80, stdin);

tamanho = strlen (caracteres) - 1;
caracteres [tamanho] = '\0';


n_alfanumericos = comparacao_alfanumerico_quantstring (caracteres);
n_alfanumericos_totais = n_alfanumericos_totais + n_alfanumericos;
}

printf ( "\nO numero total de caracteres alfanumericos lidos e' de %d", n_alfanumericos_totais );

// Encerrar metodo
linhasvazias ();
println ( "Aperte ENTER para encerrar o programa" );
getchar ();
}



int main (void)
{
// Variaveis e dados
int opcao = 0;



// Identificacao do autor
autor ( );


do
{
// Lista de opcoes
linhavazia ( );
println ( "Lista de opcoes" );
println ( "0 - Terminar o programa" );
println ( "1 - Metodo 0411" );
println ( "2 - Metodo 0412" );
println ( "3 - Metodo 0413" );
println ( "4 - Metodo 0414" );
println ( "5 - Metodo 0415" );
println ( "6 - Metodo 0416" );
println ( "7 - Metodo 0417" );
println ( "8 - Metodo 0418" );
println ( "9 - Metodo 0419" );
println ( "10 - Metodo 0420" );
linhavazia ( );

// Escolher opcao
opcao = readint ( "Digite sua opcao: " );
showint ( "Opcao escolhida = ", opcao );
linhasvazias ( );



// Metodos
switch ( opcao)
{
case 0:
	break;
case 1:
	metodo0411 ();
	break;
case 2:
	metodo0412 ();
	break;
case 3:
	metodo0413 ();
	break;
case 4:
	metodo0414 ();
	break;
case 5:
	metodo0415 ();
	break;
case 6:
	metodo0416 ();
	break;
case 7:
	metodo0417 ();
	break;
case 8:
	metodo0418 ();
	break;
case 9:
	metodo0419 ();
	break;
case 10:
	metodo0420 ();
	break;
default:
	println ( "Opcao nao reconhecida" );
	linhavazia ( );
	break;
}

}
while ( opcao != 0 );


println ( "Encerramento do programa" );
println ( "Aperte ENTER para terminar o programa" );
getchar ();
return ( 0 );
}



