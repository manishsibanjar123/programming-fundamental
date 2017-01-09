/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 14
Roll no : 21
Program : WAP to check whether leap year or not
Date : 8 jan,2017
*/

#include<stdio.h>

int main(){
	int year;
printf("Enter the year\n");
scanf("%d",&year);
(year%4==0)?printf("The year is a leap year"):printf("The year is not leap year");
	
return 0;
}
