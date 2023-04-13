#include <stdio.h>
#include <stdlib.h>

//get the maximum number function//
int get_max(int Numb_1, int Numb_2);

void main()
{
	
	int x,y,result;
	printf("Please enter number1: ");
	scanf("%d",&x);
	printf("Please enter number2: ");
	scanf("%d",&y);
	result=get_max(x,y);
	printf("%d is the Maximum number",result);

	
	
}

int get_max(int Numb_1, int Numb_2)
{
	int max;
	max= Numb_1> Numb_2 ? Numb_1:Numb_2;
	
	return max;
	
}
 