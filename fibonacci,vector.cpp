#include<iostream>
#include<vector>
using namespace std;

int main(){
	int num;
	int temp;	
	cout<<"Enter the number you want the fibonacci sequence"<<endl<<flush;	
	cin>>num;
	vector<int>fibonacci(num);
	fibonacci[0]=1;
	fibonacci[1]=2;
	fibonacci[2]=3;
	system("cls");
		
	for(int i=1;i<=num;i++){
		temp=fibonacci[i]+fibonacci[i-1];
		fibonacci[i+1]=temp;
		
	}
 
 for(int i=0;i<=fibonacci.size();i++){
 	cout<<fibonacci[i]<<endl;
 }

}
