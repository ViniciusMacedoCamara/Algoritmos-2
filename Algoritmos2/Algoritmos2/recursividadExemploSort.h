//
//  recursividadExemploSort.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 31/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef recursividadExemploSort_h
#define recursividadExemploSort_h

#include <stdio.h>

void mostrar(int n){
    if (n == 0) {
        return;
    }
    printf("%d - ", n);
    mostrar(n - 1);
}

void mostrar2(int n){
    if (n == 0) {
        return;
    }
    mostrar2(n - 1);
    printf("%d - ", n);
}

#endif /* recursividadExemploSort_h */
