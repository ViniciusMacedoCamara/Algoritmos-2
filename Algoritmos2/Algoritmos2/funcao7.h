//
//  funcao7.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef funcao7_h
#define funcao7_h

#include <stdio.h>

float formula(int x){
    
    float e = 0;
    int i;
    
    for (i = 1; i <= x; i++) {
        e += ( (float)x / (float)i );
    }
    
    return e;
    
}

#endif /* funcao7_h */
