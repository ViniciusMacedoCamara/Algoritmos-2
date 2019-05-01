//
//  recursividade2.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 24/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  FATORIAL USANDO RECURSIVIDADE

#ifndef recursividade2_h
#define recursividade2_h

#include <stdio.h>

int fatorialRecursivo(int n){
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

#endif /* recursividade2_h */
