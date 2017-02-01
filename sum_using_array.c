/*
Student Name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no :23
Program : WAP to find sum of 10 elements
Date : 1 feb,2017
*/

#include<stdio.h>

int main (){
	int num[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum + num[i];
	}
	printf("The sum of the number is : %d",sum);
	return 0;
}
	
