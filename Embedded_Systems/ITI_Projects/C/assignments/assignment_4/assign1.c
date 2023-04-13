#include <stdio.h>
#include <stdlib.h>

//get the maximum number function//	
int get_max(int Numb_1, int Numb_2,int Numb_3, int Numb_4);
int get_min(int Numb_1, int Numb_2,int Numb_3, int Numb_4);
int Numb_1, Numb_2,Numb_3,Numb_4;// global var


void main()
{
	
	printf("Please enter number1: ");
	scanf("%d",&Numb_1);
	printf("Please enter number2: ");
	scanf("%d",&Numb_2);
	printf("Please enter number3: ");
	scanf("%d",&Numb_3);
	printf("Please enter number4: ");
	scanf("%d",&Numb_4);
	int Maximum=get_max(Numb_1,Numb_2,Numb_3,Numb_4);
	int Minimum=get_min(Numb_1,Numb_2,Numb_3,Numb_4);
	
	printf("The Maximum number is: %d\nThe Minimum number is: %d ",Maximum,Minimum);

	
	
}
 
int get_max(int Numb_1, int Numb_2,int Numb_3, int Numb_4)
{
	int max_1, max_2;
	if (Numb_1>Numb_2 && Numb_1>Numb_3 && Numb_1>Numb_4)
	{
		max_1= Numb_1;
			
	}
	else if(Numb_2>Numb_3 && Numb_2>Numb_4)
	{
		max_1=Numb_2;
	}
	else if (Numb_3> Numb_4)
	{
		max_1=Numb_3;
	}
	else 
	{
		max_1=Numb_4;
	}
	
	
}

int get_min(int Numb_1, int Numb_2,int Numb_3, int Numb_4)
{
	int min_1, min_2;
	if (Numb_1<Numb_2 && Numb_1<Numb_3 && Numb_1<Numb_4)
	{
		min_1= Numb_1;
			
	}
	else if(Numb_2<Numb_3 && Numb_2<Numb_4)
	{
		min_1=Numb_2;
	}
	else if (Numb_3< Numb_4)
	{
		min_1=Numb_3;
	}
	else 
	{
		min_1=Numb_4;
	}
	
	
}
