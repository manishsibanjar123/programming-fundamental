/*
Student name : Manish Sibanjar
Subject : Programming fundamental
Lab sheet no : 25
Program : WAP to create a structure,assign value and display the value
Date : 3 feb,2017
*/

#include<stdio.h>
struct student{
	int student_id;
	int registration_id;
	float fee;
};
int main (){
	struct student manish;
	manish.student_id=101;
	manish.registration_id=1005;
	manish.fee=10000.50;
	printf("manish id = %d\n",manish.student_id);
	printf("manish registration id = %d\n",manish.registration_id);
	printf("manish fee = %f\n",manish.fee);
	return 0;
}
