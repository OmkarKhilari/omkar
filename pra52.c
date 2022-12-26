#include<stdio.h>

float square(float s);
float rectangle(float l, float b);
float circle(float r);

int main(){

float l = 5;
float b = 10;

printf("%f",rectangle(l,b));

return 0;
}

float square(float s){
     return s*s;
}

float rectangle(float l, float b){
     return l*b;
}

float circle(float r){
     return 3.14*r*r;
}
