/*
Student Name : Manish sibanjar
Subject : Programming fundamental
Lab sheet no : 23
Program : WAP to find area of circle using function
Date : 25 jan,2017
*/

#include<stdio.h>
#define PI 3.14
void area (int a);

int main(){
	int r;
	printf("Enter the radius of a circle\n");
	scanf("%d",&r);
	area(r);
	return 0;
}

void area(int a){
	int area1;
	area1=PI*a*a;
	printf("The area of the circle is : %d",area1);
}
