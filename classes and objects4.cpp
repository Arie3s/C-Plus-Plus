#include<iostream>

using namespace std;

class Book{
	public:
		string Title;
		string Author;
		string ISBN;
	    int Pages;
		int Price;
};
//classes are basically new data formats used to personalise program
//template ,blue print of a data type


int main(){
	Book book1;
	book1.Title="Relativity the speacial and the General theory";
	book1.Author="Albert.Einstein";
	book1.ISBN="978-81-7599-465-2";
	book1.Pages=187;
	book1.Price=645;
//book1 is an objects the data needed to define the object is specified in class
//above an object book1 is created which has been given the necessaru data to define book1
    Book book2;
	book2.Title="QED";
	book2.Author="Richard p feynman";
	book2.ISBN="078-80-7119-445-2";
	book2.Pages=240;
	book2.Price=1045;

	Book book3;
	book3.Title="The grand design";
	book3.Author="Stephen hawking";
	book3.ISBN="864-84-8647-515-2";
	book3.Pages=170;
	book3.Price=1500;

cout<<"Title :"<<book1.Title<<endl<<"Author :"<<book1.Author<<endl<<"ISBN :"<<book1.ISBN<<endl<<"Pages :"<<book1.Pages
<<endl<<"Price :"<<book1.Price<<endl<<endl;
//book1 data is  outputted
cout<<"Title :"<<book2.Title<<endl<<"Author :"<<book2.Author<<endl<<"ISBN :"<<book2.ISBN<<endl<<"Pages :"<<book2.Pages
<<endl<<"Price :"<<book2.Price<<endl<<endl;

cout<<"Title :"<<book3.Title<<endl<<"Author :"<<book3.Author<<endl<<"ISBN :"<<book3.ISBN<<endl<<"Pages :"<<book3.Pages
<<endl<<"Price :"<<book3.Price<<endl<<endl;
	
}

