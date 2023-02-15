#include <stdio.h>
#include <conio.h>

void troca_valores(int *px, int *py, int *pz);

int main(void){
	
  int a, b, c;
  printf("Digite o primeiro valor: \n");
  scanf("%d", &a);
  
  printf("Digite o segundo valor: \n");
  scanf("%d", &b);
  
  printf("Digite o terceiro valor: \n");
  scanf("%d", &c);
  
  printf("Voce digitou os valores na seguinte ordem: %d, %d e %d\n", a, b, c);
  
  troca_valores(&a, &b, &c);
  
  
  printf("Os valores trocados sao: %d e %d\n", a, c);
  printf("O valor nao trocado e: %d\n", b);
  
  getch();
  return 0;
}

void troca_valores(int *px, int *py, int *pz){
	
  int aux;
  
  aux = *px;
   
  *px = *pz;
  
  *pz = aux;
  
  return;
}
