#include <stdio.h>
int main()
{
    int i,l,n;
    float arr[100];
    for(i=0;arr[i]!='\0';i++)
    {
    	l++;
	}
	n=l-1;
    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);
     for(i = 1; i < n; ++i)
    {
       if(arr[0] > arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);
    return 0;
}

