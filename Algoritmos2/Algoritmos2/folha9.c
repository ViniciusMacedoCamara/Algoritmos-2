//
//  folha9.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 22/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Faça um algoritmo que preencha uma matriz 20 x 20 de reais e some cada uma das linhas, armazenando o resultado da soma em um vetor. A seguir, multiplique cada elemento da matriz pela soma da sua linha, e jogue em uma segunda matriz de mesmo tamanho. Mostre a matriz resultante.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int folha9(){
    
    srand(time(NULL));
    int vetor[TAM][TAM], novaMatriz[TAM][TAM], multiplicaLinha[TAM], i, j;
    
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
        multiplicaLinha[i]=0;
        for (j=0; j<TAM; j++) {
            multiplicaLinha[i] += vetor[i][j];
        }
    }
    
    //Mostrar Soma Linha
    printf("\Soma Linha\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", multiplicaLinha[i]);
    }

    printf("\n");
    
    //Multiplicacao linhas
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            novaMatriz[i][j] = multiplicaLinha[i] * vetor[i][j];
        }
    }
    
    //Mostrar Nova Matriz
    printf("\Nova Matriz\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
         printf("\t%d", novaMatriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}
