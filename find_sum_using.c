/*
Student Name : Manish sibanjar
Subject : Programming fundamental
Lab sheet no : 23
Program : WAP to find sum of number using function
Date : 25 jan,2017
*/

#include<stdio.h>
void sum ();
int main(){
	sum();
	return 0;
	
}
void sum(){
	int a,b,add;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	add = a+b;
	printf("The sum of the number is : %d",add);
}
    
