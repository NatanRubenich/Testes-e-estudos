
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificar_caractere(char c){
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
       c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
       c == 'u' || c == 'U')
       return 1;
    else
        return 0;
}


int main(){
	setlocale (LC_ALL,"Portuguese");
    char c;
    printf("Informe o caractere: ");
    scanf("%s",&c );

    if(verificar_caractere(c))
        printf("\n É uma vogal. \n");
    else
        printf("\n Não é uma vogal. \n");
    system("PAUSE");
	return 0;
}
