/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 14
Roll no : 21
Program : WAP to print all natural number using while and do while loop
Date : 9 Jan,2017
*/

#include<stdio.h>

int main(){
	int n,i=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d\n",i);
		i--;
	}
	return 0;
}
