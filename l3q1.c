#include<stdio.h>

int main()
{
 //lab4 question1
 
  printf("Factorial Calculator\n"); 
  int num,fact;
    
  printf("Enter the number : \n");
  
  scanf("%d",&num);
  
  for(int i = 1; i <=num; i++){
  
      fact = fact*i;
   
   }
   
   printf("Factorial of %d is : %d \n" , num,fact);
   
  return 0;
  
 }
