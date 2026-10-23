#include<stdio.h>
int main(void)
{
	float num;
	int i;
	
	do{
		
		printf("Please enter a positive number:\n");
		scanf("%f",&num);
	}while(num <=  0);

	printf("You entered: %f\n",num);

	return 0;
}



