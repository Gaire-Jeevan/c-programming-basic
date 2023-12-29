#include <stdio.h>
int main(){
int basic_salary, over_time, amount, overtime_amount, house_allowance, medical_allowance, Gross_salary;

printf("Welcome to Gross Salary Calculator!");
printf("\nEnter the basic salary:- ");
scanf("%d",&basic_salary);

printf("Enter the overtime you work in hour per month:- ");  
scanf("%d",&over_time);

amount=1000;                      //overtime amount per hour

overtime_amount=over_time*amount;
printf("Your overtime amount is:- %d", overtime_amount);

printf("\nEnter the house allowance:- ");
scanf("%d",&house_allowance);

printf("Enter the medical allowance:- ");
scanf("%d",&medical_allowance);

Gross_salary=basic_salary+overtime_amount+house_allowance+medical_allowance;

printf("Your Gross salary is %d", Gross_salary);

return 0;
}
