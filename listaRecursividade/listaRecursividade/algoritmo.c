//
//  algoritmo.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>

int algoritmo(int v[20], int x, int inicio, int fim){
    
    int meio;
    
    if (fim < inicio) {
        return -1;
    }
    
    meio = (inicio + fim) / 2;
    
    if (v[meio] == x) {
        return meio;
    }
    if (x < v[meio]) {
        return algoritmo(v, x, inicio, meio-1);
    } else {
        return algoritmo(v, x, meio+1, fim);
    }
    
}
