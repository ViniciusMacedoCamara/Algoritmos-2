//
//  folha4.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 15/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//
//FaÁa um programa que leia uma matrizes 3x5 e um valor k qualquer e crie a matriz com o
//resultado da multiplicaÁ„o de primeira matriz por k.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define linha 3
#define coluna 5

int folha4(){
    
    srand(time(NULL));
    int m[linha][coluna], i,j,k = 2;
    
    for(i=0; i<linha;i++){
        for(j=0;j<coluna;j++){
            m[i][j]= rand()%20;
        }
    }
    printf("\n Matriz aleatoria: \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            m[i][j] = m[i][j] * k;
        }
    }
    printf("\n Resultado da Matriz Multiplicado por K: \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++)
            printf("\t%d", m[i][j]);
        printf("\n");
    }
    return 0;
}
