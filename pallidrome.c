/*
Student name : Manish Sibanjar
Subject : programming fundamental
Roll no : 21
Lab sheet no : 19
Program : WAP to display the number 
Date : 16 jan,2017
*/

#include<stdio.h>

int main (){
	int n,rev,rem,a;
	printf("Enter any number\n");
	scanf("%d",&n);
	a=n;
	for(rev=0;n>0;  )
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	
	if(a==rev)
	printf("The number is pallidrome\n");
	
	else
	printf("The number is not pallidrome\n");
	
	return 0;
}
