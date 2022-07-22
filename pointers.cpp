#include<iostream>
using namespace std;

int main(){
	string name="wali";
	string *pname=&name;
	double gpa=3.9;
	double *pgpa=&gpa;
	int age =18;
	int *page=&age;
	
	
	cout<<"Name :"<<&name<<endl<<"Gpa :"<<&gpa<<endl<<"Age :"<<&age<<endl;
	//prints memmory addresses also called pointers
	cout<<"Name :"<<pname<<endl<<"Gpa :"<<pgpa<<endl<<"Age :"<<page<<endl;
	//does the same thing but now the addresses are stored in pointer variables
    cout<<"Name :"<<*pname<<endl<<"Gpa :"<<*pgpa<<endl<<"Age :"<<*page;
    //prints out the data stored at the addresses due to"*" called derefrenceing
}
