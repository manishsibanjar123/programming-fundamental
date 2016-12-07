/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 10
Program : WAP to logical operator
Date : 7 Dec,2016
*/

#include<stdio.h>
#include<conio.h>

int main () {
    int a;

printf("Enter the number\n");
scanf("%d",&a);

if (a>=80)
{
printf("Distinction\n");
}
if(a>=60&& a<=80)
{
printf("First division\n");
}
if(a>=45&& a<=60)
{
printf("Third division\n");
}
if(a<=40)
{
printf("Failed\n");
}
getch ();
return 0;
}
