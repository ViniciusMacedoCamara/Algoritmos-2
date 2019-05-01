//
//  recursivo1.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef recursivo1_h
#define recursivo1_h

#include <stdio.h>

int potencia (int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n > 0){
        return x * potencia(x, n-1);
    }
}

#endif /* recursivo1_h */
