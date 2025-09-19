#include<iostream>
#include<string>
using  namespace std;
class cricket{
    private:
    string playername;
    protected:
    string teamsecret;
    public:
    string name;
    string country;
    cricketer(int n,string c){
        name=n;
        country=c;
    }
    void display(){
        cout<<"name"<<name<<endl;
        cout<<"country"<<country<<endl;
    }
}
int main(){
    cricketer obj("sachin","india")
    obj.display();
    return 0;
    
}