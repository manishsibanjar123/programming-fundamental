/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to print fibonacci series
Date : 20 jan,2017
*/

#include<stdio.h>

int main (){
	int a=0,b=1,n=3,c;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	while(n<=8)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		n++;
	}
	
	return 0;
}
		
		
