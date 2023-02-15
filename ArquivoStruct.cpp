#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

FILE *arq;

typedef struct Aluno{
	int id;
	char nome[50];
	float nota;
};

void salvarArquivo(){
    Aluno a1;
    a1.id=10;
    strcpy(a1.nome,"Nome do aluno");
    a1.nota=7.95;
    if ((arq = fopen("texto3.txt","w")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fwrite(&a1,sizeof(Aluno),1,arq);
        printf("Concluido\n");
        fclose(arq);
    }
}

void carregarArquivo(){
    Aluno a;
    if ((arq = fopen("texto3.txt","r")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fread(&a,sizeof(Aluno),1,arq);
        while(!feof(arq)){
            printf("%d, %s, %.2f\n",a.id, a.nome, a.nota);
            fread(&a,sizeof(Aluno),1,arq);
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


