//
//  recursividade2.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 24/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "recursividade2.h"

int recursividade2(){
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    fatorialRecursivo(n);
    
    printf("Resposta: %d", fatorialRecursivo(n));
    printf("\n");
    
    return 0;
}
