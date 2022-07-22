#include<iostream>

using namespace std;

class Book{
	public:
		string title;
		string author;
		int price;
    Book(string title,string author,int price){ //A constructor function will do something when an object is added or made
    	cout<<title<<endl<<author<<endl<<price<<endl<<"added"<<endl; 
	}
};

int main(){
string	title;
string	author;
int     price;	

    cout<<"Enter title :"<<endl;
    cin>>title;
	cout<<"Enter author :";
	cin>>author;
	cout<<"Enter price :";
	cin>>price;
	
	Book books(title,author,price);
	
}
