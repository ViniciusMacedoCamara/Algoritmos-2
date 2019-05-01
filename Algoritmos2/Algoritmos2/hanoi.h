//
//  hanoi.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 24/10/18.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#ifndef hanoi_h
#define hanoi_h

#include <stdio.h>

void hanoi(int n, char origem, char destino, char temp){
    if(n==0) return;
    hanoi(n-1, origem, temp, destino);
    printf("Mova o disco %d de %c para %c ", n, origem, destino);
    hanoi(n-1, temp, destino, origem);
}

#endif /* hanoi_h */
