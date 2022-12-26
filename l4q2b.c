#include<stdio.h>

int main(){

//lab4 question2b
//Fibonacci Sequence

printf("Fibonacci Sequence Printer\n");

int n1,n2;

printf("Between which two terms you want to print the sequence?\n");
printf("Please Enter(two numbers) seperated by space: \n");

scanf("%d%d", &n1,&n2);

int greater,smaller;
if(n1>=n2){
     greater = n1;
     smaller = n2;

}

else{
  greater = n2;
  smaller = n1;
  
}

int a1=0, a2=1, a3, c1,c2,c3;

for(int i = smaller ;  i<= greater; ++i){

   a3 = a1 + a2;
   a1 = a2;
   a2 = a3;
   
   if(smaller==a3){
    
    c1 = i;
    
   }
   
   if(greater==a3){
   
   c2 = i;
   
   break;
   }
   
   
   printf("%d, ", a3);
  
   }
   
   return 0;
}
