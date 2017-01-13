/*
Student name : Manish Sibanjar
Subject : programming fundamental
Roll no : 21
Lab sheet no : 18
program : WAP to calculate sum of digit using for loop
Date : 13 jan,2017
*/

#include<stdio.h>

int main (){
	int n,sum,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	for(sum=0;n>0; )
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
		
	}
	printf("The sum of a digit is : %d",sum);
		
	return 0;
	}
