/*
Dada uma matriz LINHAxCOLUNA, onde LINHA e COLUNA são constantes, e uma coluna C, desenvolver uma função que desloque todos os elementos da coluna C para a última coluna da matriz.
Consequentemente, as colunas C+1 à última deverão serão deslocadas uma posição para a esquerda.
*/

#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int moverColuna(int m[LINHA][COLUNA], int c);
void exibir (int m[LINHA][COLUNA]);
void gerar (int m[LINHA][COLUNA]);
void copiarColuna(int c, int m[LINHA][COLUNA], int v[LINHA]);

void main(){
    int c, resultado, matriz[LINHA][COLUNA];

    gerar(matriz);
    exibir(matriz);

    printf("\nDigite o indice da coluna a ser movida: ");
    scanf("%d", &c);

    resultado = moverColuna(matriz, c);

    if (resultado == 0){
        printf("A coluna digitada não existe.");
    } else{
        printf("\n\nFeito com sucesso! Segue matriz atualizada: \n");
        exibir(matriz);
    }
}

int moverColuna(int m[LINHA][COLUNA], int c){
    int i, j, vetor[LINHA];

    if (c >= COLUNA){
        return 0;
    }

    copiarColuna(c, m, vetor);

    for(j=c; j<=COLUNA-1; j++){
        for(i=0; i<LINHA; i++){
            m[i][j] = m[i][j+1];
        }
    }

    for(i=0;i<LINHA; i++){
        m[i][COLUNA-1] = vetor[i];
    }

    return 1;
}

void copiarColuna(int c, int m[LINHA][COLUNA], int v[LINHA]){
    int i;
    for(i=0; i<LINHA; i++){
        v[i] = m[i][c];
    }
}

void exibir (int m[LINHA][COLUNA]){
    int i, j;
	
	printf ("\nElementos da matriz:\n");
	for (i=0; i<LINHA; i++)
	{
		for (j=0; j<COLUNA; j++)
		{
			printf ("| %d ", m[i][j]);
		}
		
		printf ("\n");
	}
}

void gerar (int m[LINHA][COLUNA]){
    int i, j;
	
	srand(time(NULL));	
	for (i=0; i<LINHA; i++)
	{
		for (j=0; j<COLUNA; j++)
		{
			m[i][j] = 1 + rand()%100;
		}
	}
}
