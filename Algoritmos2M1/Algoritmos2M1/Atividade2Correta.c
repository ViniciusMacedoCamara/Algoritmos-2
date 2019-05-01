//
//  Atividade2Correta.c
//  Algoritmos2M1
//
//  Created by Vinicius Macedo on 26/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "Atividade2Correta.h"

int atividade2Correta(){
    
    int matriz[4][4], somaLinha[4], somaColuna[4], i, j, valorMatriz, TAM;
    
    do {
        printf("Qual tamanho de matriz desejada? 3x3(3) | 4x4(4)\n");
        scanf("%d", &TAM);
        
        if (TAM != 3 && TAM != 4) {
            printf("Digite 3 ou 4 somente!!!\n");
        }
        
    } while (TAM != 3 && TAM != 4);
    
    if (TAM == 3 || TAM == 4) {
        //Gerar Matriz
        for (i = 0; i < TAM; i++) {
            for (j = 0; j < TAM; j++) {
                printf("Digite o valor para a posicao [%d][%d]", i, j);
                scanf("%d", matriz[i][j]);
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
        
    }
    return 0;
}
