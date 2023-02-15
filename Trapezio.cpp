#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void Trapezio (){
	
    float base_maior, base_menor, area, altura;  
    
    printf("Informe a base maior: ");  
    scanf("%f", &base_maior);  
  
    printf("Informe a base menor: ");  
    scanf("%f", &base_menor);  
  
    printf("Informe a altura: ");  
    scanf("%f", &altura);  
  
    area = ((base_maior + base_menor) * altura) / 2;  
 
    printf("A area do trapezio e: %.2f \n", area);  
  
}

int main()  
{  
	Trapezio();
	system("PAUSE");
	return (0);  

}  
