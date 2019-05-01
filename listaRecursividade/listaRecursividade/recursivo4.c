//
//  recursivo4.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  4) Faça um programa que receba um valor n, e imprima a contagem regressiva a partir deste valor. Por exemplo, se o usuário digitar 5, o programa irá imprimir 5, 4, 3, 2, 1, 0.

#include <stdio.h>

int contagemRegressiva(int n){
    
    if (n == 0) {
        return n;
    }
    printf("\n%d\n", n);
    return contagemRegressiva(n - 1);
}

int recursivo4(){
    
    printf("\n%d\n", contagemRegressiva(5));
    
    return 0;
}
