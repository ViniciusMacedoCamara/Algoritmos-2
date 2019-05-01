//
//  recursivo3.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>

int mdcEuclides(int a, int b){
    
    int r;
    
    r = (a>b) ? a % b : b % a;
    //Explicando a linha de cima
    //r = if (condicao) a % b else b % a --- ? significa if --- : significa else
    
    if (r == 0) {
        return b;
    }
    if (a < b) {
        return mdcEuclides(a , r);
    } else {
        return mdcEuclides(b , r);
    }

}

int recursivo3(){
    
    printf("\n%d\n", mdcEuclides(12, 20));
    
    return 0;
}
