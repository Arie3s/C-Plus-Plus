#include<iostream>

float tbt(float a,float b, float c, float d);
float thbth(float a,float b, float c, float d,float e,float f, float g, float h, float i);
int main(){
	int chc=0;
	float a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
	std::cout<<"1. 2 X 2\n2. 3 X 3\n";
	std::cout<<"choice :";
	std::cin>>chc;
	switch(chc){
		case 1:
			std::cout<<"Enter a:";
			std::cin>>a;
			std::cout<<"Enter b:";
			std::cin>>b;
			std::cout<<"Enter c:";
			std::cin>>c;
			std::cout<<"Enter d:";
			std::cin>>d;
			tbt(a,b,c,d);
			system("pause");
			break;
		case 2:
			std::cout<<"Enter a:";
			std::cin>>a;
			std::cout<<"Enter b:";
			std::cin>>b;
			std::cout<<"Enter c:";
			std::cin>>c;
			std::cout<<"Enter d:";
			std::cin>>d;
			std::cout<<"Enter e:";
			std::cin>>e;
			std::cout<<"Enter f:";
			std::cin>>f;
			std::cout<<"Enter g:";
			std::cin>>g;
			std::cout<<"Enter h:";
			std::cin>>h;
			std::cout<<"Enter i:";
			std::cin>>i;
			thbth(a,b,c,d,e,f,g,h,i);
			system("pause");
			break;
			
			
	}
}
float tbt(float a,float b, float c, float d){
	
	std::cout<<"Determinant ="<<(a*d)-(b*c)<<"\n";
}
float thbth(float a,float b, float c, float d,float e,float f, float g, float h, float i){
	float det=a*((e*i)-(h*f))-b*((d*i)-(g*f))+c*((d*h)-(g*e));
	std::cout<<"Determinant="<<det<<"\n";
}

