/******************************************************************************
Program to perform various operations (insertion, Deletion, Traversing on array
*******************************************************************************/
//Function Prototype
void insertion(int [ ], int, int, int);
int deletion (int [ ], int,int);
void traverse(int [ ], int);

#include <stdio.h>

int main()
{
int A[20], N, I, Index_No, Item, choice=1;
printf("Enter the length of array you want:- ");
scanf("%d",&N);

printf("Enter the elements of Array %d:- ",N);
for(I=0;I<=N-1;I++)
scanf("%d",&A[I]);
printf("The original array elements before any operation are:- \n");

traverse(A,N);
while(choice==1)
{
printf("\nSelect the operation do you want to perform in this array:- ");
printf("\nPress 1. To Insert ");
printf("\nPress 2. To Delete ");
printf("\nPress 3. For display the elements of array\n ");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter the value which you want to insert in this array: ");
scanf("%d", &Item);
printf("Enter the Index where you want to insert");
scanf("%d", &Index_No);
insertion(A, N, Item, Index_No);//Function Call
N=N+1;
printf("The array after insertion one element is:\n");
traverse(A,N);
break;

case 2:
printf("Enter the index from where you want to delete: ");
scanf("%d", &Index_No);
Item=deletion(A, N, Index_No);//Function Call
printf("The deleted element is %d\n",Item);
N=N-1;
printf("The array after deletion of one element is:\n");
traverse(A,N);
break;

case 3:
	printf("Your elements in array:-\n ");
traverse(A,N);

}//End of Switch
printf("\nDo you want to continue Press 1 otherwise press 0 to exit:");
scanf("%d",&choice);
}//End of while
return 0;
}//End of Main


int deletion (int A[ ], int N, int Place)//Function Definition
{
int I, Item;
Item= A[Place];
for(I=Place+1;I<=N-1;I++)
A[I-1]=A[I];
return(Item);
}

void traverse(int A[ ], int N)//Function Definition
{
int I=0;
while(I<=N-1)
{
printf("%d\t ", A[I]);
I=I+1;
}
}
void insertion (int A[ ], int N, int Element, int Place)//Function Definition
{


int i;
for(i=N-1;i>=Place;i--)
A[i+1]=A[i];
A [Place] = Element;
}
