/*
 Student name : Manish Sibanjar
 Subject : programming fundamental
 Roll no : 21
 Lab sheet no : 18
 Program : WAP to print the number reversly using loop
 Date : 13 jan,2017
 */

#include<stdio.h>

int main (){
 int n,rev=0,rem;
 printf("Enter any number\n");
 scanf("%d",&n);
 
 while(n>0)
 {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
   
}
	
  printf("The reverse of the number is:%d \n",rev);

 return 0;
}
 
