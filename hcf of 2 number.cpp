#include<stdio.h>
int min(int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int gcd(int a, int b){
    int hcf;
    /*for(int i=1;i<=min(a,b);i++){     //this is used to find hcf from 1
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }*/
    for(int i=min(a,b);i>=1;i--){   //this is used to find the hcf from the minimum number from backside
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("Enter the value of a and b:- ");
    scanf("%d %d",&a,&b);
    
    int hcf=gcd(a,b);
    printf("The hcf of 2 number is:- %d",hcf);
    
    return 0;
}
