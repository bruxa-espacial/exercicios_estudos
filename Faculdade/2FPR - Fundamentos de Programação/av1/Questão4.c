/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 08/05/2023
	
	Quest�o 04 [2,5 pontos]:
	Fazer uma fun��o que, dado um arquivo texto com n�meros inteiros, um por linha, remova deste os valores 
	da linha L1 � linha L2.
	
	Observa��es: 
		1. Se a primeira linha for inv�lida, nada ser� realizado e o valor 0 retornado pela fun��o. O mesmo ocorrer� se a segunda linha for inferior � primeira;
		2. Se a linha L2 ultrapassar o final do arquivo, ser�o removidos todos os elementos da linha L1 ao final do arquivo;
		3. Sempre que a opera��o for realizada, o valor 1 dever� ser retornado. 
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int borracha (char nomeArq[], int l1, int l2);

//main
void main ()
{
	//declara��o de vari�veis
	char nomeArquivo[20];
	int linha1, linha2, retorno;
	
	//associando o arquivo "teste.txt" � vari�vel 'nomeArquivo'
	strcpy (nomeArquivo, "teste.txt");
		
	//lendo as linhas que ser�o manipuladas
	printf ("Primeira linha: ");
	scanf ("%d", linha1);
	
	printf ("\nSegunda linha: ");
	scanf ("%d", linha2);
			
	//chamando a fun��o e armazenando o retorno na vari�vel 'retorno'
	?????
	
	//testando o retorno
	if (retorno == 1)
	{
		printf ("\nAs linhas solicitadas foram removidas do arquivo %s!", nomeArquivo);
	}
	else
	{
		printf ("\nAs linhas informadas sao invalidas!");
	}
}
	
//implementa��o das fun��es
int borracha (char nomeArq[], int l1, int l2){
  FILE *arq;  
  arq = fopen(nomeArq, "w");

  if (!arq){
    return 0;
  } 
  
}
