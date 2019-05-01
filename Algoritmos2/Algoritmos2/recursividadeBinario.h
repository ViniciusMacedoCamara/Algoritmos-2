//
//  recursividadeBinario.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 31/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Função recursiva para converter um inteiro em binario

#ifndef recursividadeBinario_h
#define recursividadeBinario_h

#include <stdio.h>

void binario(int n){
    
    if (n == 1) {
        printf("1");
        return;
    }
    
    int resto;
    
    resto = n % 2;
    binario(n / 2);
    printf("%d", resto);
    
}

#endif /* recursividadeBinario_h */
