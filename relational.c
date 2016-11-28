/*
Student name : Manish Sibanjar
Sunject : programming fundamental
Lab sheet no : 07
Program : Relational operation
Date : 28 Nov,2016
*/

#include<stdio.h>
#include<conio.h>

int main () {
    int a,b,c,d,e,f,total,percentage,average;
printf("Enter the mark of computer architecture\n");
scanf("%d",&a);
printf("Enter the mark of algebra\n");
scanf("%d",&b);
printf("Enter the mark of software engineering\n");
scanf("%d",&c);
printf("Enter the mark of fundamental programming\n");
scanf("%d",&d);
printf("Enter the mark of discrete structure\n");
scanf("%d",&e);
printf("Enter the mark of interactive skill\n");
scanf("%d",&f);
total = a+b+c+d+e+f;
average = total/6;
percentage = total/6;
printf("the total marks is :%d\n",total);
printf("the average marks is : %d\n",average);
printf("the percentage is : %d\n",percentage);

getch();
return 0;
}


