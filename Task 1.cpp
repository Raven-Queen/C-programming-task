#include <stdio.h>
main()
{
	char n[10];
	int phone=0;
	char a[200];
	printf("Please enter your details accordingly:\n");
	printf ("Name:");
	scanf("%s", &n);
	printf("Phone number:");
	scanf("%d", &phone);
	printf("Address:");
	scanf("%s", &a);
	printf("Your details are: \n\nName:%s \nPhone number:%d \nAddress:%s \nThankyou",n,phone,a);
}
