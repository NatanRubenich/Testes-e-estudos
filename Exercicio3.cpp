#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

FILE *arq;

typedef struct{
    char nome[20],curso[20];
    int nmatricula;
}aluno;

void cadastro(aluno *a){
    printf("Nome: ");
    fflush(stdin);
   //fgets(a->nome, 20, stdin);
   	scanf("%s", a->nome);
    printf("Numero de Matricula: ");
    scanf("%d", &a->nmatricula);
    printf("Curso: ");
    fflush(stdin);
    fgets(a->curso, 20, stdin);

}

void mostra (aluno a){
    printf("\nALUNO\nNome: %s - Numero de Matricula: %d - Curso: %s\n", a.nome, a.nmatricula, a.curso);
}

void salvarArquivo(aluno a[], int tamanho){
    if ((arq = fopen("texto5.txt","w")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
    	for(int i=0; i<tamanho; i++){
        fwrite(&a,sizeof(aluno),1,arq); //sizeof saber o tamanho da variavel
       
    }
            printf("Concluido\n");
            fclose(arq);
    }
}

void carregarArquivo(aluno a[], int *tamanho){
    if ((arq = fopen("texto5.txt","r")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fread(&a[(*tamanho)++],sizeof(aluno),1,arq);
        while(!feof(arq)){
        fread(&a[(*tamanho)++],sizeof(aluno),1,arq);
        };
        printf("\nConcluido\n");
        fclose(arq);
    }
}

int main(){
/*	printf("######### MENU #########\n\n");
	printf("1. Inserir \n");
	printf("2. Mostrar \n");
	printf("3. Sair \n\n");
*/
    aluno a[5];
	int tamanho =0;
	
    carregarArquivo(a, &tamanho);
    
     for(int i=0; i<5; i++){ 
        mostra(a[i]);
    }
    for(int i=0; i<5; i++){
        cadastro(&a[i]);
       tamanho++;
	}


    salvarArquivo(a, tamanho);
    
    return 1;
}
