#include<stdio.h>
#include<stdlib.h>

void minutos_segundos(int *minutos, int *segundos){

int horas;
printf("Insira a quantidade de Horas: ");
scanf("%d", &horas);

*minutos = horas * 60;
*segundos= *minutos * 3600;

}

int main(){
    int min, sec;

minutos_segundos(&min,&sec);
printf("Quantidade de minutos e: %d\n", min);
printf("Quantidade de segundos e: %d\n", sec);

system("pause");
return 0;
}
