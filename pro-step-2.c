#include<stdio.h>
main()
{
	int per;
	printf("Enter Your per:");
	scanf("%d",&per);
	
	char grade=(per>=90)?'A':(per>=80)?'B':(per>=70)?'C':(per>=60)?'D':'F';
	
	printf("Your grade is %c.",grade);
	
	switch(grade){
		case 'A':
			      printf("Excellent work!.");
			      break;
		case 'B':
			      printf("Well done.");
			      break;
		case 'C':
			      printf("Good job.");
			      break;
		case 'D':
			      printf("You passed, but you could do better.");
			      break;
		case 'F':
			      printf("Sorry, you failed.");
			      break;
		default:
		         printf("invalid grade\n");	  		  	      
	}
	
}
