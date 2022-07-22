#include<iostream>

using namespace std;

class Chef{
	public:
		void chicken(){
		cout<<"Chef makes chicken soup"<<endl;}
		void Salad(){
		cout<<"Chef makes salad"<<endl;}
};

class ItalianChef :public Chef{
	public:
		void pizza(){
			cout<<"Italian chef makes pizza"<<endl;
		}		
};


int main(){

ItalianChef newChef;
newChef.chicken();
newChef.pizza();
//new chef can both do functions specified to it and the inherited functions of chef
Chef oldChef;
oldChef.chicken();
oldChef.Salad();
//but old chef can nly do functions appointed to it
}
