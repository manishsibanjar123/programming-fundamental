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
	int n,j,i;
	printf("Enter the row\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
