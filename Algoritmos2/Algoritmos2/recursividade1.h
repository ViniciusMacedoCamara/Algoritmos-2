//
//  recursividade1.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 24/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Calculo do fatorial de um numero inteiro(n>0) usando funcao

#ifndef recursividade1_h
#define recursividade1_h

#include <stdio.h>

int fatorial(int x){
    
    int i, res = 1;
    
    if (x < 1) {
        return 0;
    }
    
    for (i=0; i <= x; i++) {
        res = res * i;
    }
    return res;
}

#endif /* recursividade1_h */
