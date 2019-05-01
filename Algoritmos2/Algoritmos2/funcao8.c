//
//  funcao8.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "funcao8.h"

int funcao8(){
    
    int valor, i;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    printf("Valor1 %d", valor);
    
    do {
        for (i = 0; i < valor; i++) {
            valor = valor/i;
        }
    } while (valor % 2 == 0);
    
    printf("Valor2 %d", valor);
    
    return 0;
}
