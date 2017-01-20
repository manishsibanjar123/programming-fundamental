/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to print fibonacci series
Date : 20 jan,2017
*/

#include<stdio.h>

int main (){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>j)
			{
			printf(" ");
		    
		    }
		    else
		    {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
