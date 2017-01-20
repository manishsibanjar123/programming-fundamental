/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 21
Program : WAP to print fibonacci series
Date : 20 jan,2017
*/

#include<stdio.h>

int main (){
    int n,sum=0,i,r=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
   
    }
if(sum==i)
{
	printf("The number is armstrong\n");
}
else
{
	printf("The number is not armstrong\n");
}
return 0;
}
