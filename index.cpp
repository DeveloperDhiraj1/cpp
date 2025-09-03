
#include <iostream>
using namespace std;
class cricketplayer{
    public:
    string pname;
    int runs;
    void displayrun(){
        cout<<"run score"<<pname<<"="<<runs;
    }
};
int main() {
    cricketplayer player1;
    player1.pname="rohit";
    player1.runs=100;
    player1.displayrun();

    cricketplayer player2;
    player2.pname="sachin";
    player2.runs=200;
    player2.displayrun();
    return 0;
}