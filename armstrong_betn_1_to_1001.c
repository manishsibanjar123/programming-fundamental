/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 22
Program : WAP to check prime no. or not
Date : 23 jan,2017
*/

#include<stdio.h>

int main(){
	int i,sum=0,num,r;
for(i=1;i<=1000;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			r=num%10;
			sum=sum+(r*r*r);
			num=num/10;
		}
	if(sum==i)
	{
	printf("%d\n",i);
    }
    
    }
	return 0;
}	
