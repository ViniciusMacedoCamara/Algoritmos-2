//
//  Atividade2.c
//  Algoritmos2M1
//
//  Created by Vinicius Macedo on 13/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "Atividade2.h"
#define TAM 3

int atividade2(){
    
    srand(time(NULL));
    int matriz[TAM][TAM], somaLinha[TAM], somaColuna[TAM], i, j, valorMatriz;
    
    
    //Gerar Matriz
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j]= rand()%10;
        }
    }
    
    //Verifica valores iguais
    printf("\nMostra Matriz\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (matriz[i][j] == matriz[i][j]) {
                printf("CAI FORA i: %d - j: %d\n",matriz[i][j], matriz[i][j]);
            }
        }
        printf("\n");
    }
    
    //Soma Linha
    for (i=0; i<TAM; i++) {
        somaLinha[i]=0;
        for (j=0; j<TAM; j++) {
            somaLinha[i] += matriz[i][j];
        }
        if (somaLinha[i] != 15) {
            printf("Cai fora2\n");
        }
    }
    
    //Soma Coluna
    for (j=0; j<TAM; j++) {
        somaColuna[j]=0;
        for (i=0; i<TAM; i++) {
            somaColuna[j] += matriz[i][j];
        }
    }
    
    //Mostrar Soma Linha
    printf("\Soma Linha\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", somaLinha[i]);
    }
    
    printf("\n");
    
    //Mostrar Soma Coluna
    printf("\Soma Coluna\n");
    for (i=0; i<TAM; i++) {
        printf("\t%d", somaColuna[i]);
        printf("\n");
    }
    
    //Mostrar Matriz alunos
    printf("\nMostra Matriz\n");
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}
