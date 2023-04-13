#include <stdio.h>
//#include <stdlib.h>
int x=1,y=0,z=0;// global values
int *a=NULL, *b=NULL,*c=NULL;// global pointers
void func( int *p, int *q, int *r);


//void swap(int **p, int **q, int **r);

void main ()
{

	
	func(a,b,c);
	printf("Address of a %d\n",&a);
	printf("The value of a %d",a);

	
	
	//swap(&p,&q,&r);

}

void func( int *p, int *q, int *r)
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
	
/***p=&p;
**q=&q;
**r=&r;*/

printf("X:%d\nY:%d\nZ:%d\nP:%d\nQ:%d\nZ:%d\n*P:%d\n*Q:%d\n*R:%d\n",x,y,z,p,q,r,*p,*q,*r); //Print with labels the values of x, y, z, p, q, r, *p, *q, *r.//
printf("Swapping pointers\n");
{
int temp=0;
	temp=*p;
    *p= *r;
	*r= *q;
	*q= *r;
    *r=temp;
}
printf("New Values!\nX:%d\nY:%d\nZ:%d\nP:%d\nQ:%d\nZ:%d\n*P:%d\n*Q:%d\n*R:%d\n ",x,y,z,&p,&q,&r,*p,*q,*r); //Print labels with new the values of x, y, z, p, q, r, *p, *q, *r.//


}
	//b- Print the message: Swapping pointers.//
	//Execute the swap code: r = p; p = q; q = r;//
/*void swap(int **p, int **q, int **r)
{
	
printf(" Swapping pointers,  ");
{
int temp=0;
	temp=*p;
    *p= *r;
	*r= *q;
	*q= *r;
    *r=temp;
}
printf("New Values!\nX:%d\nY:%d\nZ:%d\nP:%d\nQ:%d\nZ:%d\n*P:%d\n*Q:%d\n*R:%d\n ",x,y,z,p,q,r,*p,*q,*r); //Print labels with new the values of x, y, z, p, q, r, *p, *q, *r.//

	
}*/
