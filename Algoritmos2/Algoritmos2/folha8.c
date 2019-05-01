//
//  folha8.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 22/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Elabore algoritmo que leia um conjunto de números inteiros que serão armazenados em uma matriz A com dimensão 10x10. A partir da matriz A o programa deve gerar um vetor com os maiores elementos de cada linha e outro vetor com os menores elementos de cada coluna.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int folha8(){
    
    srand(time(NULL));
    int vetor[TAM][TAM], maiorLinha[TAM], menorColuna[TAM], i, j;
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            vetor[i][j]= rand()%10;
            //v[j] = rand() % 50;
        }
    }
    
    //Mostrar a matriz e achar o maior
    printf("\nMatriz Aleatoria\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", vetor[i][j]);
        }
        printf("\n");
    }
    
    //Maiores valores de cada linha
    for (i=0; i<TAM; i++) {
        maiorLinha[i]= vetor[i][0];
        for (j=0; j<TAM; j++) {
            if (maiorLinha[i] < vetor[i][j]) {
                maiorLinha[i] = vetor[i][j];
            }
        }
    }
    
    //Maiores valores de cada linha
    printf("\Maiores valores de cada linha\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", maiorLinha[i]);
    }
    
    //-----------------------------------
    
    //Menores valores de cada coluna
    for (j=0; j<TAM; j++) {
        menorColuna[j]= vetor[j][0];
        for (i=0; i<TAM; i++) {
            if (menorColuna[j] > vetor[i][j]) {
                menorColuna[j] = vetor[i][j];
            }
        }
    }
    
    printf("\n");
    
    //Menores valores de cada coluna
    printf("\Menores valores de cada coluna\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", menorColuna[i]);
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}
