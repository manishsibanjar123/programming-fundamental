/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 26
Program : WAP to create a structure to multiply three float value using function
Date : 6 feb,2017
*/

#include<stdio.h>

struct multiplication{
	float a;
	float b;
	float c;
	
};
void multiply(float x,float y,float z);
int main(){
	struct multiplication mult;
	printf("Enter the first number\n");
	scanf("%f",&mult.a);
	printf("Enter the second number\n");
	scanf("%f",&mult.b);
	printf("Enter the third number\n");
	scanf("%f",&mult.c);
	multiply(mult.a,mult.b,mult.c);
	return 0;
}
void multiply(float x,float y,float z){
	float result=x*y*z;
	printf("The multiplication of the numbers are : %f",result);
}
