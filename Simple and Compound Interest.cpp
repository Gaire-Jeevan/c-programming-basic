#include <stdio.h>
#include <math.h>
int main(){
       float P,T,R,Simple_Interest,Compound_Interest,N;
      
       printf("Enter a principal amount:- ");
       scanf("%f",&P);
       
       printf("Enter Time in Yrs:- ");
       scanf("%f",&T);
       
       printf("Enter the rate in percentage:- ");
       scanf("%f",&R);
       
       printf("Enter number of times interest applied per time period :-");
       scanf("%f",&N);
        
       Simple_Interest=(P*T*R)/100;
       printf("The Simple Interest is %f",Simple_Interest);
       
       Compound_Interest=P*(pow((1+(R/N)),N*T)-1);
       printf("\nThe Compund Interest is %f", Compound_Interest);
       return 0;
    }
