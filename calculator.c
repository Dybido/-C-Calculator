#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

void addition(double a, double b);
void subtraction(double a, double b);
void multiply(double a, double b);
void division(double a, double b);

int main(int argc, char *argv[]){
	double a, b;
	char operator;
	printf("Please enter two numbers \n");
	if(scanf("%lf %lf", &a, &b) > 0){
		;
	}
	printf("The numbers you entered are %.1lf %.1lf\n", a, b);

	printf("Please enter an operation \n");
	if(scanf(" %c", &operator) > 0){
		;
	}
	printf("The operation you entered is %c\n", operator);

	if(operator == '+'){
		addition(a, b);
	}else if(operator == '-'){
		subtraction(a, b);
	}else if(operator == '*'){
		multiply(a, b);
	}else if(operator == '/'){
		division(a, b);
	}else{
		printf("Operation is unknown \n");
		exit(0);
	}
	return 0;
}

void addition(double a, double b){
	double c = a + b;
	printf("The result of %.1lf + %.1lf is %.1lf\n", a, b, c);
}

void subtraction(double a, double b){
	double c = a - b;
	printf("The result of %.1lf - %.1lf is %.1lf\n", a, b, c);
}

void multiply(double a, double b){
	double c = a * b;
	printf("The result of %.1lf * %.1lf is %.1lf\n", a, b, c);
}

void division(double a, double b){
	if(b == 0){
		printf("Division by zero, world's end\n");
		exit(0);
	}
	double c = a / b;

	printf("The result of %.1lf / %.1lf is %.1lf\n", a, b, c); 
}