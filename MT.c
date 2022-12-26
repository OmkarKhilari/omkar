#include<stdio.h>

int main()
{

//Multiplication Table
int num;
printf("Enter the number \n");
scanf("%d", &num);
printf("The Multiplication Table of %d is :\n", num);
for(int i = 1; i<=10; i++){
      printf("%d X %d = %d \n", num, i , num*i);

}
return 0;
}

