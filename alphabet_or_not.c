/*
Student Name : Manish Sibanjar
Subject : Programming fundamental
Roll no : 17
Lab sheet no : 13
Program : WAP to check assigned character is alphabet or not
Date : 21 Dec,2016
 */

#include<stdio.h>

int main () {
	char c;
	int ASCII;
printf("Enter any character\n");
scanf("%c",&c);
ASCII=c;

if(ASCII>=65&&ASCII<=90||ASCII>=97&&ASCII<=122)
{
	printf("The character %c is an alphabet",c);
}

else 
{
   printf("The character %c is not an alphabet",c);
}
return 0;
}
