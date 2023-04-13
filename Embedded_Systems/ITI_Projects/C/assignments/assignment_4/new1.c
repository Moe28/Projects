#include<stdio.h>

#include <stdio.h>
//#include <stdlib.h>
int sum(int numb1,int numb2);
int sub(int numb1,int numb2);
int multi(int numb1,int numb2);
float div(float numb1,float numb2);
int And(int numb1, int numb2);// reserved words change name 
/*int or(int numb1, int numb2); // // reserved words change name   notice the blue colour 
int xor(int numb1, int numb2);// reserved words change name */
int reminder(int numb1, int numb2);
int increment(int numb1);
int decrement(int numb1);
//int not(int numb1); //RESERVED WORD


int numb1,numb2,result;

void main ()
{
int ID;
char f,q;


	do
	{
		printf("Welcome to the new calc!\n");
		printf("Now enter the operation ID: ");
		scanf("%d",&ID);
		
		switch(ID)
		{
			case (1)://add//
			{
				printf("Please enter two operands for summation process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= sum(numb1,numb2);
					printf("Here you go: %d ",result);


				
				
				
			}break;
			case (2): //sub//
			{
				printf("Please enter two operantds for subtraction process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= sub(numb1,numb2);
					printf("Here you go: %d \n",result);


			}break;
			case (3): //multi//
			{
				printf("Please enter two operands for multiplication process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= multi(numb1,numb2);
					printf("Here you go: %d \n",result);

				
			}break;
			case (4)://divide//
			{
			printf("Please enter two operands for division process\n");
				printf("Enter First Number: ");
				scanf("%f",&numb1);
				printf("Enter Second Number: ");
				scanf("%f",&numb2);
					//result= (float)div(numb1,numb2);
					printf("Here you go: %f \n",div(numb1,numb2));
	
			}break;
			case (5)://And//
			{
				printf("Please enter two operands for AND process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= And(numb1,numb2);//// we use  for AND not "and "
					printf("Here you go: %d \n",result);

				
			}break;
			/*case (6)://OR//
			{
				printf("Please enter two operands for OR process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= or(numb1,numb2);
					printf("Here you go: %d \n",result);

				
			}break;
			case (7)://Not//
			{
				printf("Please enter One operand for NOT process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
	
					result= not(numb1);
					printf("Here you go: %d \n",result);

			}break;
			case (8)://Xor//
			{
				printf("Please enter two operands for XOR process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= xor(numb1,numb2);
					printf("Here you go: %d \n",result);

				
			}break;*/
			case (9): // reminder//
			{
				printf("Please enter two operands for REMINDER process\n");
				printf("Enter First Number: ");
				scanf("%d",&numb1);
				printf("Enter Second Number: ");
				scanf("%d",&numb2);
					result= reminder(numb1,numb2);
					printf("Here you go: %d \n ",result);

				
			}break;
			case (10): //increment//
			{
				printf("Please enter one operand for INCREMENT process\n");
				printf("Enter First Number: \n");
				scanf("%d",&numb1);
				
					result= increment(numb1);
					printf("Here you go: %d \n",result);
				
			}break;
			case (11):  //decrement//
			{
				printf("Please enter one operand for DECREMENT process\n");
				printf("Enter First Number: \n");
				scanf("%d",&numb1);
				
					result= decrement(numb1);
					printf("Here you go: %d \n",result);
				
			}break;
			default:
			{
				printf("Not available");
			}
		}
		
	printf("To Exit press Q:");
	fflush(stdin);
	scanf("%c",&f);

	} while(f!='q');
	
		printf("Thank you!");

}

int sum(int numb1,int numb2)
{
	//int addition;
	
	//addition= numb1+ numb2;
	
	return numb1+ numb2;
	
}
int sub(int numb1,int numb2)
{
	//int subtraction;
	
	//subtraction= numb1- numb2;
	
	return numb1- numb2;
	
}
int multi(int numb1,int numb2)
{
	//int multipl;
	
	//multipl= numb1*numb2;
	
	return numb1*numb2;
	
}
float div(float numb1,float numb2)
{
	//float division;
	
	//division= numb1/numb2;
	
	return numb1/numb2;
	
}
int And(int numb1,int numb2)
{
	//int and1;
	
	//and1= numb1&numb2;
	
	return numb1&numb2;
	
}
/*int or(int numb1,int numb2)
{
	//int or1;
	
	//or1= numb1| numb2;
	
	return numb1| numb2;
	
}*/
int reminder(int numb1,int numb2)
{
	//int reminder1;
	
	//reminder1= numb1%numb2;
	
	return numb1%numb2;
	
}
/*int xor(int numb1, int numb2)
{
	//int xor1;
	
	//xor1= numb1^numb2 ;
	
	return numb1^numb2;
}*/
int increment(int numb1)
{
	
	//int inc1;
	
	//inc1= ++numb1;

	
	return ++numb1;
	
}

int decrement(int numb1)
{
	//int dec1;
	
	//dec1= --numb1;

	
	return --numb1;
	
}
/*int not(int numb1)
{
	int not1;
	
	not1=!numb1;

	
	return not1;
	
}*/