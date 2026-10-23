#include<stdio.h>
int main (void)
{
	float bmi,wt_lb,ht_in;

	printf("Enter your weight\n");
	scanf("%f",&wt_lb);

	printf("Enter your height\n");
	scanf("%f",&ht_in);

	bmi= (wt_lb/(ht_in * ht_in))* 703.0;

	if (bmi < 18.5)
	{
		printf("Underweight\n");
	}
	else if ( bmi >= 18.5 && bmi < 25.0)
	{
		printf("Normal weight\n");
	}
	else if ( bmi >= 25.0 && bmi <30.0 )
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obese\n");
	}
	
	return 0;
}

