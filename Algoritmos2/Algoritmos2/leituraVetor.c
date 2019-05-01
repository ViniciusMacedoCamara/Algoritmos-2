//
//  leituraVetor.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 15/08/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>

int leituraVetor(){
    
    int v[2][2], i, j;
    
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("\nV[%d,%d]", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("\t%d", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}
