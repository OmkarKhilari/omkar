#include<stdio.h>

int main(){

int n;
printf("Enter number of rows you want to print : \n");
scanf("%d", &n);
printf("-----------------The Pattern----------------\n");

for(int i = 1; i <= n ; i++){

       for(int j = 1; j<=i ; j++){
             
             printf("%d ", j);
             
       }

   printf("\n");
}
return 0;
}
