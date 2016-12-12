/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Roll no : 17
Lab sheet no : 11
Program : WAP to print largest no.using ternary operator
Date : 12 Dec,2016
*/

#include<stdio.h>
#include<conio.h>

int main () {
    int a,b,c;
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
printf("Enter the third number\n");
scanf("%d",&c);

(a>=b&&a>=c)?printf("%d is the largest number\n",a):(b>=a&&b>=c)?printf("%d is the largest number\n",b):printf("%d is the largest number\n",c);

getch ();
return 0;
}

