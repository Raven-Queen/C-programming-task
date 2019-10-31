#include<stdio.h>
main()
{
int i,j,count,count2;
	char firstname[10];
	char lastname[10];
	char fullname[20];
	printf("Please enter your first name:");
	scanf("%s",&firstname);
	printf("Please enter your Last name:");
	scanf("%s",&lastname);
	for(i=0;firstname[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;lastname[i]!='\0';i++)
	{
		count2++;
	}
		for(i = 0; firstname[i] != '\0'; ++i);
    for(j = 0; lastname[j] != '\0'; ++j, ++i)
    {
        firstname[i] = lastname[j];
    }
    firstname[i] = '\0';
    printf("full name is: %s", fullname);
    return 0;
}
