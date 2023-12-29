#include <stdio.h>

int main()
{
    int a[2][2],b[2][2],c[2][2]={0};
    
    //matrix input
    printf("Enter the matrix element of matrix 1st:-\n ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
   
    printf("Enter the matrix element of matrix 2nd:-\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //logic
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        	for(int k=0;k<2;k++){
          	    c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }
   
   //display result
    printf("Martix after matrix multiplication is:-\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

