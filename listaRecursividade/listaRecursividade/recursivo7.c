//
//  recursivo7.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>

int potencia7(int base, int expoente)
{
    if (expoente == 0)
        return (1);
    else
        return (base * potencia7(base, expoente - 1));
}

int somar(int x, int n){
    if (n == 0){
        return 1;
    }
    return potencia7(x, n) + somar(x, n - 1);
}

int recursivo7(){
    
    printf("\n%d\n", somar(2, 5));
    
    return 0;
}
