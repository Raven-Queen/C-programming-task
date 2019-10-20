#include <stdio.h>
main()
{
	printf("Please enter a temperature in Celcius:");
	float temp,tempf,temg,temh;
	scanf("%f",&temp);
	tempf=temp*9;
	temg=tempf/5;
	temh=temg+32;
	printf("The temperature in farenheit form is:%f",tempf);
}
