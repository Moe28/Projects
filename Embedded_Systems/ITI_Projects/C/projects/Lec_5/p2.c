#include <stdio.h>
//#include <stdlib.h>
//lab2----> lec5////
//bubbling//
//void swap(double *array, int a, int b);
void swap(int a, int b);
int array[6]={0};

void main ()
{
	int i; // counter for entering values in array and the big loop for bubbling process//
	// array
	int size=6;
	int flag=0;
	int temp=0;
	int x=0;//counter for the 2nd loop in the bubbling process// 
	char dec,e;//exit the program//
	
	do{
		// Enter a size "6" numbers in array by user//
		for(i=0;i<6;i++)
			{
				printf(" Enter the %d number:",i);
				scanf("%d",&array[i]);

			}
			
			//bubbling process//
		for (i=0;i<size;i++)            
	
		{
						
				for (x=0;x<size-1-i;x++) 
				{
					if (array[x]>array[x+1])
					{
						swap( x, (x+1));
						/*temp=a[x];
						a[x]=a[x+1];
						a[x+1]=temp;*/
						flag=1;
					
					 }
				}
					
				
		}
			
			if (flag==0)
			{
				printf("The array is sorted");
				break;
			}

		//display array//
		for(i=0;i<size;i++)
		{
			printf("The Number= %d\n",array[i]);
			
		}	
				printf("To exit press e: ");
				fflush(stdin);
				scanf("%c",&dec);	
				
				}while(dec!='e' );
	
}


/*void swap(double *array, int a, int b)
   {
   double temp = *array[a]; /* <- it's a double 
   *array[a] = *array[b];
   *array[b] = temp;
   }*/
   
void swap(int a, int b )
{
   int temp=array[a];
	array[a]=array[b];
	array[b]=temp;
	
}

   
