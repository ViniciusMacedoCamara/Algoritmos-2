//
//  funcao4.c
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
//

#include "funcao4.h"

int funcao4(){
    
    int sexo;
    float altura, peso;
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("Digite o sexo (0)Feminino | (1)Masculino : ");
    scanf("%d", &sexo);
    
    peso = imc(altura, sexo);
    
    printf("%.2f ", peso);
    
    printf("\n");
    
    return 0;
}
