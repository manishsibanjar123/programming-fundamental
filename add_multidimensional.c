/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 25
Program : WAP to add two matrices
Date : 3 feb,2017
*/

#include<stdio.h>
int main (){
	int a[2][2],b[2][2],c[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the number:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the number:");
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<2;i++)
	     {
		for(j=0;j<2;j++)
		  {
			  c[i][j]=a[i][j]+b[i][j];
			 }
			  
			}
			printf("The sum of the matrices are\n");
			for(i=0;i<2;i++)
	         {
		      for(j=0;j<2;j++)
		       {
				   
				   printf("%d\t",c[i][j]);
			   }
			   printf("\n");
		   }
	return 0;
}
