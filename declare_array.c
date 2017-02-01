/*
Student Name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no :23
Program : WAP to declare array and ask value from user
Date : 1 feb,2017
*/

#include<stdio.h>

int main(){
	int num[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("num[%d] contains %d data\n",i,num[i]);
	}
	return 0;
}
