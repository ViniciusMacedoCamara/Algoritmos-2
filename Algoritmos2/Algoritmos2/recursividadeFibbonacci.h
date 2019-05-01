//
//  recursividadeFibbonacci.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 24/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  Fibbonacci recursivo

#ifndef recursividadeFibbonacci_h
#define recursividadeFibbonacci_h

#include <stdio.h>

int fibbonacci(int n){
    
    if (n == 1 || n == 2) {
        return 1;
    }
    
    return fibbonacci(n - 1) + fibbonacci(n - 2);
    
}

#endif /* recursividadeFibbonacci_h */
