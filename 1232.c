#include<stdio.h>

int main(){
   int n;
   int count;
   printf("Enter number of rows you want to print : \n");
   scanf("%d", &n);
   printf("-----------------The Pattern----------------\n");

   for(int i = 1; i<=n ; i++){

     for(int k = i; k<n; k++){
      printf(" ");
         }
           for(int j = 1; j<=i; j++){
           count++;
           printf("%d ", count);
   
    }   

       printf("\n");
   }

   return 0;
   }
   

