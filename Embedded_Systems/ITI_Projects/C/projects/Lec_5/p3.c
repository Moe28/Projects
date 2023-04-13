#include <stdio.h>
#include <stdlib.h>

// binary search//
int a[6]={0};
int flag=0;
int result=0;

int binary_search( int size /*size of the array*/, int f /*first*/ , int m/*middle*/, int e/*end*/,int s/*search*/);


void main ()
{
	int first=0,end=0, middle=0, index=0;
	int search=0;
	int size=6;

	int i=0, x=0; // counters for loops
	//int flag=0;
	char e,q;
	
	do {
		

		for (i=0;i<size;i++)
		{
		printf("Enter the %d number: \n",i);
		scanf("%d",&a[i]);

		}
		            // BINARY SEARCH//
					
			
			printf("Enter the value you want to find: \n");
			scanf("%d",&search);
			
			/*first=0;
			end=size-1;
			middle=((first+end)/2);*/
			
			first=0;
			end=size-1;
			middle=((first+end)/2);
			
			while(first<=end)
			{
			
				//binary_search(size /*size of the array*/, first /*first*/, middle/*middle*/,end/*end*/,search/*search*/);
				//printf("%d found at location %d\n", search, middle);
				if (a[middle]==search)
				{
					//index=middle;
					printf("%d found at location %d\n", search, middle);
					flag=1;
					break;
				}
				
				else if(a[middle]> search)
				{
					first=middle+1;
					middle=((first+end)/2);

				}
				else if(a[middle]< search)
				{
					end=middle-1;
					middle=((first+end)/2);

				}
				/*else
					{
						first=middle+1;
						end=middle-1;
						middle=(first+end)/2;
					}*/
			}
			if(flag==0)
			{
				printf("cant find your value");
			}
		
		printf("To end the program press q: ");
		fflush(stdin);
		scanf("%c",&e);
	} while(e!='q');
	
	
	
}

int binary_search( int size /*size of the array*/, int f /*first*/ , int m/*middle*/, int e/*end*/, int s/*search*/)
{
	f=0;
	e=s-1;
	m=(f+e/2);
	while (f<=e)
	{
		f=0;
		e=s-1;
		m=(f+e/2);
			if (a[m]==s)
				{
					flag=1;
					m;
					//printf
					return m; /*middle*/
				}
				
				else if(a[m]> s)
				{
					f=m+1;
				}
				else if(a[m]< s)
				{
					e=m-1;
				}
			/*	else
					{
						f=m+1;
						e=m-1;
						m=(f+e)/2;
						return flag=0;
					}
					*/
	}
			
	
}