//
//  folha3.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 15/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Faça um programa que leia uma matriz 4 x 4 e que logo em seguida realize o somatório de todos elementos contidos na diagonal secundária. Exiba o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int folha3(){
    srand(time(NULL));
    int v[TAM][TAM], i, j, soma;
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            v[i][j]= rand()%10;
            //v[j] = rand() % 50;
        }
    }
    
    //Mostrar a matriz e achar o maior
    printf("\nMatriz Aleatoria\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", v[i][j]);
        }
        printf("\n");
    }
    
    soma = 0;
    for (i=0; i<TAM; i++) {
        soma += v[i][TAM - 1 - i];
    }
    
    printf("\nSoma: %d\n", soma);
    
    return 0;
}
