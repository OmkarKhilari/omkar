#include<stdio.h>

int main()
{
//Sum of n natural numbers

//Runs in linear time
int n, sum=0;

printf("Enter the last Natural number you want the sum till \n");
scanf("%d", &n);

/*for(int i = 1; i<=n; i++){
     sum += i;
     
  } 
    
printf("The sum of first %d Natural Numbers is : %d\n", n,sum);*/

//Runs in constant time

sum = (n*n + n)/2;
printf("The sum of first %d Natural Numbers is : %d \n", n, sum);
return 0;


}
