#include <stdio.h>
int main(){
	system (color, 22);
	int num1,num2,num3;
	printf("Enter 1st number: ");
	scanf("%d",&num1);
	
	printf("Enter 2nd number: ");
	scanf("%d",&num2);
	
	printf("Enter 2nd number: ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3){
		printf("num1 is greatest number");
	}
	
	else if (num2>num3 && num2>num1){
		printf("num2 is the greatest number");
	}
	
	else{
		printf("num3 is the greatest number");
	}

return 0;
}
