//
//  folha7.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 22/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Faça um programa que preencha, utilizando rand, uma matriz 5x5. A seguir, crie dois vetores e coloque, em um, a soma das linhas da matriz, e no outro a soma das colunas da matriz. Exiba o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int folha7(){
    
    srand(time(NULL));
    int vetor[TAM][TAM], somaLinha[TAM], somaColuna[TAM], i, j;
    
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
    
    //Soma Linha
    for (i=0; i<TAM; i++) {
        somaLinha[i]=0;
        for (j=0; j<TAM; j++) {
            somaLinha[i] += vetor[i][j];
        }
    }
    
    //Mostrar Soma Linha
    printf("\Soma Linha\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", somaLinha[i]);
    }
//-----------------------------------
    //Soma Coluna
    for (j=0; j<TAM; j++) {
        somaColuna[j]=0;
        for (i=0; i<TAM; i++) {
            somaColuna[j] += vetor[i][j];
        }
    }
    
    printf("\n");
    
    //Mostrar Soma Coluna
    printf("\Soma Coluna\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", somaColuna[i]);
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}

