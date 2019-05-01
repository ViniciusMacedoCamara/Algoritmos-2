//
//  funcao6.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 10/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "funcao6.h"

int funcao6(){
    
    int a, b, x;
    
    printf("Digite o valor 1: ");
    scanf("%f", &a);
    
    printf("Digite o valor 2: ");
    scanf("%d", &b);
    
    x = mdc(a, b);
    
    printf("%d ", x);
    
    printf("\n");
    
    return 0;
}
