#include<iostream>

using namespace std;

bool prime(int num){
	bool isPrime=true;
	for (int i=2;i<num;i++){
		if(num%i ==0){
		    isPrime=false;
		}
		else if(num%i !=0){
			isPrime=true;
		}
	return isPrime;		
	}
}



int main(){
	int num;
	
	cout<<"Please Enter a number :";
	cin>>num;
    
    cout<<prime(num);
	
	 
	}
	
