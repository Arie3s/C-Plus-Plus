#include<iostream>

using namespace std;


class Movie{
	private:
		string rating;
	public:
		string title;
		string director;
	     Movie(string atitle,string adirector,string arating){
	 	 title=atitle;
	 	 director=adirector;
	 	 setRating(arating);
	    }
	 void setRating(string arating){
	 	if(arating=="G"||arating=="PG"||arating=="PG-13"||arating=="R"||arating=="NR"){		 
		 	 rating=arating;
	    }
	    else{
	    	rating="NR";
		}
	 }
	 //set function
	 string getRating(){
	 	return rating;
	 }
	 //get function
};


int main(){
	Movie avengers("The Endgame","Joss whedon","PG-13");
	avengers.setRating("dog");
	cout<<avengers.getRating();
}
