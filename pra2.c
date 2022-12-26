#include<stdio.h>

int main()
{

int n;

printf("Enter a number less than ten : ");
scanf("%d", &n);
printf("The Multiplication table for %d is \n:",n);
while(n<=10){
    
    for(int i = 1; i <= 10; i++){
    
    printf("%d X %d = %d\n", n, i, n*i);
      
    
    }
  break;
}


}
