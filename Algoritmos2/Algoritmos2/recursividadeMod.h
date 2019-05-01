//
//  recursividadeMod.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 31/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Calcular o módulo (%) entre dois inteiros x e y
//  mod (x,y) = 0 se x = y | x se x < y | mod (x - y, y) se x > y

#ifndef recursividadeMod_h
#define recursividadeMod_h

#include <stdio.h>

int mod(int x, int y){
    
    if (x == y) {
        return 0;
    }
    if (x < y) {
        return x;
    }
    
    return mod(x - y, y);
    
}

#endif /* recursividadeMod_h */
