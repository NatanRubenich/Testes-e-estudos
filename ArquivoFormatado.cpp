#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

FILE *arq;

void salvarArquivo(){
    if ((arq = fopen("texto2.txt","w")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fprintf(arq,"%d,%d\n",10,20);
        printf("Concluido\n");
        fclose(arq);
    }
}

void carregarArquivo(){
    int x,y;
    if ((arq = fopen("texto2.txt","r")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        char c = fscanf(arq,"%d,%d",&x,&y);
        while(c!=EOF){
            printf("%d - %d,%d\n",c, x, y);
            c = fscanf(arq,"%d,%d",&x,&y);
        };
        printf("\nConcluido\n");
        fclose(arq);
    }
}

int main(){
    carregarArquivo();
    salvarArquivo();
    return 0;
}


