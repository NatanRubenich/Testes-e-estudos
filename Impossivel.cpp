#include <stdlib.h>
#include <stdio.h>
#include <string.h>

FILE *arq;


typedef struct{ //Endereco rua, bairro e numero
    char rua[20], bairro[20], nome[20];
    int num, idade;
}info;

void cadastro(info *i){ //Via referencia
    printf("Nome: ");
    scanf("%s", i->nome);
    printf("Idade: ");
    scanf("%d", &i->idade);
    printf("Rua: ");
    scanf("%s", i->rua);
    printf("Numero: ");
    scanf("%d", &i->num);
    printf("Bairro: ");
    fflush(stdin);
    fgets(i->bairro, 20, stdin);

}

void mostra (info i){
    printf("Seus dados Pessoais\n\nNome: %s - Idade: %d\n\nSeu Endereco\n\nRua: %s - Num: %d - Bairro: %s", i.nome,i.idade,i.rua,i.num,i.bairro);
}

void salvarArquivo(info i){

    if ((arq = fopen("texto4.txt","w")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fwrite(&i,sizeof(info),1,arq); //sizeof saber o tamanho da variavel
        printf("Concluido\n");
        fclose(arq);
    }
}

void carregarArquivo(info i){
    if ((arq = fopen("texto4.txt","r")) == NULL) {
        printf("\n Erro na abertura do arquivo\n");
    } else {
        fread(&i,sizeof(info),1,arq);
        while(!feof(arq)){
            printf("Seus dados Pessoais\n\nNome: %s - Idade: %d\n\nSeu Endereco\n\nRua: %s - Num: %d - Bairro: %s", i.nome,i.idade,i.rua,i.num,i.bairro);
            fread(&i,sizeof(info),1,arq);
        };
        printf("\nConcluido\n");
        fclose(arq);
    }
}

int main(){
    info i;
    carregarArquivo(i);
    cadastro(&i);
    salvarArquivo(i);

    return 1;
}
