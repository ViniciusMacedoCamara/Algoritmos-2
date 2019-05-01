//
//  recursivo1.c
//  listaRecursividade
//
//  Created by Vinicius Macedo on 07/11/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//  1) Faça uma função recursiva para elevar um valor base a potência do valor expoente.

#include <stdio.h>

int potencia(int base, int expoente)
{
    if (expoente == 0)
        return (1);
    else
        return (base * potencia(base, expoente - 1));
}

int recursivo1(){
    
    printf("\n%d\n", potencia(2, 5));
    
    return 0;
}
