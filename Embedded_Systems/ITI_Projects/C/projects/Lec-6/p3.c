#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[5]={1};
	int *ptr=NULL;
	printf(" value %d \n intial address %d\n a[1] address %d",*arr, arr,arr+1);
	printf("The address of %d",&ptr);
}

//*arr hayprint the value 
//arr hayprint the address 