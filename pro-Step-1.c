#include<stdio.h>
main()
{
	int per;
	printf("Enter Your per:");
	scanf("%d",&per);
	
	char grade=(per>=90)?'A':(per>=80)?'B':(per>=70)?'C':(per>=60)?'D':'F';
	
	printf("Your grade is %c\n",grade);
	
}