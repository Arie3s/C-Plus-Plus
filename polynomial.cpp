#include<iostream>
#include<cmath>


using namespace std;


void Quad(int deg,int a,int b,int c){
	
		float x;
		int root=0,num,i=1;
	    double roots[2] ;
	   
	    while(root<3 ){
    			x=(a*i)+(b*i)+c;
    			if(x==0){
					int k=0;
					roots[k]=i;
					k++;
				}
				root++;
				i=i+1;    			
			}
			cout<<roots[0]<<"\n "<<roots[1]<<"\n"<<roots[2];
    }
void Cube(int deg,int a,int b,int c,int d){
		float x;
		int root,i=0.0000001,k=0;
	    double roots[2];
	   
	    while(root<4 ){
    			x=(a*i)+(b*i)+c;
    			if(x==0){
					int k=0;
					roots[k]=i;
					k++;
				}
				root++;
				i=i+0.0000001;    			
			}
			
			cout<<roots;
		   
		}
    	
void deg4(int deg,int a,int b,int c,int d,int e){
		float x;
		int root,i=0.0000001,k=0;
	    double roots[3];
	   
	    while(root<5 ){
    			x=(a*i)+(b*i)+c;
    			if(x==0){
					int k=0;
					roots[k]=i;
					k++;
				}
				root++;
				i=i+0.0000001;    			
			}
			cout<<roots;
    }		


int main(){
	int deg,a,b,c,d,e;
	cout<<"Main Menu"<<"\nEnter the degree of equation you want to solve :";
	cin>>deg;
	switch(deg){
		case 2:
			cout<<"Enter a :";
			cin>>a;
			cout<<"Enter b :";
			cin>>b;
			cout<<"Enter c :";
			cin>>c;
			Quad(deg,a,b,c);
	break;
	    case 3:
			cout<<"Enter a :";
			cin>>a;
			cout<<"Enter b :";
			cin>>b;
			cout<<"Enter c :";
			cin>>c;
			cout<<"Enter d :";
			cin>>d;
			Cube(deg,a,b,c,d);
	break;
	    case 4:
			cout<<"Enter a :";
			cin>>a;
			cout<<"Enter b :";
			cin>>b;
			cout<<"Enter c :";
			cin>>c;
			cout<<"Enter d :";
			cin>>d;	
			cout<<"Enter e :";
			cin>>e;
			deg4(deg,a,b,c,d,e);
	break;
	    default:
		cout<<"not supported";
	break;	
	}
	
	
		
}
