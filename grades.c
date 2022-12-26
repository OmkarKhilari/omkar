#include<stdio.h>

int main()
{
    int marks;
    
    printf("Enter your marks\n");
    
    scanf("%d", &marks);
    
    printf("You have scored %d marks\n", marks);
    if(marks>95) {
    printf("Grade : A+   ");
    }
    
    else if(marks>90){
    printf("Grade : A   ");
    }
    
    else if(marks>80){
    printf("Grade : A-   ");
    }     
    
    else if(marks>70){
    printf("Grade : B   ");
    }
    
    else if(marks>60){
    printf("Grade : B-   ");
    }
    
    else if(marks>50){
    printf("Grade : C   ");
    }
    
    else if(marks>40){
    printf("Grade : C-   ");
    }
    
    else if(marks>30){
    printf("Grade : D   ");
    }
    
    else if(marks>=0){
    printf("Grade : F    ");
    }
    
    else{
    printf("Invalid Input   ");
    }
    
}
