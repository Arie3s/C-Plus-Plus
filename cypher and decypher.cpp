#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

string cypher(string s){ 

	for(int i=0;i<=s.length();i++){
		if(s[i]=='a'){
			s[i]='*';
		}
		else if(s[i]=='c' || s[i]=='C'){
			s[i]='/';
		}
		else if(s[i]=='e' || s[i]=='E'){
			s[i]='!';
		}
		else if(s[i]=='g' || s[i]=='G'){
			s[i]='@';
		}
		else if(s[i]=='i' || s[i]=='I'){
			s[i]='1';
		}
		else if(s[i]=='k' || s[i]=='K'){
			s[i]='2';
		}
		else if(s[i]=='m' || s[i]=='M'){
			s[i]='3';
		}
		else if(s[i]=='o' || s[i]=='O'){
			s[i]='4';
		}
		else if(s[i]=='q' || s[i]=='Q'){
			s[i]='5';
		}
		else if(s[i]=='s' || s[i]=='S'){
			s[i]='6';
		}
		else if(s[i]=='u' || s[i]=='U'){
			s[i]='7';
		}
		else if(s[i]=='w' || s[i]=='W'){
			s[i]='8';
		}
		else if(s[i]=='y' || s[i]=='Y'){
			s[i]='9';
		}
		
		
	}
  return s;
}

string decypher(string s){
	
	for(int i=0;i<=s.length();i++){
		if(s[i]=='*'){
			s[i]='a';
		}
		else if(s[i]=='/'){
			s[i]='c';
		}
		else if(s[i]=='!'){
			s[i]='e';
		}
		else if(s[i]=='@'){
			s[i]='g';
		}
		else if(s[i]=='1'){
			s[i]='i';
		}
		else if(s[i]=='2'){
			s[i]='k';
		}
		else if(s[i]=='3'){
			s[i]='m';
		}
		else if(s[i]=='4'){
			s[i]='o';
		}
		else if(s[i]=='5'){
			s[i]='q';
		}
		else if(s[i]=='6'){
			s[i]='s';
		}
		else if(s[i]=='7'){
			s[i]='u';
		}
		else if(s[i]=='8'){
			s[i]='w';
		}
		else if(s[i]=='9'){
			s[i]='y';
		}
	
	}
  return s;
}

int main(){
	string s;
	int option;
	cout<<"Please select an option\n1.Cypher\n2.Decypher\n3.Exit"<<endl;
	cout<<"option :";
	cin>>option;
	system("cls");
	switch(option){
		case 1:
			cout<<"Enter the orignal message"<<endl;
			cin>>s;
			system("cls");
			cout<<cypher(s);
			break;
		case 2:
			cout<<"Enter the cyphered message"<<endl;
			cin>>s;
			system("cls");
			cout<<decypher(s);
			break;
		case 3:
			exit(0);
	}
}
