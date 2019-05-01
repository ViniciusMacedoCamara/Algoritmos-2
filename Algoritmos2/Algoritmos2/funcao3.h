//
//  funcao3.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef funcao3_h
#define funcao3_h

#include <stdio.h>

int perfeito(int n){
    
    int i, divisor;
    
    if (n > 1) {
        for (i = 1; i<= n/2 ; i++) {
            if (n % i == 0) {
                divisor = divisor + i;
            }
        }
        
        if (n == divisor) {
            return 1;
        }
    }
    
    return 0;
    
}

#endif /* funcao3_h */
