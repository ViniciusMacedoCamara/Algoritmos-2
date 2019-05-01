//
//  funcao2.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
/*Faça o programa principal que solicita ao usuário um número inteiro N e após faça a chamada de um procedimento com o nome de “castigo”, passando N como parâmetro por valor. O procedimento deve imprimir N vezes a frase “Boa noite a todos!”.*/

#include "funcao2.h"

int funcao2(){
    
    int n;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    castigo(n);
    printf("\n");
    
    return 0;
}
