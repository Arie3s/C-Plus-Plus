#include<iostream>
using namespace std;
int main(){
int row=3,col=2,depth=2;
int arr[row][col][depth];
for(int k=0;k<=depth;depth++){
    for(int j=0;j<=col;col++){
        for(int i=0;i<=row;i++){
            arr[i][j][k]=i+j+k;
            }
        }
    }
int arr[row][col][depth];
for(int k=0;k<=depth;depth++){
    for(int j=0;j<=col;col++){
        for(int i=0;i<=row;i++){
            cout<<arr[i][j][k];
            }
        }
    }
}
