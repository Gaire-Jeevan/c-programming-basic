#include <stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int cnr=factorial(n)/(factorial(r)*factorial(n-r));
    return cnr;
}
int main()
{
    int n;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
        	int icj=combination(i,j);//in each row the value of i, j i.e n,r is equals
        	/*0	1	2	3	4
        	0	1
        	1	1	2
        	2	1	2	1
        	3	1	3	3	1
        	4	1	4	6	4	1
        	*/
            printf("%d ",icj);
        }
        printf("\n");
    }

    return 0;
}

