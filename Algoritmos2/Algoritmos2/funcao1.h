//
//  funcao1.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef funcao1_h
#define funcao1_h

#include <stdio.h>

int verificaSinal(int a){
    
    if (a > 0) {
        return 1;
    } else if (a < 0) {
        return 0;
    }
    return -1;
}

#endif /* funcao1_h */
