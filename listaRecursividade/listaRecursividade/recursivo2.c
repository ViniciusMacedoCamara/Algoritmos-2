//
//  recursivo2.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  2) Faça uma função recursiva que calcule o M.D.C. (máximo divisor comum) entre dois valores
//  fornecidos pelo usuário. Por exemplo: m.d.c. de 12 e 20 é 4.

#include <stdio.h>

int mdc(int x, int y){
    
    if (x - y == 0) {
        return x;
    }
    if (x < y) {
        return mdc(y - x, x);
    } else {
        return mdc(x - y, y);
    }
    
}

int recursivo2(){
    
    printf("\n%d\n", mdc(12, 20));
    
    return 0;
}
