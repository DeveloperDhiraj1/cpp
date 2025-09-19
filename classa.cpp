#include<iostream>
#include<string>

using namespace std;
 classA{
    int num;
    public:
    void setnum(int n){
        num=n;
    }
 }
 int main(){
    classA obj{
        obj.setnum(5);
        return 0;
    }
    
 }