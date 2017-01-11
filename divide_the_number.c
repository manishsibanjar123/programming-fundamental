/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 17
Roll no : 21
Program : WAP to display the number by dividing by 10 and divide it by another number
Date : 11 jan,2017
*/

#include<stdio.h>

int main(){
	int n,a,b,c,d;
	printf("Enter any four digit number\n");
	scanf("%d",&n);
    a=n/10;
    b=a/10;
    c=b/10;
    printf("The first digit of the number is : %d\n",c);
    d=n%10;
    printf("The last digit of the number is : %d\n",d);
    return 0;
    }
    
