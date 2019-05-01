//
//  folha1.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 15/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Elabore um programa que preencha uma matriz (utilizando rand) 5 x 5, e logo após identifique o maior elemento da matriz. Exiba o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5

int folha1(){
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
    
    printf("\nO maior elemento encontrado foi o %d, na linha %d e coluna %d \n", maior, linha_maior, coluna_maior);
    
    return 0;
}
