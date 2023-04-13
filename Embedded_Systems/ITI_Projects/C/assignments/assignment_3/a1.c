#include <stdio.h>
#include <stdlib.h> 

void main()
{
	int numb_1, numb_2;
	int i;
	int end;
	do
	{			system("cls");

		printf("please enter two numbers for a summation procedure\n");
		printf("First Number: \n");
		scanf("%d",&numb_1);
		printf("Second Number: \n");
		scanf("%d",&numb_2);
		printf("The result is = %d\n", numb_1+numb_2);
		printf("Enter 1 to exit\n");
		scanf("%d",&end);
		
	}
while(end != 1);
	printf("Hope you enjoyed");
}