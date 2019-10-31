#include <stdio.h>
int cfcon()
{
	int f,c;
	f=(9/5)*c+32;
	printf("Please enter a temperature in celcius:");
	scanf("%d",&c);
	return(c);
}
int fccon()
{
	int far,cel;
	cel=(far-32)*(5/9);
	printf("Please enter a temperature in farenheit:");
	scanf("%d",&far);
	return(far);
}
int main()
{
	int choice,a,b;
	printf("Please select a program to display: \n1.Celcius to Farenheit \n2.Farenheit to celcius \n3.exit");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			b=cfcon();
			printf("Temperature in farenheit is:%d",b);
		break;
		case 2:
			a=fccon();
			printf("Temperature in celcius is:%d",a);
		break;
		case 3:
			printf("");
		break;
		default:printf("Invalid choice");
	}
	//celcius to farenheit
	//farenheit to celcius
	return 0;
}

