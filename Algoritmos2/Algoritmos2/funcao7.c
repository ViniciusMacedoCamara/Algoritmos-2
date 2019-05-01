//
//  funcao7.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "funcao7.h"

int funcao7(){
    
    int i;
    float soma = 0, aux;
    
    for (i = 5; i <= 15; i++) {
        aux = formula(i);
        soma += aux;
        printf("\nE(%d) = %f", i, aux);
    }
    printf("\nSoma total = %f", soma);
    
    return 0;
}
