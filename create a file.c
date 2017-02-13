/*
Student Name : Manish Sibanjar
Subject Name : Programming fundamental
Lab sheet no : 26
Program : WAP to create a file and insert data to it
Date : 13 Feb, 2017
*/

#include<stdio.h>
#include<conio.h>

int main (){
FILE *fp;
fp = fopen("E:/sunway/test.txt", "a");
fprintf(fp, "This data is saved to title\n");
fputs("This is another line in the file\n", fp);
fclose(fp);
return 0;
}
