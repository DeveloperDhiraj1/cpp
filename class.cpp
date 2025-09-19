#include<iostream>
#include<string>

using namespace std;

class CricketPlayer{
    private:
    int runs;
    public:
    string pname;
    
    //declaring static variable
    static int playerCounter;
    
    //this is a special function which runs
    //when the object is created
    CricketPlayer(string name,int score){
    	playerCounter=playerCounter+1;
    //	cout<<"constructor is called"<<endl;
        pname=name;
        runs=score;
    }
    
    void displayRuns(){
        cout<<"runs scored by "<<pname<<"= "<<runs;
        cout<<endl;
    }
    
    void setRuns(int run){
        if(run<0){
            runs=0;
        }
        else{
            runs=run;
        }
    }
	
	//this is a destructor function
	//this is called just before object
	//is destroyed
	~CricketPlayer(){
	
//	cout<<"destructor is called"<<endl;

	} 
  
};

//static variable defined outside class
//but declared inside class
int  CricketPlayer::playerCounter=0;


int main(){
    CricketPlayer player1("sachin",500);
    CricketPlayer player2("virat",100);
    CricketPlayer player3("dhoni",50);
    CricketPlayer player4("kapil",150);
    CricketPlayer player5("UV",20);

	cout<<"number of players = "<<CricketPlayer::playerCounter<<endl;

    
      
return 0;
}