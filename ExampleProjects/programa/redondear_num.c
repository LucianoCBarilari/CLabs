#include <stdio.h>

int num1=1513;
int darresultado(int num1);


int main(void)
{
    printf("resultado: %d \n",darresultado(num1));
}

int darresultado(int num1)
{ 
  int resul=0;   
  int counter=0;
  int counter1=0;
  int lastdigit = num1 % 10;

  if (lastdigit >= 5) 
 {
     for (int i = lastdigit; i < 10; i++) 
     { 
      counter++;
     } 
return num1 + counter;
 }
else (lastdigit > 0);
 {
     for (int i = lastdigit; i < 5; i++) 
     { 
      counter1++;
     } 
     
    resul = 5- counter1;
    return num1 - resul;  

 
 } 
 
}
