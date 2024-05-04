#define _USE_MATH_DEFINES //It needs to be placed before match before defining parameters using matches such as M6PI
#include <math.h>
#include <stdio.h>
int main(void)
{
	double height = 0;
	double volumne = 0;
	printf("Enter height: ");
	scanf("%lf", &height);
	
	// Your code below here
	
	const double radius = 2.2;
	volumne = M_PI * radius * radius * abs(height);
	
	

	// Do not edit below here
	printf("Volume:%.2f", volumne);

	return 0;
}