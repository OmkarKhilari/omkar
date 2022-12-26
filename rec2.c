#include<stdio.h>

int sum(int n);
int main(){
int x;
printf("Enter number : ");
scanf("%d", &x);
printf("Sum is : %d\n", sum(x));
return 0;
}

int sum(int n){

if(n == 1){
return 1;
}
int sumNm1 = sum(n-1);
int sumN = sumNm1 + n;

}

