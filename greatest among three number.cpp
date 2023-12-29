#include <stdio.h>
int main(){
 int a;
 int b;
 int c;
 
 printf("Enter a 1st Number: ");
 scanf("%d",&a);
 
 printf("Enter a 2nd Number: ");
 scanf("%d", &b);
 
 printf("Enter a 3rd Number: ");
 scanf("%d", &c);
 
 if (a>b && a>c){
     printf("The greatest number is a:");
 }
 else if(b>c && b>c){
     printf("The greatest number is b: ");
 }
 else{
     printf("The greatest number is c:");
 }
 
 }
