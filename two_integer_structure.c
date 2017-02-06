/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 26
Program : WAP to create a structure with two integer number
Date : 6 feb,2017
*/

#include<stdio.h>
struct addition {
	int a;
	int b;
};
int main(){
	int result;
	struct addition add;
	printf("Enter the first number\n");
	scanf("%d",&add.a);
	printf("Enter the second number\n");
	scanf("%d",&add.b);
	result=add.a+add.b;
	printf("The sum of two numbers are : %d",result);
	return 0;
}
