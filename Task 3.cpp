#include <stdio.h>
main()
{
	float maths,sci,eng,sum,avg;
	printf("Please enter your marks in the following subjects: \n");
	scanf("%f",&maths);
	scanf("%f",&sci);
	scanf("%f",&eng);
	sum=maths+sci+eng;
	avg=sum/3;
	printf("======================== \nSum of your marks is=%f \nAverage marks=%f",sum,avg);
}
