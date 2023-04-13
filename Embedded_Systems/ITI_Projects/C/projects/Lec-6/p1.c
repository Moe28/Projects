#include <stdio.h>
#include <stdlib.h>


void main()
{
	int x=10;
	int *ptr;
	
	printf("X before the change:%d\n",x);
	ptr=&x;
	*ptr=20;
	//(*ptr)+=10; // add value 
	printf("X after the change:%d",x);

}