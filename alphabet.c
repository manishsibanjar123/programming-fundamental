/*
Student Name : Manish Sibanjar
Subject : Programming fundamental
Roll no : 17
Lab sheet no : 13
Program : WAP to check character alphabet or not
Date : 21 Dec,2016
 */
 
 #include<stdio.h>
 
 int main () {
	 char c;
printf("Enter any character\n");
scanf("%c",&c);

if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
	printf("The character %c is a vowel\n",c);
}	

else
{
	printf("The character %c is not vowel\n",c);
}
return 0;
}
