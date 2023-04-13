#include <stdio.h>

void main()
//if statement//
{
	int grade;
	
	printf("Enter your grade\n");
	scanf("%d",&grade);
	
	if (grade >=85)
	{
		printf("Excellent\n");
	}
	else if (grade <85 && grade >=75 )
	{
		printf("Very Good\n");
	}
	else if (grade <75 && grade >=65)
	{
		printf("Good\n");
	}
	else if (grade <65 && grade >= 50)
	{
		printf("Normal\n");
	}
	else 
	{
		printf("failed\n");
	}
}