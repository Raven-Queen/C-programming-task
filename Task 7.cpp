#include <stdio.h>
main()
{
	int count,n;
	char origin[10],reverse[10];
	int i,j;
	n=count-1;
	printf("Please enter a string:");
	scanf("%s",&origin);
	//initialse variable
	//count the number of input items
	i=0;
	while(origin[i]!='\0')
	{
		count++;
		i++;
		for(j=n;j>=0;j--)
		{
			origin[i]=reverse[j];
		}
	}
	printf("%s",reverse);
	
	//reverse the string

	//condition,if the original and reverse are same
	if(origin==reverse)
	{
		printf{"This word is palindrome"};
	}
	else
	{
		printf("The wword is not a palindrome");
	}
}
