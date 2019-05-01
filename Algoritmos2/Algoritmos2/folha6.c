//
//  folha6.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 22/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//
//Faca um programa que leia duas matrizes 4x4 e calcule uma terceira matriz com a multiplicaÁ„o
//das duas primeiras.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define linha 4
#define coluna 4

int folha6(){
    
    srand(time(NULL));
    int m[linha][coluna], i,j, m2[linha][coluna], m3[linha][coluna],x, aux;
    
    for(i=0; i<linha;i++){
        for(j=0;j<coluna;j++){
            m[i][j]= rand()%5;
        }
    }
    printf("\n Matriz aleatoria 1: \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<linha;i++){
        for(j=0;j<coluna;j++){
            m2[i][j]= rand()%5;
        }
    }
    printf("\n Matriz aleatoria 2: \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("\t%d", m2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            m3[i][j] = 0;
            for(x=0;x<4;x++){ // tem que mudar de acordo com o tipo de Matriz, mais ainda pedir uma explicaÁ„o para o prof.
                aux+=m[i][x] * m2[x][j];
            }
            m3[i][j] = aux;
            aux=0;
        }
    }
    printf("\n Resultado da Multiplicacao da Matriz 1 com a Matriz 2 é : \n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++)
            printf("\t%d", m3[i][j]);
        printf("\n");
    }
    return 0;
}

