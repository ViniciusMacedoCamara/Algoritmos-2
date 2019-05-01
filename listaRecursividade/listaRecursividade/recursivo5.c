//
//  recursivo5.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  5) Faça uma função recursiva que recebe um vetor preenchido e a quantidade de posições deste vetor, e retorna a soma de todos os elementos do vetor.

#include <stdio.h>

int somaVetor(int v[10], int posVetor){
    if (posVetor == 0) {
        return v[0];
    } else {
        return v[posVetor] + somaVetor(v, posVetor - 1);
    }
}

int recursivo5(){
    
    int aux;
    
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    aux = somaVetor(x, 9);
    
    printf("\n%d\n", aux);
    
    return 0;
}
