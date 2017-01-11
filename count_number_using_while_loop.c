#include<stdio.h>

int main (){
    int count,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    count=0;
    while(n>0)
    {
		n=n/10;
		count++;
	}
	printf("The number of digit is : %d\n",count);
	return 0;
}
    
