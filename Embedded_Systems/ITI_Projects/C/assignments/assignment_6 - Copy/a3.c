#include <stdio.h>
int x,y,z;// global values
int *p=NULL, *q=NULL,*r=NULL;// global pointers

void main ()
{
printf("Enter three different values \n");
		printf("1st number 'x': \n");
		scanf("%d",&x);
		printf("1st number 'y': \n");
		scanf("%d",&y);
		printf("1st number 'z': \n");
		scanf("%d",&z);
	
	 p=&x;
	 q=&y;
	 r=&z;
	

printf("X:%d\nY:%d\nZ:%d\nP:%d\nQ:%d\nZ:%d\n*P:%d\n*Q:%d\n*R:%d\n ",x,y,z,p,q,r,*p,*q,*r); //Print with labels the values of x, y, z, p, q, r, *p, *q, *r.//

printf(" Swapping pointers,  ");
{
int temp=0;
    temp=*p;
    *p= *r;
	*r= *q;
	*q= *r;
    *r=temp;
}
printf("New Values!\nX:%d\nY:%d\nZ:%d\nP:%d\nQ:%d\nZ:%d\n*P:%d\n*Q:%d\n*R:%d\n ",x,y,z,p,q,r,**p,**q,**r); //Print labels with new the values of x, y, z, p, q, r, *p, *q, *r.//

	
	
}