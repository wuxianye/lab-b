#define _CRT_SECURE_NO_WARNINGS    //这一行不用加上，防止编译器报错的

#define _USE_MATH_DEFINES //需要放在math前,之后才可以使用M_PI等match定义参数
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