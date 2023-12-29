#include <stdio.h>
int main(){
	int your_choice;
    float length_sq, length_rect, breadth_rect, radius_circle;
    float Area_of_square, Area_of_rectangle,Area_of_circle;
    
    printf("Choose any one between square, rectangle and circle to compute's its area, type 0 for square, 1 for rectangle and 2 for circle:- ");
    scanf("%d",&your_choice);
    
    if (your_choice==0){
    printf("Enter the length of square:- ");
    scanf("%f",&length_sq);
    Area_of_square=length_sq*length_sq;
    printf("The area of square is:- %f\n",Area_of_square);
	}
    else if(your_choice==1){
    printf("\nEnter the length and breadth of rectangle:- ");
    scanf("%f %f", &length_rect,&breadth_rect);
    Area_of_rectangle=length_rect*breadth_rect;
    printf("The area of rectangle is:- %f\n", Area_of_rectangle);	
	}
	else{
	printf("\nEnter the radius of circle:- ");
    scanf("%f",&radius_circle);
    Area_of_circle=3.1415*(radius_circle*radius_circle);
    printf("The area of circle:- %f", Area_of_circle);	
	} 
return 0;
}

