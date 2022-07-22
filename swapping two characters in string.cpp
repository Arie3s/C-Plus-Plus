#include<iostream>


using namespace std;

string charswap(string s,char c1, char c2){
for(int i=0;i<=s.length()-1;i++){
	if(s[i]==c1){
		s[i]=c2;
	}
	else if(s[i]==c2){
		s[i]=c1;
	}
}
return s;
}


int main(){
	string s="Bahria college karsaz";
	char c1='l',c2='a';
	cout<<charswap(s,c1,c2);
}
