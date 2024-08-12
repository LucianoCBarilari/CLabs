#include <stdio.h>


int num=759;



int main(void)
{  
  int counter=0;
  int lastdigit = num % 10;

 if (lastdigit >= 5) 
 {
     for (int i = lastdigit; i < 10; i++) 
     { 
      counter++;
     } 

 }
 printf("resultado: %d \n",num + counter);
}




 



