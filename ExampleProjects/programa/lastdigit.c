
 
#include <stdio.h>
 
int main()
{
  	int Number, LastDigit;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	
  	LastDigit = Number % 10;
  
  	printf(" \n The Last Digit of a Given Number %d =  %d", Number, LastDigit);
 
  	return 0;
}