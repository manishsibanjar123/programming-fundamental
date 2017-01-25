/*
Student Name : Manish sibanjar
Subject : Programming fundamental
Lab sheet no : 23
Program : WAP to find odd or even  using function
Date : 25 jan,2017
*/

#include<stdio.h>
int num(int b);

int main(){
	int b,result;
	printf("Enter any number\n");
	scanf("%d",&b);
	result=num(b);
	if(result==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
	int num(int b){
		if(b%2==0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	 }
