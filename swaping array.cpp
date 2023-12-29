#include <stdio.h>
int main(){
	int array_1st[]={1,2,3,4};
    int array_2nd[]={95,96,97,98};

    printf("The 1st array before swaping:- ",array_1st);
    for(int i=0;i<3;i++){
    	printf(" %d",array_1st[i]);
	}
	printf("\nThe 2nd array before swaping:- ",array_2nd); 
	for(int j=0;j<3;j++){
		printf(" %d",array_2nd[j]);
	}
	for (int i=0;i<3;i++){
		array_1st[i]=array_1st[i] + array_2nd[i];
		array_2nd[i]=array_1st[i]-array_2nd[i];
		array_1st[i]=array_1st[i]-array_2nd[i];
	}
	
	printf("\nThe 1st array after swaping:- ");
	for(int a=0;a<3;a++){
		printf(" %d",array_1st[a]);
	}
	printf("\nThe 2nd array after swaping:- ");
	for (int b=0; b<3; b++){
		printf(" %d",array_2nd[b]);
	}
	
	return 0;
}

