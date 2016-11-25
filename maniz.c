/*
Student name : Manish Sibanjar
Subject : programming fundamental
Lab sheet : 06
Program : write a program to enter P,T,R and calculate compound interest
Date : 25 Nov,2016
*/

#include<stdio.h>
#include<conio.h>

void main() {
float P,T,R,CI,E;
printf("Enter the principal amount\n");
scanf("%f",&P);

printf("Enter the time\n");
scanf("%f",&T);

printf("Enter the rate\n");
scanf("%f",&R);

E=1+R/100;

CI=(P*pow(E,T)-1);
printf("the compound interest is : %f",CI);


getch();
return 0;
}

