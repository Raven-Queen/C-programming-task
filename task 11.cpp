#include <stdio.h>
struct book{

	char title[30],author[20],genre[10];
};
main()
{
	struct book b1;
	printf("Please enter the following details: \n\t title of book:");
	scanf("%s",&b1.title);
	printf("\tAuthor:");
	scanf("%s",&b1.author);
	printf("\tGenre:");
	scanf("%s",&b1.genre);
	printf("The details of the book are: \nTitle:%s \nAuthor:%s \nGenre:%s",b1.title,b1.author,b1.genre);
	
}
