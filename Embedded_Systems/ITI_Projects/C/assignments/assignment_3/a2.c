#include <stdio.h>
#include <stdlib.h>

void main ()

{
	int user, ID, pwd;
	int i=1, x=0; // counters
	
	printf("Please unter your ID:");
	scanf("%d",&ID);
	
	switch (ID)
	{
		case (1234):
		{		printf("Hi Ahmed! Please enter your password:");

				do
				{
				scanf("%d",&pwd);
				if(pwd!=7788)
				{
				i++;
			(i>=4)? printf("No more tries"):printf("Please try again\np.s:you still have %d tries\n",4-i);				

			
				}
				else if(pwd==7788)
				{
					printf("welcome home");
					i=4;
				}
				else
				{
					i=4;
				}
				}while (i<4);
				
		break;
		}
		case (5678):
		{
				printf("Hi Amr! Please enter your password:");

				do
				{
				scanf("%d",&pwd);
				if(pwd!=5566)
				{
				
				i++;
			   (i>=4)? printf("No more tries"):printf("Please try again\n p.s:you still have %d tries\n",4-i);				

				}
				else if(pwd==5566)
				{
					printf("Welcome home");
					i=4;
				}
				else
				{
					printf("No more tries");
					i=4;
				}
				}while (i<4);
		break;
		}
		case (9870):
		printf("Hi Wael! Please enter your password:");
		{
				do
				{
				
				scanf("%d",&pwd);
				
				if(pwd!=1122)
				{
				 i++;
				(i>=4)? printf("No more tries"):printf("Please try again\n p.s:you still have %d tries\n",4-i);				

				}
				else if(pwd==1122)
				{
					printf("Welcome home");
					i=4;
				}
				
				else
				{
					i=4;
				}
				}while (i<4);
		break;
		}
		default:
		printf("You're not registered");
	
	}
}