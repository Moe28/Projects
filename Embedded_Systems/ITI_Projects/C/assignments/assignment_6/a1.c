#include <stdio.h>
#include <stdlib.h>
int arr[10]={0};
//int *ptr=&arr[10];
void bubble_func (int *ptr);

void main ()
{
	bubble_func(arr);
	
}

void bubble_func(int *ptr)
{
	int i;// counter for loop1 &2
	char dec,e;// to exit the program	
		do
		{
				printf("You will enter 10 numbers starting now\n");
				for(i=0;i<10;i++)
				{
					printf(" Enter the %d number:",i);
					scanf("%d",&arr[i]);

				}

			printf("we will reverse them now\n");

				for(i=10;i>0;--i)
				{
					printf(" The reverse [%d]: %d \n ",i,arr[i]);

				}

				printf("To exit press e: ");
					fflush(stdin);
					scanf("%c",&dec);
		
		}
		while(dec != 'e');

}