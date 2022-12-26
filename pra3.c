#include<stdio.h>

int main()
{
int n;

printf("Enter any number between 1 to 5 : \n");
scanf("%d", &n);

switch(n){
  case 3 : printf("Unlucky\n");
  break;
  
  case 2 : printf("hole\n");
  break;
  
  case 1 : printf("off\n");
  break;
  
  case 4 : printf("Lucky\n");
  break;
  
  case 5 : printf("Rich Boy\n");
  

  }


}
