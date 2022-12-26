#include<stdio.h>
int main ()
{
int a,b,c;
printf("Enter any 3 numbers each seperated by space : ");
scanf("%d%d%d", &a, &b, &c);

float avg ;
avg = (a + b + c)/3.0;

printf("Average : %.2f\n", avg);

}


