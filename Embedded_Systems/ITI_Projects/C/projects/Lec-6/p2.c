#include <stdio.h>
#include <stdlib.h>

//lab pointer addition function call//

void sum(int *x, int *y, int *add);

void main()
{
	int numb1, numb2, addition;
	
	int *ptr;
	
	printf("Enter first number : \n");
	scanf("%d",&numb1);
	printf("Enter Second number : \n");
	scanf("%d",&numb1);
	sum(&numb1,&numb2,&addition );

	//*ptr=20;// change value of x
	//(*ptr)+=10; // add value 
	printf("The result:%d",addition);

}

void sum(int *x, int *y, int *add)
{
	*add= (*x)+(*y);
	
}
