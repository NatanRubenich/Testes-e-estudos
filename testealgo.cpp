#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


int main (){
	
  int matriz[3][3];
  int i, j;
  int soma=0;
  
  srand(time(NULL));
  for(i=0; i<3; i++){
  	for(j=0; j<3; j++){
  	
	matriz[i][j] = rand() % 10;
	
	
	if(i==j)
	soma += matriz[i][j];
  	
	  }
  }
  
	printf("%d	%d	%d \n",matriz[0][0],matriz[0][1],matriz[0][1]);
	printf("%d	%d	%d \n",matriz[1][0],matriz[1][1],matriz[1][2]);
	printf("%d	%d	%d \n",matriz[2][0],matriz[2][1],matriz[2][2]);
  
  printf("soma = %d",soma);
  return 0;
}
