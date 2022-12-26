#include<stdio.h>

int main()
{
 int a,b,c,d,e;
 
 printf("Enter any 5 numbers each seperated by space ");
 
 scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
 
 float avg , sum;
 
 sum = a+b+c+d+e;
 
 avg = sum/5;
 
 printf("Average : %.2f\n", avg);

 if(a>b & a>c & a>d & a>e){
 printf("Maximum of these 5 numbers is %d\n", a);
 }
 
 else if(b>a & b>c & b>d & b>e){
 printf("Maximum of these 5 numbers is %d\n", b);
 }
 
 else if(c>a & c>b & c>d & c>e){
 printf("Maximum of these 5 numbers is %d\n", c);
 }
 
 else if(d>a & d>b & d>c & d>e){
 printf("Maximum of these 5 numbers is %d\n", d);
 }
 
 else if(e>a & e>b & e>c & e>d){
 printf("Maximum of these 5 numbers is %d\n", e);
 }
 
 if(a<b & a<c & a<d & a<e){
 printf("Minimum of these 5 numbers is %d\n", a);
 }
 
 else if(b<a & b<c & b<d & b<e){
 printf("Minimum of these 5 numbers is %d\n", b);
 }
 
 else if(c<a & c<b & c<d & c<e){
 printf("Minimum of these 5 numbers is %d\n", c);
 }
 
 else if(d<a & d<b & d<c & d<e){
 printf("Minimum of these 5 numbers is %d\n", d);
 }
 
 else if(e<a & e<b & e<c & e<d){
 printf("Minimum of these 5 numbers is %d\n", e);
 }
}






