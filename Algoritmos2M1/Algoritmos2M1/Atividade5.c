//
//  Atividade5.c
//  Algoritmos2M1
//
//  Created by Vinicius Macedo on 30/09/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "Atividade5.h"

int atividade5() {
    
    int TAM,i,j,matriz[20][20];
    
    do {
        printf("\nEntre com um valor entre 2 e 20: ");
        scanf ("%d",&TAM);
        
        if (TAM < 2 || TAM > 20) {
            printf("\nSOMENTE ENTRE 2 E 20\n");
        }
        
    } while (TAM < 2 || TAM > 20);
    
    if (TAM > 2 || TAM < 20) {
        for (i = 0; i < TAM; i++){
            for (j = 0; j < TAM; j++){
                matriz[i][j] = 0;
            }
        }
        
        for (i = 0; i < TAM; i++){
            matriz[i][0] = 1;
        }
        
        for(i = 1; i < TAM; i++){
            for (j = 1; j < TAM; j++){
                matriz[i][j] = matriz[i-1][j] + matriz[i-1][j-1];
            }
        }
        
        for (i = 0; i < TAM; i++){
            for (j = 0; j < TAM; j++){
                if (matriz[i][j] != 0)
                    printf ("%d ",matriz[i][j]);
            }
            printf ("\n");
        }
    }
    
    return 0;
}
