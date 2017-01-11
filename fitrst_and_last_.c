/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 21
Program : WAP to find first and last digit of any four digit number
Date : 11 jan,2017
*/

#include<stdio.h>

int main (){
	int n,i,last;
printf("Enter any four digit number\n");
scanf("%d",&n);
last=n%10;
printf("The last digit of the number is :%d\n",last);

   for(i=1;i<4;i++)
   {
	   n=n/10;
   }
	   printf("The first digit of the number is :%d\n",n);
   
   return 0;
}
	   
