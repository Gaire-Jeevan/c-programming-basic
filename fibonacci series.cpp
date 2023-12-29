#include<stdio.h>

int main(){
    int num1,num2,upto,sum,term_1st,term_2nd,x;
    printf("Enter the first number:- ");
    scanf(" %d",&num1);
    
    printf("Enter a second number:- ");
    scanf(" %d",&num2);
    
    printf("Enter the number up to which you want to make fibonacci:- ");
    scanf(" %d",&upto);
    
    printf(" %d %d",num1, num2);
    
    for(x=1; x<upto; x++){
        sum=num1+num2;
         
        printf(" %d",sum);
         
        num1=num2;
        num2=sum;
    }
  return 0;  
}
