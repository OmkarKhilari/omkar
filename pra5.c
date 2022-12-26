#include<stdio.h>

void square(float s);
void rectangle(float l, float b);
void circle(float r);

int main(){
float s,l,b,r ;

square(float s);
rectangle(float l, float b);
circle(float r);

return 0;

}

void square(float s){
     printf("Side length : ");
     scanf("%f", &s);
     
     printf("Area is : %f", s*s);
}

void rectangle(float l, float b){
     printf("length : ");
     scanf("%f", &l);
     
     printf("breadth : ");
     scanf("%f", &b);
     
     printf("Area is : %f", l*b);
}

void circle(float r){
     printf("radius : ");
     scanf("%f", &r);
     
     printf("Area is : %f", 3.14*r*r);
}
