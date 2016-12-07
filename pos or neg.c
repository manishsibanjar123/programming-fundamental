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
    int a;
printf("Enter the number\n");
scanf("%d",&a);
if(a%2==0)
{
 printf("The number is even\n");
}
else
{
printf("The number is odd\n");
}
getch();
return 0;
}
