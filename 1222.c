#include<stdio.h>

int main(){

int n;
printf("Enter number of rows you want to print : \n");
scanf("%d", &n);
printf("-----------------The Pattern----------------\n");

for(int i = 1; i<=n ; i++){

    for(int j = i; j < n; j++){
          printf(" ");
    
    }
    
    for(int k = 1; k<=i ; k++){
          printf("%d ", i);    
    }


      printf("\n");
}

return 0;
}
