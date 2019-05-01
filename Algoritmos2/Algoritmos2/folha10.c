//
//  folha10.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 29/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
/*Faça um algoritmo que leia duas matrizes X e Y, quadradas com ordem 5, e faça as seguintes manipulações:
* Gere uma matriz W com os menores elementos entre as matrizes X e Y, ou seja, um elemento Wij possui o menor valor entre os elementos Xij e Yij. Se os elementos forem iguais ambos são o menor valor.
* Gere um vetor com os elementos da diagonal principal da matriz X;
* Encontre a coluna da matriz Y que possui a menor soma do valor de seus
elementos dentre todas as colunas da matriz, e mostre qual é a posição dessa coluna. Caso existam somas de colunas iguais considerar a primeira coluna com a ocorrência do valor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int folha10(){
    
    srand(time(NULL));
    int matrizX[TAM][TAM], matrizY[TAM][TAM], matrizM[TAM][TAM], dpX[TAM], i, j, menor, soma, colMenor, menorSoma;
    
    //Gerar Matriz X
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            matrizX[i][j]= rand()%5;
        }
    }
    
    //Gerar Matriz Y
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            matrizY[i][j]= rand()%5;
        }
    }
    
    //Ler e Jogar o menor valor para a matriz W
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (matrizX[i][j] < matrizY[i][j]) {
                matrizM[i][j] = matrizX[i][j];
            } else {
                matrizM[i][j] = matrizY[i][j];
            }
        }
    }

    //Mostrar a Matriz X
    printf("\Mostrar a Matriz X\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", matrizX[i][j]);
        }
        printf("\n");
    }
    
    //Mostrar a Matriz Y
    printf("\Mostrar a Matriz Y\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", matrizY[i][j]);
        }
        printf("\n");
    }
    
    //Mostrar a Matriz M
    printf("\Mostrar a Matriz M\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", matrizM[i][j]);
        }
        printf("\n");
    }
    
    //Ler e Jogar i e j para um vetor Diagonal Principal X
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (i == j) {
                dpX[i] = matrizX[i][j];
            }
        }
    }
    
    //Mostrar a Diagonal Principal de X
    printf("\Mostrar a Diagonal Principal de X\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", dpX[i]);
    }
    
    //Soma da Coluna de Y
    for (j=0; j<TAM; j++) {
        soma = 0;
        for (i=0; i<TAM; i++) {
            soma += matrizY[i][j];
        }
        if (j == 0) {
            colMenor = 0;
            menorSoma = soma;
        } else {
            if (soma < menorSoma) {
                colMenor = j;
                menorSoma = soma;
            }
        }
    }
    
    printf("\n");
    
    //Mostrar a Coluna Y
    printf("\Mostrar a Soma Coluna Y\n");
    printf("\t%d na coluna %d", menorSoma, colMenor+1);
    
    printf("\n");
    
    return 0;
}
