/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 10
Program : WAP to check number is odd or even
Date : 7 Dec,2016
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
if(a>=b&& a>=c)
{
 printf("The largest number is :%d\n",a);
}
else if(b>=a&& b>=c)
{
printf("The largest number is : %d\n",b);
}
else(c>=a&& c>=b)
{
printf("The largest number is : %d\n",c);
}
getch();
return 0;
}
