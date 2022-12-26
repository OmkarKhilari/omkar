#include<stdio.h>

int main(){

//lab4 question2a
//Fibonacci Sequence

printf("Fibonacci Sequence Printer\n");

int n,m=0,k=1,l;

printf("Untill which term you want to print the sequence?\n");
printf("Please Enter : \n");

scanf("%d", &n);

printf("1, ");

for(int i =1; i < n;++i){

   l = m + k;
   m = k;
   k = l;
   
   
   printf("%d, ", l);

}






return 0;

}
