#include<iostream>
using namespace std;

string hello(string name,int age){
cout<<"hello "<<name<<" you are "<<age<<endl;

}
//only functions declared above the main function will be useable
string grade(int per);

int main(){
string name;
int age;
int per;
cout<<"Enter your name :";
cin>>name;
cout<<"Enter your age :";
cin>>age;
cout<<"Enter your percentage :";
cin>>per;
grade(per);
hello(name,age);

}

string grade(int per){
if(per>90){
cout<<"your grade is A-1";
}
else if(per>80){
cout<<"your grade is A";	
}
else if(per>70){
cout<<"your grade is B";	
}
else if(per>60){
cout<<"your grade is C";	
}
else if(per>50){
cout<<"your grade is D";	
}
else if(per<50){
cout<<"you fail";	
}
else{
cout<<"Invalid percentage";	
}	
}	

