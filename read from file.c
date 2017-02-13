/*
Student Name : Manish Sibanjar
Subject Name : Programming fundamental
Lab sheet no : 26
Program : WAP to read data form a file
Date : 13 Feb, 2017
*/

#include<stdio.h>
#include<conio.h>
int main (){
int r=1;
    FILE *fp;
    char data[255] = "The data on the file:";
    fp = fopen("E:/sunway/test.txt","r");
    do
        {
    printf("%s",data);
    printf("\n");
    r = fscanf(fp,"%s",data);
        }
    while(r==1);
    fclose(fp);
    return 0;
}
