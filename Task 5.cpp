#include<stdio.h>

main()
{
	//-------------------var
	char strg[10];
	char revstrg[10];
	int i=0,count;
	
	//------------------string from user
	printf("Please enter a string:");
	gets(strg);
	
	for(i=0;strg[i]!='\0';i++)
	{
		count++;
	}
	
	for(i=0;i<count;i++)
	{
		revstrg[i]=	strg[count-1-i];
		printf("%c",revstrg[i]);
	}
}
