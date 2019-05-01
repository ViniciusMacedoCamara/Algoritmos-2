//
//  funcao12.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef funcao12_h
#define funcao12_h

#include <stdio.h>

void mostrarMatriz(int A[3][3]){
    
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    
}

void produtoDiagonal(int B[3][3]){
    
    int i, j, aux;
    
    for (i = 0; i < 3; i++) {
        aux = B[i][i];
        for (j = 0; j < 3; j++) {
            B[i][j] *= aux;
        }
    }
    
}

#endif /* funcao12_h */
