#include<stdio.h>
#include<conio.h>


int factorial(int a);

int main(){
int num,temp=1;
printf("Enter a number :");
scanf("%d",&num);
printf("%d",factorial(num));
}

int factorial(int a){
int temp=1;
for(int i=a;i>=1;i--){
	temp=temp*i;
}
return temp;	
}
