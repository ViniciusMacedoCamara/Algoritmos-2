//
//  subrotinas1.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 05/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>

void leitura (int *x, char *letra){
    do {
        printf("Valor de %s:", letra);
        scanf("%d", x);
        if (*x <= 0) {
            printf("Valor Invalido! Digite Novamente.\n");
        }
    } while (*x <= 0);
}

int MDC(int a, int b){
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return (a);
}



int subrotinas1(){

    int a, b;
    char escolha;
    
    do {
        
        printf("Digite A: ");
        scanf("%d", &a);
        printf("Digite B: ");
        scanf("%d", &b);
        
        printf("Escolha + - * / : ");
        scanf("%s", &escolha);
        
        if (escolha == '+') {
            printf("A soma é = %d\n ", soma(a,b));
        } else if (escolha == '-'){
            printf("A subtracao é = %d\n ", subtracao(a,b));
        }else if (escolha == '*'){
            printf("A multiplicacao é = %d\n ", multiplicacao(a,b));
        } else if (escolha == '/'){
            printf("A divisao é = %.2f\n ", divisao(a,b));
        }
        
        if (escolha != '+' || escolha != '-' || escolha != '*' || escolha != '/') {
            printf("Digite corretamente entre + - * /");
        }
    } while (escolha == '+' || escolha == '-' || escolha == '*' || escolha == '/');
    
    
    /*printf("A soma é = %d\n", soma(a,b));
     printf("A subtracao é = %d\n", subtracao(a,b));
     printf("A multiplicacao é = %d\n", multiplicacao(a,b));
     printf("A divisao é = %.2f\n", divisao(a,b));*/

    return 0;
}
