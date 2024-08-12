#include <stdio.h>

int num1;
int num2;
int porcentaje=45;
int resultado;

int Redondear(int num2);



int main(void)
{
    
    printf("Precio: ");
    scanf("%d",&num1);
    printf("El precio ingresado es de: %d \n", num1);
    
    num2 = (num1 * porcentaje/100) + num1;
    printf("precio con ganancia: %d \n", num2);

    printf("resultado Redondeado: %d \n",Redondear(num2));
}

int Redondear(int num2)
{ 
  int resul=0;   
  int counter=0;
  int counter1=0;
  int lastdigit = num2 % 10;

  if (lastdigit >= 5) 
 {
     for (int i = lastdigit; i < 10; i++) 
     { 
      counter++;
     } 
return num2 + counter;
 }
else (lastdigit > 0);
 {
     for (int i = lastdigit; i < 5; i++) 
     { 
      counter1++;
     } 
     
    resul = 5- counter1;
    return num2 - resul;  

 
 } 
 
}

