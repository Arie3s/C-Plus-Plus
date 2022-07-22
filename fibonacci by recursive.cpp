#include<iostream>

using namespace std;

 int fib(int num){
	
	
	if(num==1){
		return 0;
	}
	else if(num==2 || num==3){
		return 1;
	}
	else{
		return (fib(num-1)+fib(num-2));
		
	}
  }


	
int main(){
	int num;
	cout<<"Enter a position limit of fibonacci series"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++){	
	cout<<fib(i)<<"\t";
	
	}
		
}


