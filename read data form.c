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
    FILE *fp;
    char data[255];
    fp = fopen("E:/sunway/test.txt","r");
    fscanf(fp,"%s",data);
    printf("%s",data);
    printf("\n");
    fclose(fp);
    return 0;
}
