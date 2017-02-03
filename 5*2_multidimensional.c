/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 25
Program : WAP to declare and print multidimensional array
Date : 3 feb,2017
*/

#include<stdio.h>

int main(){
    int array [5][2],i,j;
    for(i=0;i<5;i++)
      {
	   for(j=0;j<2;j++)
	   {
		   printf("Enter the number:");
		   scanf("%d",& array[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			 printf("%d\t",array[i][j]);
		 }
	   printf("\n");
   }
   return 0;
}
