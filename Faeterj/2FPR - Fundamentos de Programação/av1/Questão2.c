/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 08/05/2023
	
	Quest�o 02 [2,5 pontos]:
	Dadas duas strings s1 e s2, implementar uma fun��o que verifique se todos os caracteres de s1 est�o em s2. 
	Dependendo do resultado, os seguintes valores dever�o ser retornados:
	
		0:	nem todos os caracteres de s1 est�o em s2;
		1:	todos os caracteres de s1 est�o em s2, por�m n�o na mesma frequ�ncia;
		2:	todos os caracteres de s1 est�o em s2, na mesma frequ�ncia.
*/

//importa��o de bibliotecas
#include <stdio.h>


//prot�tipos das fun��es
int comparacao (char s1[], char s2[]);
int tamanho (char s[]);

//main
void main (){
	//declara��o de vari�veis
	char string1[20], string2[20];
	int retorno;
	
	//obtendo as duas strings
	printf ("Primeira string: ");
	fflush (stdin);
	gets (string1);
	
	printf ("\nSegunda string: ");
	fflush (stdin);
	gets (string2);
	
	//chamando a fun��o e armazenando o retorno na vari�vel 'retorno'
	retorno = comparacao(string1, string2);
	
	//testando o retorno
	switch (retorno)
	{
		case 0: printf ("\nNem todos os caracteres de %s estao em %s.\n", string1, string2);
		        break;
		        
		case 1: printf ("\nTodos os caracteres de %s estao em %s, porem nao na mesma frequencia.\n", string1, string2);
		        break;
		        
		case 2: printf ("\nTodos os caracteres de %s estao em %s e na mesma frequencia.\n", string1, string2);
		        break;
	}
}
	
//implementa��o das fun��es
int comparacao (char s1[], char s2[]){
	int i, j, cti=0, tam;
  
	for (i=0; (s1[i] != '\0') || (s2[i] != '\0'); i++){
		for (j=0; (s1[j] != '\0') || (s2[j] != '\0'); j++){
	      if (s1[i] == s2[j]){
	        cti++;
	      }
    	}
	}
  
  tam = tamanho(s1);
  
  if (cti < tam){
    return 0;
  }
  
  if (cti > tam){
    return 1;
  }
  
  if (cti == tam){
    return 2;
  }
}

int tamanho (char s[]){
  int i, j, ct=0;
  /*for (i=0; s[i] != '\0'; i++){
    ct++;
  }*/
  
  for (i=0; s[i] != '\0'; i++){
    for (j=0; s[j] != '\0'; j++){
      if (s[j] != s[i]){
        ct = ct + 1;
      }
    }
  }
  printf("quantidade de caracteres diferentes em s1: %d\n\n", ct);
  return ct;
}
