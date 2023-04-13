#include <stdio.h>
//#include <stdlib.h>
int sum(int numb1,int numb2);
int sub(int numb1,int numb2);
int multi(int numb1,int numb2);
float div(float numb1,float numb2);



void main ()
{
	int a,b;
	printf("Enter two numbers to do basic math\nFirst number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	int x=sum(a,b);
	int y=sub(a,b);
	int z=multi(a,b);
	float i=div(a,b);
	printf("Here's the basic math addition:%d\nsubtraction:%d\nmultiplication:%d\ndivision: %0.1f\n",x,y,z,i);
	
	
	
}

int sum(int numb1,int numb2)
{
	int addition;
	
	addition= numb1+ numb2;
	
	return addition;
	
}
int sub(int numb1,int numb2)
{
	int subtraction;
	
	subtraction= numb1- numb2;
	
	return subtraction;
	
}
int multi(int numb1,int numb2)
{
	int multipl;
	
	multipl= numb1*numb2;
	
	return multipl;
	
}
float div(float numb1,float numb2)
{
	float division;
	
	division= numb1/numb2;
	
	return division;
	
}