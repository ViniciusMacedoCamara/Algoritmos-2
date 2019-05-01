//
//  funcao3.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
/*Faça um programa que possua uma função que recebe, por parâmetro, um valor N inteiro e positivo e retorna verdadeiro se N for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que é igual a soma de seus divisores.*/

#include "funcao3.h"

int funcao3(){
    
    int n;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    if (perfeito(n) == 1) {
        printf("\n %d É um número perfeito!", n);
    } else {
        printf("\n %d Não é um número perfeito!", n);
    }
    
    printf("\n");
    
    return 0;
}
