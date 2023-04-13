#include <stdio.h>
void main ()
{
int hr_rate=50;
float salary;
int working_hrs;
double deduct=0.9;

printf("Please enter your working hours \n");
scanf("%d",&working_hrs);

if (working_hrs < 40 && working_hrs>10)
{
	salary=hr_rate*working_hrs*deduct;
	printf("your is salary is %0.1f",salary);
}
else if (working_hrs <10 )
{
		printf("YOU ARE FIRED");

}	

else 

{
	salary=hr_rate*working_hrs;
	printf("your is salary is:%0.1f",salary);
}	

}
