#include<iostream>

using namespace std;

float powerFunc(float num,float power){
float ans=1;
 
 for(int i=0;i<power;i++){
 	ans*=num;
 }
return ans;
}

int main(){
float num;
float power;

cout<<"Enter the number you want to power :";
cin>>num;
cout<<"Enter the power you want to reach :";
cin>>power;
cout<<"Your answer is "<<powerFunc(num,power);
	
	
}

