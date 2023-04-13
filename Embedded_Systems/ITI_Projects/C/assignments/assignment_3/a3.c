
#include<stdio.h>

void main()
{

int i,rows=0	, k, space;
printf("The pyramid \n");
printf("please enter the number of rows:");
scanf("%d",&rows);


for (i = 1; i < rows+1; ++i) 
	{
	  k = 0;
      for (space = 0; space <= rows-i ; ++space) 
	  {
         printf("  ");
      }
      while (k != 2 * i - 1) 
	  {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   
 }