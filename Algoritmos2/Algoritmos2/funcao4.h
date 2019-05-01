//
//  funcao4.h
//  Algoritmos2
//
//  Created by Vinicius Macedo on 12/09/2018.
//  Copyright © 2018 Vinicius Macedo. All rights reserved.
/*Faça um programa que possua uma função que recebe, por parâmetro, a altura e o sexo de uma pessoa e retorna o seu peso ideal. Para os homens, calcular o peso ideal usando a fórmula PI = 72,7 * altura – 58, e para as mulheres PI = 62,1 * altura – 44,7.*/

#ifndef funcao4_h
#define funcao4_h

#include <stdio.h>

int imc(float altura, int sexo){
    
    float teste;
    
    if (sexo == 1) {
       teste = (float) 72.7 * altura - 58;
    } else {
        teste = (float) 62.1 * altura - 44.7;
    }
    
    return teste;
    
}

#endif /* funcao4_h */
