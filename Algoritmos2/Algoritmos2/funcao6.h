//
//  funcao6.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef funcao6_h
#define funcao6_h

#include <stdio.h>

int mdc(int a, int b){
    
    while (a != b) {
        if (a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    
    return a;
    
}

#endif /* funcao6_h */
