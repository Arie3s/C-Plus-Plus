#include<iostream>

using namespace std;

class Student{
	public:
		string name;
		string major;
		double gpa;
		Student(string Aname,string Amajor,double Agpa){
			name=Aname;
			major=Amajor;
			gpa=Agpa;
		}
		//constructor function
		
	bool honors(){
		if(gpa>=3.5){
			return true;
		}
		else{
		return false;}
	}
	//an object function which can be used by an object	
};

int main(){
	Student student1("Wali","Physics",3.6);
	Student student2("Alex","Computer science",3.9);
	Student student3("Beth","Computer engineering",3.1);
	
	cout<<student1.honors()<<endl;
	cout<<student2.honors()<<endl;
	cout<<student3.honors()<<endl;
	
}
