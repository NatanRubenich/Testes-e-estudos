#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iomanip>
#include<time.h>
#define TAMANHO 50
using namespace std;

int lista[TAMANHO];
int posicao_atual =0;


int main(){
	srand(time(NULL));
	int i;
	for(i=0 ; i <= TAMANHO; i++){
		lista[i] =  i;
		printf("lista : %d \n", lista[i]);
	}
	
	return 0;
}
