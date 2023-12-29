#include <stdio.h>
#include <string.h>
int main (){
	char str[40];
	char* rev_str;
	printf("Enter a string that you want to reverse:- ");
	scanf("%s",&str);
	
	rev_str=strrev(str);
	printf("The reversed string is %s", rev_str);
	return 0;
	
}
