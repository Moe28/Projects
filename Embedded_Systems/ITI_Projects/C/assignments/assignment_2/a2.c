#include <stdio.h>

void main()
{
	int pwd;
	char ID;
	printf("Enter your User ID\n");
	scanf("%c",&ID);
	
	switch (ID)
	{
		case'M':// case1//
		{
	
			printf("Enter your password\n");
			scanf("%d",&pwd);
				switch(pwd)
				{
					case(1234): //case1 for pwd//
					
						printf("Correct password\n");
						printf("Your user name is: Shehata331\n"); 
						break;
					
					default:
					printf("Incorrect password\n");
				}
		}break;

		
		case 'B': //case 2//
		{
		
			printf("Enter your password\n");
			scanf("%d",&pwd);
				switch(pwd)
				{
					case(321): //case2 for pwd//
					
						printf("Correct password\n");
						printf("Your user name is: Shehata341\n"); 
						break;
					
					default:
					printf("Incorrect password \n");
					
			
				}
		}break;
		
		default:
		{printf("Incorrect ID\n");}
	}
}