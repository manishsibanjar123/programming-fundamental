/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 21
Program : WAP to find first and last digit of any four digit number
Date : 11 jan,2017
*/
#include<stdio.h>

int main(){
	int n,i,last;
	printf("Enter any four digit number\n");
	scanf("%d",&n);
	last=n%10;
	printf("The last digit of the number is : %d\n",last);
	i=1;
	while(i<4)
	{
		n=n/10;
		i++;
	}
	printf("The first digit of the number is : %d\n",n);
	return 0;
}
