#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
task_one();
task_two();
homework();
int main(){
	task_one();
	task_two();
	homework();
}
int task_one() {
	puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
	int years;
	puts("Enter the year:");
	scanf_s("%d", &years);
	if (years % 4 == 0) {
		printf("The year %d is a leap year \n", years);
	}
	else {
		printf("The year %d is not a leap year \n", years);
	}
	return 0;
}
int task_two(){
	puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
	double x;
	double f;
	puts("Enter x:");
	scanf_s("%lf", &x);
	f = x <= 7 ? (3 * x) - 9 : (1 / (x * x)) - 4;
	printf("F = %lf\n", f);
	return 0;
}
int homework() {
	puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
	int cop;          
	int rub;
	double fcop;      
    puts("Enter the kopecks:");
	scanf_s("%d", &cop);    
	if (cop >= 100) {
		rub = cop / 100;           
		cop = cop % 100;          
	}
	else {
		rub = 0;
	}
   printf("%d rub %d kop\n", rub, cop);
	return 0;
}