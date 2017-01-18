/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Roll no : 21
Lab sheet no : 20
Program :WAP to find the area of circle using function
Date : 18 jan ,2017
*/

#include<stdio.h>
void area(int r);
int main (){
	int r;
	printf("Enter the radius of circle\n");
	scanf("%d",&r);
	area(r);
	return 0;
}
	void area(int r){
		float result;
	result=(3.14*r*r);
	printf("The area of the circle is :%f",result);
	}
