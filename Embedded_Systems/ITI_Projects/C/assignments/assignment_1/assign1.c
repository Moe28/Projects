#include <stdio.h>

void main ()
{
int i,space,x=0,rows=7;
printf("Your Pyramid \n");

for(i=1;i <= rows;++i) /*the big loop for the pyramid*/
{
for (space=1;space <= rows-i; ++space) /* the 2nd loop for the space variable*/
{
x=0;
printf("  ");
}

for (x=0;x !=2*i-1;++x) /* the 3rd loop for astress sign*/
{
	printf("* ");

}
printf("\n");

}
}