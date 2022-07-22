#include<iostream>
using namespace std;

int main(){
int grid[3][2]={
{9,8},
{7,6},
{5,4},              
};

for(int a=0;a<grid.size();a++){
	for(int b=0;b<2;b++){
		cout<<grid[a][b]<<endl;
	}
}
}
//for loop a loops loop b and in loop b array is printed
