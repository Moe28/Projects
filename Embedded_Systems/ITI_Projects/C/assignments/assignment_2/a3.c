#include <stdio.h>

void main ()
{
	int x,y,z;
	
	printf("Enter number 1:\n");
	scanf("%d",&x);
	printf("Enter number 2:\n");
	scanf("%d",&y);
	printf("Enter number 3:\n");
	scanf("%d",&z);
	if (x==y || x==z|| y==z)
	{
		printf("Enter three different values\n");
	}
	else
	{
		if (x>y && x>z)
	{
		printf("the maximum value is %d\n ", x);
	}
		else if (y>z)
	{
		printf("the maximum value is %d\n ", y);

	}
	
		else
	{
		printf("the maximum value is %d\n",z);
	}
	}
}