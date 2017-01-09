/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 14
Roll no : 21
Program : WAP to check alphabet or not using ternary operator
Date : 8 jan,2017
*/

#include<stdio.h>

int main(){
	char a;
	int ASCII;
printf("Enter any character\n");
scanf("%c",&a);
ASCII=a;
((ASCII>=97&&ASCII<=122)||(ASCII>=65&&ASCII<=97))?printf("The character is alphabet\n"):printf("The character is not alphabet\n");

return 0;
}
