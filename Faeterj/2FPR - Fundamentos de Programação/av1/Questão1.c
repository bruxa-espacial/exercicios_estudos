/*
	FAETERJ-Rio
	FPR - Fundamentos de Programa��o - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 08/05/2023
	
	Quest�o 01 [2,5 pontos]:
	Dada uma matriz MLxC, onde L e C s�o constantes, desenvolver uma fun��o que "troque" os elementos de 
	duas colunas c1 e c2, respeitadas as seguintes regras:

		a. A troca s� ser� poss�vel se as colunas c1 e c2 existirem na matriz. Caso existam, a troca ser� 
		   realizada e o valor 1 retornado pela fun��o; por outro lado, 0 ser� retornado se uma ou as duas 
		   colunas forem inv�lidas;
		b. Ap�s a troca, a coluna c2 conter� exatamente os elementos originais da coluna c1, na mesma ordem. 
		   Por�m, os valores da coluna c1 ser�o os originais da c2, na ordem inversa.

	Exemplo:

	Trocar as colunas 1 e 3 da matriz abaixo:

					1	3	5	7	9	
					4	6	5	8	0	
					3	4	5	7	8	
					5	9	1	2	3	
					7	1	5	3	5	
					4	0	2	1	5	


					1	1	5	3	9	
					4	3	5	6	0	
					3	2	5	4	8	
					5	7	1	9	3	
					7	8	5	1	5	
					4	7	2	0	5	
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 6
#define C 5

//prot�tipos das fun��es
int troca (int M[L][C], int V[C], int c1, int c2);

void exibirMatriz (int M[L][C]);

//main
void main ()
{
	//declara��o de vari�veis
	int resp,
	    matriz[L][C] = {{1, 3, 5, 7, 9},
	                    {4, 6, 5, 8, 0},
	                    {3, 4, 5, 7, 8},
	                    {5, 9, 1, 2, 3},
	                    {7, 1, 5, 3, 5},
	                    {4, 0, 2, 1, 5}},
		vetor[C], c1, c2;

	//exibindo a matriz antes da chamada � fun��o
	exibirMatriz (matriz);

	//pedindo variáveis
	printf("Digite c1: ");
	scanf("%d", &c1);
	printf("\nDigite c2: ");
	scanf("%d", &c2);
	
	//chamando a fun��o e atribuindo o retorno � vari�vel 'resp'
	resp = troca(matriz, vetor, c1-1, c2-1);
	
	//testando o valor retornado
	if (resp == 1){
		printf ("\n\nMatriz apos a troca:\n\n");
		
		exibirMatriz (matriz);
	}
	else{
		printf ("\n\nA troca nao foi realizada!");
	}
}
	
//implementa��o das fun��es
int troca (int M[L][C], int V[C], int c1, int c2){
	int i, j;

	if ((c1 > C) || (c2 > C) || (c1 < 0) || (c2 < 0)){
		return 0;
	}

	for (i=0; i<=C; i++){
		V[i] = M[i][c2];
		M[i][c2] = M[i][c1];
	}
	
	for (j=(L-1), i=0; (j>=0) && (i<=C); i++, j--){
		M[j][c1] = V[i];
	}
  return 1;
}

void exibirMatriz (int M[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	printf ("Elementos da matriz:\n\n");
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%3d ", M[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
