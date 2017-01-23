/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 22
Program : WAP to check prime no. or not
Date : 23 jan,2017
*/

#include<stdio.h>

int main(){
	int n,i,count=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	{
		printf("The number is a prime number\n");
	}
	else
	{
		printf("The number is not a prime number\n");
	}
	return 0;
}
		
		
