//
//  recursividadeSoma.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 31/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Função recursiva para somar todos os números inteiros entre 1 e N

#ifndef recursividadeSoma_h
#define recursividadeSoma_h

#include <stdio.h>

int somaInt(int n){
    if (n == 1) {
        return 1;
    }
    
    return n + somaInt(n - 1);
    
}

#endif /* recursividadeSoma_h */
