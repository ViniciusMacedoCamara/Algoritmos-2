//
//  main.c
//  CacaPalavra
//
//  Created by Vinicius Macedo on 21/11/18.
//  Copyright 2018 Vinicius Macedo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(int argc, const char * argv[]) {
    
    char pegaPalavra[TAM];
    char linha[TAM];
    char matriz[TAM][TAM];
    char nomeArquivo[TAM];
    
    int i, j, pos=0, x, y, flag;
    //int w;
    
    printf("Digite o arquivo desejado: ");
    scanf("%s", &nomeArquivo);
    
    //FILE *fp = fopen("meuCacaPalavras.txt", "r");
    FILE *fp = fopen(nomeArquivo, "r");
    
    //Palavra digitada
    printf("Digite a palavra desejada: ");
    scanf("%s", pegaPalavra);
    
    while (!feof(fp)) {
        fscanf(fp, "%d %d ", &x, &y);
        if (fgets(linha, TAM, fp)) {
            for (i=0; i<TAM; i++) {
                matriz[pos][i] = linha[i];
            }
        }
        pos++;
    }
    fclose(fp);
    
    //Mostra a matriz do txt
    
    for (i=0; i<20; i++) {
        for (j=0; j<20; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("pos: %d %d\n", x, y);
    
    //printf("strlen %d: ", strlen(pegaPalavra));
    
    //for(w = 0; w < strlen(pegaPalavra); w++){
        //printf("strlen %c: ", pegaPalavra[w]);
        flag = 0;
        
        for(i=0; i<y; i++){
            for(j=0; j<x; j++){
                
                //Primeira letra encontrada
                if (pegaPalavra[0] == matriz[i][j]){
                    printf("%c - LETRA ENCONTRADA na pos [%d][%d]\n", pegaPalavra[0], i, j);
                    
                    //Norte
                    if (pegaPalavra[1] == matriz[i - 1][j]) {
                        
                        printf("%c - LETRA Norte na pos [%d][%d]\n", pegaPalavra[1], i - 1, j);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i - t][j]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i - t][j], i - t, j);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Sul
                    if (pegaPalavra[1] == matriz[i + 1][j]){
                        
                        printf("%c - LETRA SUL na pos [%d][%d]\n", pegaPalavra[1], i + 1, j);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i + t][j]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i + t][j], i + t, j);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Leste
                    if (pegaPalavra[1] == matriz[i][j + 1]) {
                        
                        printf("%c - LETRA Leste na pos [%d][%d]\n", pegaPalavra[1], i, j + 1);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i][j + t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i][j + t], i, j + t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Oeste
                    if (pegaPalavra[1] == matriz[i][j - 1]){
                        
                        printf("%c - LETRA Oeste na pos [%d][%d]\n", pegaPalavra[1], i, j - 1);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i][j - t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i][j - t], i, j - t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Nordeste
                    if (pegaPalavra[1] == matriz[i - 1][j + 1]){
                        
                        printf("%c - LETRA Nordeste na pos [%d][%d]\n", pegaPalavra[1], i - 1, j + 1);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i - t][j + t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i - t][j + t], i - t, j + t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Noroeste
                    if (pegaPalavra[1] == matriz[i - 1][j - 1]){
                        
                        int t = 2;
                        
                        printf("%c - LETRA Noroeste na pos i/j [%d][%d]\n", pegaPalavra[1], i - 1, j - 1);
                        
                        while(pegaPalavra[t] == matriz[i - t][j - t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i - t][j - t], i - t, j - t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                         if (flag == 1) {
                             break;
                         }
                    }
                    
                    //Sudeste
                    if (pegaPalavra[1] == matriz[i + 1][j + 1]){
                        
                        printf("%c - LETRA Sudeste na pos i/j [%d][%d]\n", pegaPalavra[1], i + 1, j + 1);
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i + t][j + t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i + t][j + t], i + t , j + t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                    //Sudoeste
                    if (pegaPalavra[1] == matriz[i + 1][j - 1]){
                        
                        printf("%c - LETRA Sudoeste na pos [%d][%d]\n", pegaPalavra[1], i + 1, j - 1  );
                        
                        int t = 2;
                        
                        while(pegaPalavra[t] == matriz[i + t][j - t]){
                            printf("Letra %c na posicao do VETOR [%d]\n", pegaPalavra[t], t);
                            printf("Letra %c na posicao da MATRIZ [%d][%d]\n", matriz[i + t][j - t], i + t, j - t);
                            t++;
                        }
                        
                        if(t == strlen(pegaPalavra)){
                            flag = 1;
                        }
                        
                        if (flag == 1) {
                            break;
                        }
                    }
                    
                }
            }
            if (flag == 1) {
                break;
            }
        }
//        if (flag == 1) {
//            break;
//        }
    //}
    
    if (flag == 1){
        printf("%s - encontrada \n", pegaPalavra);
    }else{
        printf("%s - nao encontrada\n", pegaPalavra);
    }
    
}
