#include <stdio.h>

void main()
{
    int num, count=0;
	char e,q;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num !=0)
    {
		if (num&1 ==1 )
		{
			break;
		}
		else
		{
        count++;
        num=num >>1;
		}
    }

    printf("Total number of trailing zeros = %d.", count);

}