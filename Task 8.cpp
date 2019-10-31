#include <stdio.h>
main()
{
	int n=0,i=0,pro;
	printf("Please enter an interger:");
	scanf("%d",&n);
	for (i=1;i<11;i++)
	{
		pro=n*i;
		printf("%d * %d = %d\n",n,i,pro);
	}
}
