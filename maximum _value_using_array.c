/*
Student Name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no :23
Program : WAP to find maximum value among 10 elements
Date : 1 feb,2017
*/

#include<stdio.h>

int main(){
	int num[10],i,max=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(max<num[i])
		max=num[i];
	}
	printf("The maximum value is : %d",max);
	return 0;
}
