#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void troca_valores(int *ptrx, int *ptry, int *ptrz);
int main(void)
{
  int a, b, c;
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("");
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  printf("");
  printf("Digite o terceiro valor: ");
  scanf("%d", &c);
  printf("");
  printf("Voce digitou os valores na seguinte ordem: %d, %d e %d\n", a, b, c);
  troca_valores(&a, &b, &c);
  printf("");
  printf("Os valores trocados sao: %d e %d\n", a, c);
 printf("");
  printf("O segundo valor e : %d\n", b);
  getch();
  return 0;
  system("PAUSE");
}

void troca_valores(int *ptrx, int *ptry, int *ptrz)
{
  int auxiliar;
  auxiliar = *ptrx;
  *ptrx = *ptrz;
  *ptrz = auxiliar;
  printf("");
  printf("Parâmetro por refeência: %d\n", *ptrx);
  return;
}
