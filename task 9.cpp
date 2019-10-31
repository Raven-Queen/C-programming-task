#include<stdio.h>
main()
{
	int in,i,pro;
	printf("Please enter an integer:");
	scanf("%d",&in);
	for(i=in;i>0;i--)
	{
		pro=pro*i;
	}
	printf("The factorial is:%d",pro);
}
