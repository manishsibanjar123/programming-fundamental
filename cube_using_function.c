/*
Student name : Manish Sibanjar
Subject : programming fundamental
Roll no : 21
Lab sheet no : 20
Program : WAP to find the cube of any number using function
Date : 18 jan,2017
*/

#include<stdio.h>
void cube();
int main (){
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	cube(n);
	return 0;
}
	void cube(int n){
		float result;
	result=n*n*n;
	printf("The cube of the number is : %f",result);
	
}
