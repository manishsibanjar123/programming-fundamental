/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet : 06
Program : WAP to print arithmetic operation
Date : 25 nov,2016
*/

#include<stdio.h>
#include<conio.h>

void main() {
  int a,b,add,sub,multi,div,modulus;
printf("enter the first number\n");
scanf("%d",&a);

printf("enter the second number\n");
scanf("%d",&b);

add=a+b;
sub=a-b;
multi=a*b;
div=a/b;
modulus=a%b;

printf("Sum is : %d\n",add);
printf("sub is : %d\n",sub);
printf("multi is : %d\n",multi);
printf("div is : %d\n",div);
printf("modulus is : %d\n",modulus);
}

getch();





