#include <stdio.h>

void pricecalculator(float rupees);

int main(){

    float rupees = 0.00;
    
    printf("Enter price : ");
    scanf("%f", &rupees);
    
    pricecalculator(rupees);
   
}

void pricecalculator(float rupees){
     rupees = rupees+(0.18*rupees);
     
     printf("Final price is : %f ", rupees);
}

