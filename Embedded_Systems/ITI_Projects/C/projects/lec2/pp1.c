#include <stdio.h>
#include <stdlib.h>

void main()

{
/*int i=0,multi=0;
printf("Enter the answer of 3*4 \n");

while(multi!=3*4)
{

    scanf("%d",&multi);

}
	printf("Congrats \n");
*/

int Number_table, i=0, dec;
do
{
			system("cls");
		printf ("Enter the multiplication number: ");
		scanf("%d",&Number_table);
	
		for (i=0; i<12;i++)
		{
			printf("%d * %d = %d \n",Number_table,i,Number_table*i);
		}
	printf ("Enter 1 to exit :");
	scanf("%d",&dec);
}
while(dec!=1);
}