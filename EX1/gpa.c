#include<stdio.h>
int main(void)
{
	float gpa;

	printf("Enter your gpa: ");
	scanf("%f",&gpa);

	if (gpa > 0.0 && gpa < 4.0)
	{ 
		if ( gpa > 0.0 && gpa < 1.0)
		{ 
			printf("Failed semester -- Registration suspended\n");
		}
		else if ( gpa > 0.99 && gpa < 2.0)
		{
			printf("On probation for next semester\n");
		}
		else if ( gpa > 1.99 && gpa < 3)
		{
			//NO MESSAGE
		}
		else if ( gpa > 2.99 && gpa <3.50)
		{
			printf("Deam's list for semester\n");
		}
		else if ( gpa > 3.49 && gpa <= 4.0)
		{
			printf("Highest honors for semester\n");
		}
		else 
		{ 
			printf("invalid GPA ");
		}
	}
	
	return 0;
}
