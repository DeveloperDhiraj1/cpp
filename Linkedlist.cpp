#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->data=value;
        this->Node=NULL;
    }
};
int main(){
    int value;
    cout<<"enter valur";
    cin>>value;
    Node ob(value);
    head=&ob;
    ob.data=value;
    ob.next=NULL;

    Node ob2;
    ob2.data=25;
    ob.next=NULL;
    head->next=&ob2;
    cout<<ob.data;
    cout<<head->next->data;
    return 0;
    

}