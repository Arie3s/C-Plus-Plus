#include<stdio.h>
#include<iostream>

int main(){
	int num,temp;;
	
	printf("Enter a number");
	scanf("%d",&num);
	
	for(int a=1;a<=num;a++){
		for(int b=0;b<=num;b++){
			temp=b;
			printf("%d \n",a+temp);
		
		}
	}
	system("pause");
}
