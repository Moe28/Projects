#include <stdio.h>

void main()

{
int ID;

printf("Enter your ID\n");
scanf("%d",&ID);

switch(ID)
{
case(1234): 
printf("Ahmed\n"); break;
case(5678) :
printf("Youssef\n"); break;
case(1145) :
printf("Mena\n"); break;
default:
printf("Wrong ID\n");
}
}