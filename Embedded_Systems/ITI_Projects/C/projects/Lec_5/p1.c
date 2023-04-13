#include <stdio.h>
#include <stdlib.h>
//lab1--> lec5////
void main()
{
int i; //counter
int a[10]={0};
char dec,e;

do
	{
		printf("You will enter 10 numbers starting now\n");
			for(i=0;i<10;i++)
			{
				printf(" Enter the %d number:",i);
				scanf("%d",&a[i]);

			}

		printf("we will reverse them now\n");

			for(i=10;i>=0;--i)
			{
				printf(" The reverse [%d]: %d \n ",i,a[i]);

			}

			printf("To exit press e: ");
				fflush(stdin);

			scanf("%c",&dec);
	
	}
	while(dec != 'e');

}