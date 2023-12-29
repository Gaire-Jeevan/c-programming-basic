#include <stdio.h>
int main(){
int num1, num2, add, sub, mult, div;
int math_operator;
printf("Welcome to simple calculator!");
printf("\nEnter the first number:- ");
scanf("%d",&num1);
printf("Enter the second number:- ");
scanf("%d",&num2);
printf("\nEnter the operation you want to do, Type 0,1,2,3 for addtion, substraction, multiplication and division respectively:- ");
scanf("%d",&math_operator);
if (math_operator==0){
	add=num1+num2;
	printf("The addition of 2 entered number:- %d", add);
}
else if(math_operator==1){
	sub=num1-num2;
	printf("The Subtraction of 2 entered number is:- %d",sub);
}
else if(math_operator==2){
	mult=num1*num2;
	printf("The multiplication of 2 entered number is:- %d",mult);
}
else if (math_operator==3){
	div=num1/num2;
	printf("The division of user entered number is:- %d",div);
}

return 0;	

}
