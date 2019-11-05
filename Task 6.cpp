#include <stdio.h>
#include <math.h>

main()
{
	int num, cp = 0, count = 0, sum = 0;
		
	printf("Please enter a number:");
	scanf("%d",&num);
	
	cp = num;
	while(cp)
	{
		cp = cp / 10;
	  	count++;	
	}
	
	cp = num;
	for( int i = 0; i < count; i++)
	{
		sum = sum + pow((cp%10),count); 
		cp = cp / 10;	
	}
	
	if( sum == num )
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}	
}
