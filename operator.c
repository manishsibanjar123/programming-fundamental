/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 08
Program : WAP to use assignment operator
Date : 30,Nov 2016
*/

#include<stdio.h>
#include<conio.h>

int main () {
int a,b;
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
a+=b;
printf("the add is = %d\n",a);
a-=b;
printf("the subtraction is = %d\n",a);
a*=b;
printf("the product is = %d\n",a);
a/=b;
printf("the div is = %d\n",a);
getch();
return 0;
}


