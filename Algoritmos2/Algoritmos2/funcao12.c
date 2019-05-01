//
//  funcao12.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "funcao12.h"

int funcao12(){
    
    int A[3][3], i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nA[%d][%d] = ",  i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Matriz anterior\n");
    mostrarMatriz(A);
    
    printf("Produto Diagonal\n");
    produtoDiagonal(A);
    
    printf("Matriz Depois\n");
    mostrarMatriz(A);
    
    return 0;
}
