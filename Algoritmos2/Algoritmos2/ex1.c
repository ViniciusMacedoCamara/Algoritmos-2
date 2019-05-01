//
//  ex1.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 15/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  ******
//  Escreva um programa que defina e preencha aleatoriamente uma matriz 4x5 de inteiros. Apos, o programa deve mostrar a matriz na tela e indicar a posica e o valor do maior elemento dentro dela

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 2
#define COLUNA 2

int ex1(){
    srand(time(NULL));
    int v[LINHA][COLUNA], i, j, maior, linha_maior = 0, coluna_maior = 0;
    
    for (i=0; i<LINHA; i++) {
        for (j=0; j<COLUNA; j++) {
             v[i][j]= rand()%50;
            //v[j] = rand() % 50;
        }
    }
    
    //Mostrar a matriz e achar o maior
    maior = v[0][0];
    
    printf("\nMatriz Aleatoria\n");
    for (i=0; i<LINHA; i++) {
        for (j=0; j<COLUNA; j++) {
            printf("\t%d", v[i][j]);
            if (v[i][j] > maior) {
                maior = v[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
        printf("\n");
    }
    
    printf("O maior elemento encontrado foi o %d, na linha %d e coluna %d", maior, linha_maior, coluna_maior);
    
    return 0;
}
