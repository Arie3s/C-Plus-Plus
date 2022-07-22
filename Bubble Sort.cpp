#include<iostream>

using namespace std;

int ascsort(int size,int num[size]);

int main(){
	int temp;
	cout<<"Enter the number of elements :";
	cin>>temp;
	int size=temp-1,num[size];
	for(int i=0;i<=size;i++){
		cout<<"Enter number :";
		cin>>num[i];
	}
	cout<<ascsort(size,num[size]);
	
}

int ascsort(int size,int num[size]){
	
		for(int a=0;a<=size;a++){
		for(int b=1;b<=4-a;b++){
		  int temp;
		   if(num[a]<=num[a+b]){
			 temp=num[a+b];
			 num[a+b]=num[a];
			 num[a]=temp;
		}
		}
	}
}
