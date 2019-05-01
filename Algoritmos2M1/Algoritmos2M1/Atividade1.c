//
//  Atividade1.c
//  Algoritmos2M1
//
//  Created by Vinicius Macedo on 13/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "Atividade1.h"
#define LINHA 20
#define COLUNA 10

//A = 0
//B = 1
//C = 2
//D = 3
//E = 4

int atividade1(){
    
    srand(time(NULL));
    char v[COLUNA];
    int matriz[LINHA][COLUNA], i, j, pegaNota, aluno[LINHA];
    
    //Gerar vetor gabarito
    for (i = 0; i < COLUNA; i++) {
        v[i] = rand()%5;
    }
    
    //Gerar Matriz Alunos
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            matriz[i][j]= rand()%5;
        }
    }
    
    //Percorrer aluno
    for (i = 0; i<LINHA; i++) {
        pegaNota = 0;
        for (j = 0; j<COLUNA; j++) {
            if (matriz[i][j] == v[j]) {
                pegaNota++;
            }
        }
        aluno[i] = pegaNota;
        if (aluno[i] > 7) {
            printf("\nAluno %d - Nota: %d - APROVADO\n", i+1, aluno[i]);
        } else if (aluno[i] < 7 && aluno[i] > 5){
            printf("\nAluno %d - Nota: %d - RECUPERACAO\n", i+1, aluno[i]);
        } else {
            printf("\nAluno %d - Nota: %d - REPROVADO\n", i+1, aluno[i]);
        }
    }
    
    //Mostrar vetor gabarito
    printf("\nMostra gabarito\n");
    for (i=0; i<COLUNA; i++) {
        printf("\t%d", v[i]);
    }
    
    //Mostrar notas
    printf("\nMostra notas\n");
    for (i=0; i<LINHA; i++) {
        printf("\t%d", aluno[i]);
    }
    
    //Mostrar Matriz alunos
//    printf("\nMostra Matriz\n");
//    for (i=0; i<LINHA; i++) {
//        for (j=0; j<COLUNA; j++) {
//            printf("\t%d", matriz[i][j]);
//        }
//        printf("\n");
//    }
    
    return 0;
}
