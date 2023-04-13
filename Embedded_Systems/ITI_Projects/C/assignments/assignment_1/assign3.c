#include <stdio.h>

void main()
{
	
int x,y,sum,sub,anding,oring,xoring;


printf("Please enter a number \n");
scanf("%d",&x);
printf("Please enter a second number \n");
scanf("%d",&y);
sum=x+y;
sub=x-y;
anding= x&y; // anding symbol//
oring= x|y; //oring  symbol
xoring= x^y; //Xoring symbol
printf("The Summation %d \n The Anding %d \n The Oring %d \n The Xoring %d \n",sum,anding,oring,xoring);


}