#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

FILE *arq;

void salvarArquivo(){
    char *palavra = {"Este e um exemplo de texto"};
    if ((arq = fopen("texto.txt","w")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        int i=0;
        do{
            putc(palavra[i++],arq);
        }while (palavra[i]!='\0');
        printf("Arquivo Salvo\n");
        fclose(arq);
    }
}

void carregarArquivo(){
    if ((arq = fopen("texto.txt","r")) == NULL) {
        printf("\n\n Arquivo nao encontrado!\n");
    } else {
        char c = getc(arq);
        while(c!=EOF){
            printf("%c",c);
            c = getc(arq);
        };
        printf("\nCarregamento Concluido\n");
        fclose(arq);
    }
}

int main(){
    carregarArquivo();
    salvarArquivo();
    system("pause");
    return 0;
}


