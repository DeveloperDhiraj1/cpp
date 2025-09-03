#include <iostream>
using namespace std;
class cricketplayer{
    public:
    string pname;
    private:
    int runs;
    void displayrun(){
        cout<<"run score"<<pname<<"="<<runs;
    }
    void setruns(int run){
        if run>=0{
            runs=0;
        }
        else{
            runs=run;
        }
    }
};
int main() {
    cricketplayer player1;
    player1.pname="rohit";
    player1.setruns(100);
    player1.displayrun();

    cricketplayer player2;
    player2.pname="sachin";
    player2.setruns(200);
    player2.displayrun();
    return 0;
}